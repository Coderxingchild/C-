#include "contact.h"

void InitContact(contact_t **ct)
{
	FILE *fp = fopen(SAVE_FILE, "rb");
	if (fp == NULL) {
		*ct = (contact_t *)malloc(sizeof(contact_t) + INIT_NUM * sizeof(person_t));
		if (*ct == NULL) {
			perror("malloc");
			exit(1);
		}
		(*ct)->size = 0;
		(*ct)->cap = INIT_NUM;
		printf("Using Default Init!\n");
	}
	else {
		contact_t temp;
		fread(&temp, sizeof(contact_t), 1, fp); 
		*ct = (contact_t *)malloc(sizeof(contact_t) + temp.cap * sizeof(person_t));
		if (*ct == NULL) {
			perror("malloc");
			exit(2);
		}
		memcpy(*ct, &temp, sizeof(contact_t));
		fread((*ct)->friends, sizeof(person_t), (*ct)->size, fp);
		printf("Using Sava.txt Init!\n");
		fclose(fp);
	}
}
static int IsExist(contact_t *ct, person_t *p)          //�ж��Ƿ������ͬ��ϵ��
{
	assert(ct);
	assert(p);
	int i = 0;
	for (; i < ct->size; i++) {
		if (strcmp(ct->friends[i].name, p->name) == 0) {
			return 1; 
		}
	}
	return 0;
}
static int IsFull(contact_t *ct)                    //�ж�ͨѶ¼��
{
	return ct->cap == ct->size;
}
static int IsEmpty(contact_t *ct)                   //�п�
{
	return ct->size == 0;
}
static int Inc(contact_t **ct)                    //�Զ�����
{
	assert(ct);
	contact_t *ct_temp = (contact_t *)realloc(*ct, sizeof(contact_t) + ((*ct)->cap + INC_SIZE) * sizeof(person_t));
	if (ct_temp == NULL) {
		return 0;
	}
	*ct = ct_temp;
	(*ct)->cap += INC_SIZE;
	printf("�Զ����ݳɹ�!\n");
	return 1;
}
void AddFriend(contact_t **ct)
{
	assert(ct);
	//ͨѶ¼�Ѿ������أ��Զ����ݣ�
	if (!IsFull(*ct) || Inc(ct)) { //���û����������к������룬������ˣ��Զ�����&&���ݳɹ�
		person_t p;
		printf("�����������û�������# ");
		scanf("%s", p.name);                  //name��һ������
		printf("�����������û����Ա�# ");
		scanf("%s", p.sex);
		printf("�����������û�������# ");
		scanf("%d", &(p.age));                //int----age
		printf("�����������û��ĵ绰# ");
		scanf("%s", p.telphone);
		printf("�����������û��ĵ�ַ# ");
		scanf("%s", p.address);
		//�ж���ǰ�û��Ƿ��Ѿ����ڣ�
		if (IsExist(*ct, &p)) {
			printf("%s �Ѿ����ڣ��벻Ҫ�ظ�����!\n", p.name);
			return;
		}
		//(*ct)->friends[(*ct)->size] = p;
		memcpy((*ct)->friends + (*ct)->size, &p, sizeof(p));
		(*ct)->size += 1;
		printf("�����û� %s �ɹ�!\n", p.name);
	}
	else {
		printf("����ʧ��!\n");
	}
}
static int SearchCore(contact_t *ct, const char *name)                //�������ֲ�����ϵ��
{
	assert(ct);
	assert(name);
	int i = 0;
	for (; i < ct->size; i++) {
		person_t *p = ct->friends + i;
		if (strcmp(name, p->name) == 0) {
			return i;
		}
	}
	return -1;
}
void SearchFriend(contact_t *ct)                         //����
{
	assert(ct);
	printf("��������Ҫ���ҵ��˵�����# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0) {
		person_t *p = ct->friends + i;
		printf("|%-10s|%-10s|%-10d|%-10s|%-10s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
	else {
		printf("��Ҫ���ҵ��� %s ������!\n", name);
	}
	return;
}

void ClearContact(contact_t *ct)                      //���
{
	assert(ct);
	ct->size = 0;
}
void DelFriend(contact_t *ct)                   //ɾ��
{
	assert(ct);
	printf("��������Ҫɾ�����˵�����# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0) {
		ct->friends[i] = ct->friends[ct->size - 1];              //�����һ���˵���Ϣ���ǵ���ǰλ��
		ct->size -= 1;
	}
	else {
		printf("��Ҫɾ������ %s ������!\n", name);
	}
}
void ShowContact(contact_t *ct)                               //��ʾ��ϵ����Ϣ
{ 
	assert(ct);
	int i = 0;
	printf("\n| cap: %6d | size: %6d |\n\n", ct->cap, ct->size);
	printf("|%-10s|%-10s|%-10s|%-10s|%-10s|\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (; i < ct->size; i++) {
		person_t *p = ct->friends + i;
		printf("|%-10s|%-10s|%-10d|%-10s|%-10s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
	printf("\n");
}
static int CmpPerson(const void *p1, const void *p2)               //�ַ����Ƚ�-----����
{
	assert(p1);
	assert(p2);
	person_t *_p1 = (person_t *)p1;
	person_t *_p2 = (person_t *)p2;
	return strcmp(_p1->name, _p2->name); //1, 0, -1
}
void SortContact(contact_t *ct)
{
	assert(ct);
	if (!IsEmpty(ct)) {
		qsort(ct->friends, ct->size, sizeof(person_t), CmpPerson);                    //qsort ����
	}
}

void SaveContact(contact_t *ct)                                            //���ļ���ʽ����
{
	assert(ct);
	FILE *fp = fopen(SAVE_FILE, "wb");                               //wb----������д��ķ�ʽ
	if (fp == NULL) {
		printf("save error!\n");
		return;
	}
	fwrite(ct, sizeof(contact_t), 1, fp);
	fwrite(ct->friends, sizeof(person_t), ct->size, fp);
	fclose(fp);                                                  //fopen-----fclose �ļ��Ļ�������
}
void ModFriend(contact_t *ct)
{
	assert(ct);
	printf("��������Ҫ�޸ĵ��˵�����# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0) {
		int j = 0;
		printf("�޸�ʲô����:>\n");
		printf("1������  2���Ա�  3������  4���绰  5��סַ\n");
		scanf("%d", &j);
		switch (j) {
		case 1:
			printf("�������µ�����:>");
			char Newname[NAME_SIZE] = { 0 };
			scanf("%s", &Newname);
			strcpy(ct->friends[i].name, Newname);
			break;
		case 2:
			printf("�������µ��Ա�:>");
			int Newsex[SEX_SIZE] = { 0 };
			scanf("%s", &Newsex);
			strcpy(ct->friends[i].sex, Newsex);
			break;
		case 3:
			printf("�������µ�����:>");
			int Newage = 0;
			scanf("%d", &Newage);
			ct->friends[i].age = Newage;
			break;
		case 4:
			printf("�������µĵ绰:>");
			char Newtelphone[TELPHONE_SIZE] = { 0 };
			scanf("%s", &Newtelphone);
			strcpy(ct->friends[i].telphone, Newtelphone);
			break;
		case 5:
			printf("�������µ�סַ:>");
			char Newaddress[ADDRESS_SIZE] = { 0 };
			scanf("%s", &Newaddress);
			strcpy(ct->friends[i].address, Newaddress);
			break;
		default:
			printf("�����������\n");
		}
	}
	else {
		printf("��Ҫ�޸ĵ��� %s ������!\n", name);
		return;
	}
}
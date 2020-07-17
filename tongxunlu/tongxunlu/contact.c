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
static int IsExist(contact_t *ct, person_t *p)          //判断是否存在相同联系人
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
static int IsFull(contact_t *ct)                    //判断通讯录满
{
	return ct->cap == ct->size;
}
static int IsEmpty(contact_t *ct)                   //判空
{
	return ct->size == 0;
}
static int Inc(contact_t **ct)                    //自动扩容
{
	assert(ct);
	contact_t *ct_temp = (contact_t *)realloc(*ct, sizeof(contact_t) + ((*ct)->cap + INC_SIZE) * sizeof(person_t));
	if (ct_temp == NULL) {
		return 0;
	}
	*ct = ct_temp;
	(*ct)->cap += INC_SIZE;
	printf("自动扩容成功!\n");
	return 1;
}
void AddFriend(contact_t **ct)
{
	assert(ct);
	//通讯录已经满了呢？自动扩容！
	if (!IsFull(*ct) || Inc(ct)) { //如果没有满，则进行后续插入，如果满了，自动扩容&&扩容成功
		person_t p;
		printf("请输入新增用户的姓名# ");
		scanf("%s", p.name);                  //name是一个数组
		printf("请输入新增用户的性别# ");
		scanf("%s", p.sex);
		printf("请输入新增用户的年龄# ");
		scanf("%d", &(p.age));                //int----age
		printf("请输入新增用户的电话# ");
		scanf("%s", p.telphone);
		printf("请输入新增用户的地址# ");
		scanf("%s", p.address);
		//判定当前用户是否已经存在？
		if (IsExist(*ct, &p)) {
			printf("%s 已经存在，请不要重复插入!\n", p.name);
			return;
		}
		//(*ct)->friends[(*ct)->size] = p;
		memcpy((*ct)->friends + (*ct)->size, &p, sizeof(p));
		(*ct)->size += 1;
		printf("新增用户 %s 成功!\n", p.name);
	}
	else {
		printf("扩容失败!\n");
	}
}
static int SearchCore(contact_t *ct, const char *name)                //按照名字查找联系人
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
void SearchFriend(contact_t *ct)                         //查找
{
	assert(ct);
	printf("请输入你要查找的人的姓名# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0) {
		person_t *p = ct->friends + i;
		printf("|%-10s|%-10s|%-10d|%-10s|%-10s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
	else {
		printf("你要查找的人 %s 不存在!\n", name);
	}
	return;
}

void ClearContact(contact_t *ct)                      //清空
{
	assert(ct);
	ct->size = 0;
}
void DelFriend(contact_t *ct)                   //删除
{
	assert(ct);
	printf("请输入你要删除的人的姓名# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0) {
		ct->friends[i] = ct->friends[ct->size - 1];              //将最后一个人的信息覆盖到当前位置
		ct->size -= 1;
	}
	else {
		printf("你要删除的人 %s 不存在!\n", name);
	}
}
void ShowContact(contact_t *ct)                               //显示联系人信息
{ 
	assert(ct);
	int i = 0;
	printf("\n| cap: %6d | size: %6d |\n\n", ct->cap, ct->size);
	printf("|%-10s|%-10s|%-10s|%-10s|%-10s|\n", "姓名", "性别", "年龄", "电话", "地址");
	for (; i < ct->size; i++) {
		person_t *p = ct->friends + i;
		printf("|%-10s|%-10s|%-10d|%-10s|%-10s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
	printf("\n");
}
static int CmpPerson(const void *p1, const void *p2)               //字符串比较-----排序
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
		qsort(ct->friends, ct->size, sizeof(person_t), CmpPerson);                    //qsort 排序
	}
}

void SaveContact(contact_t *ct)                                            //以文件方式保存
{
	assert(ct);
	FILE *fp = fopen(SAVE_FILE, "wb");                               //wb----二进制写入的方式
	if (fp == NULL) {
		printf("save error!\n");
		return;
	}
	fwrite(ct, sizeof(contact_t), 1, fp);
	fwrite(ct->friends, sizeof(person_t), ct->size, fp);
	fclose(fp);                                                  //fopen-----fclose 文件的基本操作
}
void ModFriend(contact_t *ct)
{
	assert(ct);
	printf("请输入你要修改的人的姓名# ");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0) {
		int j = 0;
		printf("修改什么内容:>\n");
		printf("1、姓名  2、性别  3、年龄  4、电话  5、住址\n");
		scanf("%d", &j);
		switch (j) {
		case 1:
			printf("请输入新的姓名:>");
			char Newname[NAME_SIZE] = { 0 };
			scanf("%s", &Newname);
			strcpy(ct->friends[i].name, Newname);
			break;
		case 2:
			printf("请输入新的性别:>");
			int Newsex[SEX_SIZE] = { 0 };
			scanf("%s", &Newsex);
			strcpy(ct->friends[i].sex, Newsex);
			break;
		case 3:
			printf("请输入新的年龄:>");
			int Newage = 0;
			scanf("%d", &Newage);
			ct->friends[i].age = Newage;
			break;
		case 4:
			printf("请输入新的电话:>");
			char Newtelphone[TELPHONE_SIZE] = { 0 };
			scanf("%s", &Newtelphone);
			strcpy(ct->friends[i].telphone, Newtelphone);
			break;
		case 5:
			printf("请输入新的住址:>");
			char Newaddress[ADDRESS_SIZE] = { 0 };
			scanf("%s", &Newaddress);
			strcpy(ct->friends[i].address, Newaddress);
			break;
		default:
			printf("你的输入有误！\n");
		}
	}
	else {
		printf("你要修改的人 %s 不存在!\n", name);
		return;
	}
}
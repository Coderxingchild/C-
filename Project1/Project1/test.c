#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include<limits.h>
#include<windows.h>
#include<assert.h>

#pragma warning (disable:4996)

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�

//int Find(int a[][5], int row, int col, int target)
//{
//	int i = 0;
//	int j = col - 1;
//	while (i < row && j >= 0) {
//		if (target < a[i][j]) {
//			j--;
//		}
//		else if (target > a[i][j]) {
//			i++;
//		}
//		else {
//			return 1;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int a[][5] = { {1, 2, 3, 4, 5},{11, 22, 33, 44, 55},
//	{111, 222, 333, 444, 555} };
//	int x = 3335;
//	int ret = Find(a, 3, 5, x);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//һ���ַ�����ת֮�������һ���ַ���

//void Reverse(char *str, int start, int end)
//{
//	while(start < end) {
//		char temp = str[start];
//		str[start] = str[end];
//		str[end] = temp;
//		start++; end--;
//	}
//}
//void LeftRotate(char *str, int len,int num)
//{
//	assert(str);
//	assert(len > 0);
//	assert(num >= 0);
//	num %= len;     //ȥ��---����
//
            //����һ
          //	����7��---d1234abc       \0 ����������
         //	����8��---1234abcd

	//while (num) {
	//	char temp = str[0];
	//	int i = 0;
	//	for (i = 0; i < len - 1; i++) {
	//		str[i] = str[i + 1];
	//	}
	//	str[i] = temp;
	//	num--;
	//}
//������
	//����ǰ���Ӵ�---����---��������
	/*Reverse(str, 0, num - 1);
	Reverse(str,num, len - 1);
	Reverse(str, 0, len - 1);*/
//������  ˫����  double_string

//}
//int main()
//{
//	char str1[] = "1234abcd";
//	char str2[] = "abcd1234";
//	int len = strlen(str1);
//	int num = 3;
//char *double_string = (char*)malloc(2 * len + 1);
//if (double_string == NULL) {
//	return -1;
//}
//strcpy(double_string, str1);
//strcat(double_string, str1);
//printf("double string : %s\n", double_string);
//if (strstr(double_string, str2) != NULL) {
//	printf("yes\n");
//}
//else {
//	printf("no!\n");
//}
//free(double_string);
//LeftRotate(str1, len, 19);
//
//	/*int i = 0;
//	for (; i < len; i++) {
//		if (strcmp(str1, str2) == 0){
//			printf("yes!\n");
//			break;
//		}
//		 LeftRotate(str1, len, num);
//		 if (i == len) {
//			 printf("no\n");
//		 }
//	}
//		printf("before: %s\n", str1);
//		LeftRotate(str1, len, num);
//		printf("after: %s\n", str1);
//	}*/
//	system("pause");
//	return 0;
//}


//strlen ����
//int main()
//{
//	const char *str = "abcdefg1234";
//	printf("%d\n", strlen(str));
//	system("pause");
//	return 0;
//}

//ģ�� strlen
//code 3   ָ��-ָ��
//int my_strlen(const char *str)
//{
//	char *p = str;
//	while (*p != '\0') {
//		p++;
//	}
//	return p - str;
//}


//code 2
//int my_strlen(const char *str)
//{
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + my_strlen(str + 1);
//	}
//}


//code 1  ������ʱ����������
//int my_strlen(const char *str)
//{
//	int count = 0;
//	while (*str) {
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str = "abcdefg1234";
//	int ret = my_strlen(str);
//	printf("ret= %d\n", ret);
//	system("pause");
//	return 0;
//}



//ģ�� strcpy

//char *my_strcpy(char *dest, const char *str)
//{
//	char *ret = dest;
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[64] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char *my_strcpy(char *dst, const char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char *ret = dst;
//	while (*dst++ = *src++){
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char dst[32] = "anfdkna34";
//	char src[32]  = "abrjfbk68";
//	printf("before dst: %s\n", dst);
//	printf("after dst:  %s\n", my_strcpy(dst, src));
//	system("pause");
//	return 0;
//}




//ģ�� qsort
//int int_cmp(const void*p1, const void*p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void *p1, void *p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++) {
//		char temp = *((char*)p1 + i);
//		*((char *)p1 + i) = *((char *)p2 + i);
//		*((char*)p2 + i) = temp;
//	}
//}
//void bubble(void *base, int count, int size, int(*cmp)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count - 1; i++) {
//		for (j = 0; j < count - 1 - i; j++) {
//			if (cmp((char*)base + j * size, (char*)base + (j + 1)*size) > 0)
//			{
//				_swap((char*)base + j * size, (char*)base + (j + 1)*size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,1,4,6,8,0 };
//	int i = 0;
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



// ģ��strstr  (�����Ӵ�)
//const char *my_strstr(const char *str, const char*sub)
//{
//	assert(str);
//	assert(sub);
//	const char *str_start = str;
//	const char *str_p = str;
//	const char *sub_p = sub;
//	
//	while (*str_start) {
//		str_p = str_start;
//		sub_p = sub;
//		while (*sub_p && *str_p && *str_p == *sub_p) {
//			str_p++; sub_p++;
//		}
//		if (*sub_p == '\0') {
//			return str_start;
//		}
//		str_start++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char *str = "hello 123 abc456xyz,12,xy1234";
//	const char *sub = "xyz";
//	printf("%s\n", my_strstr(str, sub));
//
//	system("pause");
//	return 0;
//}




//strcmp  ���ַ����Ƚ� ---- ���� ASCII ֵ��

//int my_strcmp(const char *str1, const char *str2)
//{
//	assert(str1);
//	assert(str2);
//	int ret = 0;
//	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && str1) {
//		str1++, str2++;
//	}
//	if (ret > 0) {
//		return 1;
//	}
//	else if (ret < 0) {
//		return -1;
//	}
//	return 0;
//}
//int main()
//{
//	const char *str1 = "abcd123efgxyz";
//	const char *str2 = "abcD123efgxyz";
//	printf("ret=%d\n", my_strcmp(str1, str2));
//	system("pause");
//	return 0;
//}


//�ڴ����
//struct A
//{
//	int a;
//	char b;
//	double c;
//	short d;
//	float e;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	system("pause");
//	return 0;
//}


//strncmp ����

//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}



//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ��������ֶ����������Σ���ֻ����һ�ε�������

//˼·��
//1������������ս������1��һ����Ϊ0����2��һ����������ͬ���ݣ����Ľ����
//                       ��3��һ����Ϊ0�����������32������λ������һ���б���λΪ1 ---- ������ͬ���ݶ�Ӧ�ı���λ��ͬ
//2���ҵ���ͬ����λ��λ��
//3�����ݲ�ͬ����λ��λ�ã��������ݻ��� -- ������
//          ��1����ͬ����һ�������ֵ���ͬ����
//          ��2����ͬ����һ�������ֵ�ͬһ�飬��������һ�鲻��Ҫ


//void FindTwoSingle(int a[], int num, int *x, int *y)
//{
//	assert(a);
//	assert(num > 0);
//	assert(x);
//	assert(y);
//
//	//�������
//	int result = a[0];
//	for (int i = 1; i < num; i++) {
//		result ^= a[i];
//	}
//	//�Ҳ�ͬ����λλ��
//	int pos = 1;
//	while (1)
//	{
//		if (result & pos) {
//			break;
//		}
//		pos <<= 1;
//	}
//  //����
//	*x = 0;
//	*y = 0;
//	for (int i = 0; i < num; i++) {
//		if (a[i] & pos) {
//			*x ^= a[i];
//		}
//		else {
//			*y ^= a[i];
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,11,33,1,2,3,4,5,6,7,8 };
//	int num = sizeof(a) / sizeof(a[0]);
//	int x = 0;
//	int y = 0;
//	FindTwoSingle(a,num,&x,&y);
//
//	printf("X: %d, Y: %d\n", x, y);
//	system("pause");
//	return 0;
//}



//ģ�� atoi
//int status = 0;
//int my_atoi(const char *str)
//{
//	assert(str);
//	int flag = 1;
//	long long result = 0;
//	int i = 0;
//
//	while (isspace(str[i])) {
//		i++;
//	}
//	if (str[i] == '-') {
//		flag = -flag;
//		i++;
//	}
//	while (str[i]) {
//		if (isdigit(str[i]))                     //�ж��ַ��Ƿ���ʮ��������
//		{
//			result = result * 10 + flag * (str[i] - '0');
//			if (result > INT_MAX || result < INT_MIN) {
//				status = 1;                 //Խ��
//				break;
//			}
//		}
//		else {
//			status = 2;
//			break;
//		}
//		i++;
//	}
//	return (int)result;
//}
//
//int main()
//{
//	const char *str = "      12345";
//	int res = my_atoi(str);
//	printf("status: %d, result: %d\n", status, res);
//	system("pause");
//	return 0;
//}



//�ļ�
//int main()
//{
//	/*FILE *fp = fopen("log.txt", "w");
//	if (fp == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	fclose(fp);*/          //���ڵ�ǰ�ļ�Ŀ¼���½�һ��log.txt �ļ�
//	
//	system("pause");      
//	return 0;
//}


//ģ��ʵ��strlen  ----  ���ַ�������
//����һ:����������ʱ������
//int my_strlen(const char *s)
//{
//	int count = 0;
//	while (*s) {
//		count++;
//		s++;
//	}
//	return count;
//}

//������:��ʹ����ʱ����
//int my_strlen(const char *s)
//{
//	if (*s == '\0') {
//		return 0;
//	}
//	return 1 + my_strlen(s + 1);
//}

//������:ָ��-ָ��
//int my_strlen(const char*s)
//{
//	char *p = s;
//	while (*p != '\0') {
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	const char *str = "abcdefgh";
//	printf("%d\n", my_strlen(str));
//	system("pause");
//	return 0;
//}


//ģ��ʵ��strcpy  --- �ַ�������
//char *my_strcpy(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ((*dest++ = *src++)) {
//		;
//	}
//	return ret;
//}
//int main()
//{
//	const char src[32] = "abcdefg";
//	char dest[32]="dnsajvn";
//	printf("%s\n", my_strcpy(dest, src));
//	system("pause");
//	return 0;
//}



//ģ��strcat  ---  �ַ���ƴ��
//char *my_strcat(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main()
//{
//	const char src[32] = "abcdefg";
//	char dest[32]="dnsajvn";
//	printf("%s\n", my_strcat(dest, src));
//	system("pause");
//	return 0;
//}



//ģ��strstr  ---  �����ַ���
//char *my_strstr(const char *str1, const char *str2)
//{
//	assert(str1);
//	assert(str2);
//	char *cp = (char *)str1;
//	char *substr = (char*)str2;
//	char *s1 = NULL;
//	if (*str2 == '\0') {
//		return NULL;
//	}
//	while (*cp) {
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr && (*s1 == *substr)) {
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//			return cp;
//		cp++;
//	}
//}
//int main()
//{
//	char str1[32] = "xfjdBabcdefCdj";
//	const char str2[32] = "abcdef";
//	printf("%s\n", my_strstr(str1, str2));
//	system("pause");
//	return 0;
//}



//ģ��strcmp ---- �ַ����Ƚ�
//int my_strcmp(const char *src, const char *dest)
//{
//	int ret = 0;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (!(ret = *(unsigned char *)src - *(unsigned char*)dest) && *dest)
//		++src, ++dest;
//	if (ret < 0)
//		ret = -1;
//	else if (ret > 0)
//		ret = 1;
//	return ret;
//}
//int main()
//{
//	const char*src = "abdnsjh12123";
//	const char*dest = "sankdb978";
//	printf("%d\n", my_strcmp(src, dest));
//	system("pause");
//	return 0;
//}


//ģ�� memcpy ---- ���������ַ�����,��srcλ�ÿ�ʼ�����count���ַ����ݵ�dest���ڴ�λ��
//void *memcpy(void *dest, const void *src, size_t count)
//{
//	void *ret = dest;
//	assert(dest);
//	assert(src);
//	while (count--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	char dest[32] = "xbsjabcj";
//	char src[32] = "safdjkbfsj";
//	int  count = 5;
//	printf("%s\n", memcpy(dest, src, count));
//	system("pause");
//	return 0;
//}


//ģ�� memmove

//void *memmove(void *dest, const void *src, size_t count)
//{
//	void *ret = dest;
//	if (dest <= src || (char*)dest >= ((char*)src + count)) {
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		dest = (char*)dest + count - 1;
//		src = (char*)src + count - 1;
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char dest[32] = "xbsjabcj";
//	char src[32] = "safdjkbfsj";
//	int  count = 5;
//	printf("%s\n", memmove(dest, src, count));
//	system("pause");
//	return 0;
//}


//ģ�� strncpy

//char *my_strncpy(char *dest, const char *src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	char *ret = dest;
//	while (num--) {
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char dest[32] = "cbdjbs";
//	char src[32] = "dfsjbkf13431";
//	printf("%s\n", my_strncpy(dest, src, 4));
//	system("pause");
//	return 0;
//}


//ģ��strncmp  ---  �Ƚ�

//int my_strncmp(const char*dest, const char*src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	while (num && *dest == *src) {
//		if (*dest == '\0' || *src == '\0') {
//			break;
//		}
//		++dest;
//		++src;
//		--num;
//	}
//	if (num == 0) {
//		return 0;
//	}
//	return *dest - *src;
//}
//int main()
//{
//	char dest[] = "adnvjsf";
//	char src[] = "agwdbsd435";
//	int flag = my_strncmp(dest, src, 4);
//	if (flag < 0) { printf("dest<src\n"); }
//	else if (flag > 0) { printf("dest>src\n"); }
//	else printf("%d\n", flag);
//	return 0;
//}


//дһ���꣬������ż��

//#define Jiaohuanjiou(x)(((x*0x55555555)<<1)||((x*0xaaaaaaaa)>>1))
//int main()
//{
//	int x = 5;
//	printf("%d\n", Jiaohuanjiou(x));
//	system("pause");
//	return 0;
//}


//дһЩ�꣬����ṹ���б���������׵�ַ��ƫ���� --- offsetof

//#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
//typedef struct node_s
//{
//	int num;
//	char m[64];
//	double c;
//	float d;
//}node_t;
//int main()
//{
//	printf("%d\n", offsetof(node_t, c));
//	system("pause");
//	return 0;
//}


//ģ��strncat  ---  ƴ��
//char my_strncat(char *dest, const char*src, int num)
//{
//	char *p = dest;
//	char *q = (char*)src;
//	assert(dest);
//	assert(src);
//	while (*p) {
//		p++;
//	}
//	while (num--) {
//		*p = *q;
//		p++;
//		q++;
//	}
//	*p = '\0';
//	printf("%s\n", dest);
//}
//int main()
//{
//	char dest[32] = "It is ";
//	const char src[32] = "an apple";
//	int num = 8;
//		printf("%s\n", my_strncat(dest, src, num));
//	system("pause");
//	return 0;
//}




//1->2->3->4......->10
//������

typedef struct ListNode
{
	int data; //������
	ListNode *next; //ָ����
}ListNode;

typedef ListNode* List;

void ListInit (List *phead)
{
	assert(phead != NULL);
	*phead = (ListNode*)malloc(sizeof(ListNode));
	(*phead)->next = NULL;
}
//β�巨
void ListCreate_Tail(List *phead)
{
	/*assert(phead != NULL);
	*phead = (ListNode*)malloc(sizeof(ListNode));
	assert(*phead != NULL);
	(*phead)->data = 1;
	(*phead)->next = NULL;*/

	ListNode *p = *phead;
	for (int i = 1; i <= 10; ++i)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		assert(s != NULL);
		s->data = i;
		s->next = NULL;

		p->next = s;
		p = s;
	}
}

//ͷ�巨
void ListCreate_Head(List *phead)
{
	/*assert(phead != NULL);
	*phead = (ListNode*)malloc(sizeof(ListNode));
	assert(*phead != NULL);
	(*phead)->data = 1;
	(*phead)->next = NULL;*/

	for (int i = 1; i <= 10; ++i)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		assert(s != NULL);
		s->data = i;
		s->next = (*phead)->next;
		(*phead)->next = s;
	}
}
void ListCreate(List *phead)
{
	assert(phead != NULL);
	*phead = (ListNode*)malloc(sizeof(ListNode));
	assert(*phead != NULL);
	(*phead)->data = 1;
	(*phead)->next = NULL;

	ListNode *p = *phead;
	for (int i = 2; i <= 10; ++i)
	{
		p=p->next= (ListNode*)malloc(sizeof(ListNode));
		p->data = i;
		p->next = NULL;
	}
}


void ListShow(List head)
{
	ListNode *p = head->next;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("Over.\n");
}

void main()
{
	List mylist; //ListNode *mylist
	ListInit(&mylist);
	ListCreate_Tail(&mylist);
	ListCreate_Head(&mylist);
	ListShow(mylist);
}
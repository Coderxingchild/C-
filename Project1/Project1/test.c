#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include<limits.h>
#include<windows.h>
#include<assert.h>

#pragma warning (disable:4996)

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

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


//一个字符串旋转之后等于另一个字符串

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
//	num %= len;     //去重---核心
//
            //方法一
          //	左旋7次---d1234abc       \0 不参与运算
         //	左旋8次---1234abcd

	//while (num) {
	//	char temp = str[0];
	//	int i = 0;
	//	for (i = 0; i < len - 1; i++) {
	//		str[i] = str[i + 1];
	//	}
	//	str[i] = temp;
	//	num--;
	//}
//方法二
	//划分前后子串---逆置---整体逆置
	/*Reverse(str, 0, num - 1);
	Reverse(str,num, len - 1);
	Reverse(str, 0, len - 1);*/
//方法三  双倍串  double_string

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


//strlen 函数
//int main()
//{
//	const char *str = "abcdefg1234";
//	printf("%d\n", strlen(str));
//	system("pause");
//	return 0;
//}

//模拟 strlen
//code 3   指针-指针
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


//code 1  创建临时变量计数器
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



//模拟 strcpy

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




//模拟 qsort
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



// 模拟strstr  (查找子串)
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




//strcmp  （字符串比较 ---- 根据 ASCII 值）

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


//内存对齐
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


//strncmp 函数

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



//找单身狗
//一个数组中只有两个数字是出现一次，其他数字都出现了两次，找只出现一次的两个数

//思路：
//1、整体异或，最终结果：（1）一定不为0；（2）一定是两个不同数据，异或的结果；
//                       （3）一定不为0，将结果看作32个比特位，其中一定有比特位为1 ---- 两个不同数据对应的比特位不同
//2、找到不同比特位的位置
//3、根据不同比特位的位置，进行数据划分 -- 两部分
//          （1）不同数字一定被划分到不同的组
//          （2）相同数据一定被划分到同一组，具体在哪一组不重要


//void FindTwoSingle(int a[], int num, int *x, int *y)
//{
//	assert(a);
//	assert(num > 0);
//	assert(x);
//	assert(y);
//
//	//整体异或
//	int result = a[0];
//	for (int i = 1; i < num; i++) {
//		result ^= a[i];
//	}
//	//找不同比特位位置
//	int pos = 1;
//	while (1)
//	{
//		if (result & pos) {
//			break;
//		}
//		pos <<= 1;
//	}
//  //分组
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



//模拟 atoi
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
//		if (isdigit(str[i]))                     //判断字符是否是十进制数字
//		{
//			result = result * 10 + flag * (str[i] - '0');
//			if (result > INT_MAX || result < INT_MIN) {
//				status = 1;                 //越界
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



//文件
//int main()
//{
//	/*FILE *fp = fopen("log.txt", "w");
//	if (fp == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	fclose(fp);*/          //会在当前文件目录下新建一个log.txt 文件
//	
//	system("pause");      
//	return 0;
//}


//模拟实现strlen  ----  求字符串长度
//方法一:计数器（临时变量）
//int my_strlen(const char *s)
//{
//	int count = 0;
//	while (*s) {
//		count++;
//		s++;
//	}
//	return count;
//}

//方法二:不使用临时变量
//int my_strlen(const char *s)
//{
//	if (*s == '\0') {
//		return 0;
//	}
//	return 1 + my_strlen(s + 1);
//}

//方法三:指针-指针
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


//模拟实现strcpy  --- 字符串拷贝
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



//模拟strcat  ---  字符串拼接
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



//模拟strstr  ---  查找字符串
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



//模拟strcmp ---- 字符串比较
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


//模拟 memcpy ---- 任意类型字符拷贝,从src位置开始向后复制count个字符数据到dest的内存位置
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


//模拟 memmove

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


//模拟 strncpy

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


//模拟strncmp  ---  比较

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


//写一个宏，交换奇偶数

//#define Jiaohuanjiou(x)(((x*0x55555555)<<1)||((x*0xaaaaaaaa)>>1))
//int main()
//{
//	int x = 5;
//	printf("%d\n", Jiaohuanjiou(x));
//	system("pause");
//	return 0;
//}


//写一些宏，计算结构体中变量相对于首地址的偏移量 --- offsetof

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


//模拟strncat  ---  拼接
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
//单链表

typedef struct ListNode
{
	int data; //数据域
	ListNode *next; //指针域
}ListNode;

typedef ListNode* List;

void ListInit (List *phead)
{
	assert(phead != NULL);
	*phead = (ListNode*)malloc(sizeof(ListNode));
	(*phead)->next = NULL;
}
//尾插法
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

//头插法
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
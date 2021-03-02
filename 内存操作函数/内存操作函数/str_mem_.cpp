#define _CRT_SECURE_NO_WARNINGS 1

// 调用静态库-----分文件时使用
// #pragma comment(lib,"my_strcat.lib") 

#include<stdio.h>
#include<string.h>
#include<assert.h>

////// 长度不受限制 strcpy  strcat  strcmp
////// 长度受限制  strncpy  strncat  strncmp


////////// strtok : char *strtok( char *strToken, const char *strDelimit );
/////// 字符串拆分


//int main()
//{
//	char arr1[] = "1272209351@qq.com";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr1);
//	char arr2[] = "@.";
//	
//	//code 2
//	/*char* p = NULL;
//	for (p = strtok(tmp,arr2); p != NULL; p = strtok(NULL,arr2)) {
//		printf("%s\n", p);
//	}*/
//
//	
//	
//	// code 1
//	char* p = strtok(tmp, arr2);    //第一次从 tmp 起始位置开始进行分割
//	printf("%s\n", p);
//
//	p = strtok(NULL,arr2);    //第二次从上一步分割位置（NULL）开始进行寻找一个分割位置
//	printf("%s\n", p);
//
//	p = strtok(NULL, arr2);
//	printf("%s\n", p);
//
//	return 0;
//}








/////// strstr : char *strstr( const char *string, const char *strCharSet );
////// 找子串---返回子串在主串的起始位置开始的字符串


//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char *ret = strstr(arr, "cd");
//	///// 若有多个子串返回第一个子串起始位置开始的字符串
//	if (ret != NULL) {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}










//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abdeee";
//	int ret = strncmp(arr1, arr2, 5);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}







////////////  char *strstr( const char *string, const char *strCharSet );

//判断子串

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//
//	// 长度不相同则肯定不是子串
//	if (strlen(arr1) != strlen(arr2)) {
//		printf("no\n");
//		return 0;
//	}
//
//	strncat(arr1, arr1, 6);
//	//查找子串------strstr
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("no\n");
//	}
//	else {
//		printf("yes\n");
//	}
//	return 0;
//}












////////  (左)旋转函数-----判断一个字符串是否为另一个字符串旋转而来

//void left_move(char* str,int n)
//{
//	int i = 0;
//	int len = strlen(str);  //计算字符串长度
//	
//	for (i = 0; i < n; ++i) {  //旋转次数
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; i < len - 1; ++j) {
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int i = 0;
//	int len = strlen(arr1);
//	
//	for (i = 0; i < len; ++i) {
//		left_move(arr1, 2);
//		if (strcmp(arr1, arr2) == 0) {
//			printf("yes\n");
//			break;
//		}
//	}
//	if (i == len) {
//		printf("no\n");
//	}
//	return 0;
//}
//








/////// char *strncat( char *strDest, const char *strSource, size_t count );

//int main()
//{
//	char s1[20] = "abcedf";
//	char s2[] = "qwer";
//
//	strncat(s1, s2, 5);
//	printf("%s\n", s1);
//	return 0;
//}








///////  char *strncpy( char *strDest, const char *strSource, size_t count );


//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXX";
//	char arr2[] = "helloc world";
//
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}





//////////  strcmp 字符串比较
/////// int strcmp( const char *string1, const char *string2 );

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	while (*str1 == *str2) {
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}*/
//
//	return *str1 - *str2;
//}
//int main()
//{
//	//字符串比较----------ASCII码值比较
//	
//	// int ret = strcmp("abcdef", "awe");    //库函数
//	int ret = my_strcmp("abcdef", "awe");    // 模拟实现
//	
//	//printf("ret = %d\n", ret);
//	if (ret < 0) {
//		printf("小于\n");
//	}
//	else if (ret == 0) {
//		printf("等于\n");
//	}
//	else if (ret > 0) {
//		printf("大于\n");
//	}
//	return 0;
//}






/////////////  strcat 字符串追加
/////// char *strcat( char *strDestination, const char *strSource );


//char* my_strcat(char* dest, const char* src)
//{
//	// 源字符串以 \0 结尾
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest != '\0') {
//		dest++;     // 找目的空间的 \0
//	}
//	//拷贝数据
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//
//	strcat(arr,"world");      // 目的字符串的空间足够追加
//	printf("%s\n", arr);
//
//	printf("%s\n",my_strcat(arr, "world"));      //模拟实现
//	return 0;
//}







/////////// strcpy 字符串拷贝
/////// char *strcpy( char *strDestination, const char *strSource );


// 返回值 char* 为了实现链式访问效果

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;     // 保存目标空间起始地址
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	/*while (*src != '\0') {
//		*dest++ = *src++;
//	}
//	*dest = *src;*/
//
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main()
//{
//	const char* str1 = "abcdef";
//	char arr[20] = { 0 };
//
//	strcpy(arr, str1);
//	printf("%s\n", arr);
//
//	printf("%s\n",my_strcpy(arr, str1));     //模拟实现
//	
//	return 0;
//}





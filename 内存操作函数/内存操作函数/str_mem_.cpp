#define _CRT_SECURE_NO_WARNINGS 1

// ���þ�̬��-----���ļ�ʱʹ��
// #pragma comment(lib,"my_strcat.lib") 

#include<stdio.h>
#include<string.h>
#include<assert.h>

////// ���Ȳ������� strcpy  strcat  strcmp
////// ����������  strncpy  strncat  strncmp


////////// strtok : char *strtok( char *strToken, const char *strDelimit );
/////// �ַ������


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
//	char* p = strtok(tmp, arr2);    //��һ�δ� tmp ��ʼλ�ÿ�ʼ���зָ�
//	printf("%s\n", p);
//
//	p = strtok(NULL,arr2);    //�ڶ��δ���һ���ָ�λ�ã�NULL����ʼ����Ѱ��һ���ָ�λ��
//	printf("%s\n", p);
//
//	p = strtok(NULL, arr2);
//	printf("%s\n", p);
//
//	return 0;
//}








/////// strstr : char *strstr( const char *string, const char *strCharSet );
////// ���Ӵ�---�����Ӵ�����������ʼλ�ÿ�ʼ���ַ���


//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char *ret = strstr(arr, "cd");
//	///// ���ж���Ӵ����ص�һ���Ӵ���ʼλ�ÿ�ʼ���ַ���
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

//�ж��Ӵ�

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//
//	// ���Ȳ���ͬ��϶������Ӵ�
//	if (strlen(arr1) != strlen(arr2)) {
//		printf("no\n");
//		return 0;
//	}
//
//	strncat(arr1, arr1, 6);
//	//�����Ӵ�------strstr
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












////////  (��)��ת����-----�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת����

//void left_move(char* str,int n)
//{
//	int i = 0;
//	int len = strlen(str);  //�����ַ�������
//	
//	for (i = 0; i < n; ++i) {  //��ת����
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





//////////  strcmp �ַ����Ƚ�
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
//	//�ַ����Ƚ�----------ASCII��ֵ�Ƚ�
//	
//	// int ret = strcmp("abcdef", "awe");    //�⺯��
//	int ret = my_strcmp("abcdef", "awe");    // ģ��ʵ��
//	
//	//printf("ret = %d\n", ret);
//	if (ret < 0) {
//		printf("С��\n");
//	}
//	else if (ret == 0) {
//		printf("����\n");
//	}
//	else if (ret > 0) {
//		printf("����\n");
//	}
//	return 0;
//}






/////////////  strcat �ַ���׷��
/////// char *strcat( char *strDestination, const char *strSource );


//char* my_strcat(char* dest, const char* src)
//{
//	// Դ�ַ����� \0 ��β
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest != '\0') {
//		dest++;     // ��Ŀ�Ŀռ�� \0
//	}
//	//��������
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//
//	strcat(arr,"world");      // Ŀ���ַ����Ŀռ��㹻׷��
//	printf("%s\n", arr);
//
//	printf("%s\n",my_strcat(arr, "world"));      //ģ��ʵ��
//	return 0;
//}







/////////// strcpy �ַ�������
/////// char *strcpy( char *strDestination, const char *strSource );


// ����ֵ char* Ϊ��ʵ����ʽ����Ч��

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;     // ����Ŀ��ռ���ʼ��ַ
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
//	printf("%s\n",my_strcpy(arr, str1));     //ģ��ʵ��
//	
//	return 0;
//}





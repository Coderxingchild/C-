#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>

//////////////// memset: void *memset( void *dest, int c, size_t count );
///////// �ڴ�����

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, 10);  //10 ----- ��ʾ 10 ���ֽ�

	return 0;
}










///////// memcmp �� int memcmp( const void *buf1, const void *buf2, size_t count );
/////// �ڴ�Ƚ�

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,3,3 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}









/////////  memmove�� void *memmove( void *dest, const void *src, size_t count );
////// �����ص�����

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	//��ǰ��󿽱�
//	assert(dest);
//	assert(src);
//
//	if (dest < src) {
//		//ǰ-���󿽱�:��ֹ�ڴ��ص����¿�������
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			++(char*)dest; ++(char*)src;
//		}
//	}
//	else {
//		//��-��ǰ����
//		while (count--) {
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memmove(arr1 + 2, arr1, 16);
//
//	my_memmove(arr1 + 2, arr1, 16);
//
//	return 0;
//}








/////////////// memcpy : void *memcpy( void *dest, const void *src, size_t count );
//////////  �ڴ濽��----------�����ڴ��ص�����


//void* me_memcpy(void* dest,const void* src,size_t count)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//
//	while (count--) {
//		// һ�ֽ�һ�ֽڵĿ���
//		*(char*)dest = *(char*)src;
//		
//		//++(char*)dest; ++(char*)src;
//		//((char*)dest)++;  ((char*)src)++;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[10] = { 0 };
//	//// memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//
//	
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//������ڴ��ص�-----�Ӻ���ǰ����
//	my_memcpy(arr1 + 2, arr1, 16);  //���� 16 ���ֽ�----- 1 2 1 2 3 4 5 6 7 8 9 10
//
//	return 0;
//}
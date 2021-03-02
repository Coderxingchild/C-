#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>

//////////////// memset: void *memset( void *dest, int c, size_t count );
///////// 内存设置

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, 10);  //10 ----- 表示 10 个字节

	return 0;
}










///////// memcmp ： int memcmp( const void *buf1, const void *buf2, size_t count );
/////// 内存比较

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,3,3 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}









/////////  memmove： void *memmove( void *dest, const void *src, size_t count );
////// 允许重叠拷贝

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	//从前向后拷贝
//	assert(dest);
//	assert(src);
//
//	if (dest < src) {
//		//前-》后拷贝:防止内存重叠导致拷贝错误
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			++(char*)dest; ++(char*)src;
//		}
//	}
//	else {
//		//后-》前拷贝
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
//////////  内存拷贝----------考虑内存重叠问题


//void* me_memcpy(void* dest,const void* src,size_t count)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//
//	while (count--) {
//		// 一字节一字节的拷贝
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
//	//会存在内存重叠-----从后向前拷贝
//	my_memcpy(arr1 + 2, arr1, 16);  //拷贝 16 个字节----- 1 2 1 2 3 4 5 6 7 8 9 10
//
//	return 0;
//}
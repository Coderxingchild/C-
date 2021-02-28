#include<stdio.h>
#include<math.h>


/////////////  求100~200 之间的素数


//code 3

int main()
{
	int a = 100, count = 0;
	for (a; a <= 200; ++a) {
		int i = 2;
		for (i; i < a; ++i) {
			if (a%i == 0)
				break;
		}
		if (i >= a) {
			printf("%d ", a);
			count++;
		}
	}
	printf("\ncount= %d",count);
	return 0;
}


//code 2

//int main()
//{
//	int a = 101, count = 0;
//	for (a; a < 200; a+=2)
//	{
//		// 偶数一定不是素数，因此首先排除掉偶数
//		int i = 2;
//		for (i; i < sqrt(a); ++i) {
//			if (a%i == 0)
//				break;
//		}
//		if (i > sqrt(a)) {
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}




// code 1

//int main()
//{
//	int a = 100, count = 0;
//	//试除法
//	for (a; a <= 200; ++a) {
//		int i = 2;
//		for (i; i <= sqrt(a); ++i) {
//			if (a % i == 0)
//				break;
//		}
//		if (i > sqrt(a)) {
//			printf("%d ", a);
//			count++;
//		}		
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}









///////// 求100以内数字 9 出现的次数

//int main()
//{
//	int a = 0, count = 0;
//	for (;a <= 100; ++a) {
//		if (a % 10 == 9)
//			count++;    //个位数字为 9
//		if (a / 10 == 9)
//			count++;    //十位数字为 9 
//	}
//	printf("count = %d", count);
//	return 0;
//}







///////// 求1000~2000 之间闰年
// 能被 4 整除不能被100 整除，或者能被 400 整除


//code 1

//int main()
//{
//	int year = 1000;
//	int count = 0;
//	for (; year <= 2000; ++year) {
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}




//code 2

//void Lyear(int year)
//{
//	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//		//是闰年
//		printf("%d ",year);
//	}
//}
//int main()
//{
//	int year=1000;
//	for (year; year <= 2000; ++year) {
//		Lyear(year);
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>


/////////////  ��100~200 ֮�������


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
//		// ż��һ��������������������ų���ż��
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
//	//�Գ���
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









///////// ��100�������� 9 ���ֵĴ���

//int main()
//{
//	int a = 0, count = 0;
//	for (;a <= 100; ++a) {
//		if (a % 10 == 9)
//			count++;    //��λ����Ϊ 9
//		if (a / 10 == 9)
//			count++;    //ʮλ����Ϊ 9 
//	}
//	printf("count = %d", count);
//	return 0;
//}







///////// ��1000~2000 ֮������
// �ܱ� 4 �������ܱ�100 �����������ܱ� 400 ����


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
//		//������
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
#include<stdio.h>
#include<iostream>
using namespace std;

#pragma warning(disable:4996)

int main()
{
	char passwd[20] = { 0 };
	cout << "����������:>";
	scanf("%s", passwd);

	getchar(); //���� \n

	cout << "��ȷ������(Y/N):>";
	int ch;
	ch = getchar();

	if (ch == 'Y' || ch == 'y')
		cout << "ȷ�ϳɹ���" << endl;
	else
		cout << "����ȷ��!" << endl;

	return 0;
}

//extern �����ⲿ����
//static ����ȫ������������������Դ�ļ��ڲ���������ʹ�ã�
//putchar getchar--------���/��ȡ�ַ�


//int main()
//{
//	int n = 1;
//	while (n <= 10) {
//		if (5 == n) {
//			break;        //1234 ֱ����ֹѭ��
//			//continue;     //��ѭ��
//		}
//		printf("%d", n);
//		++n;
//	}
//	return 0;
//}


//void test()
//{
//	int n = 1;
//	cin >> n;
//	switch (n) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		cout << "weekdays" << endl;
//		break;
//	case 6:
//	case 7:
//		cout << "weekend" << endl;
//		break;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//���1---100֮�������
//int main()
//{
//	int i = 1;
//	while (i <= 100) {
//		printf("%d ", i);
//		i += 2;
//	}
//
//	/*int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d ", i);
//		}
//		++i;
//	}*/
//
//	/*for (int i = 1; i <= 100; ++i) {
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}*/
//	return 0;
//}



//int main()
//{
//	cout << sizeof(int) << endl;
//	cout << sizeof(char) << endl;
//	cout << sizeof(short) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(double) << endl;
//	cout << sizeof(long long) << endl;
//	return 0;
//}


//static ���ξֲ�����
//void test()
//{
//	static int i = 1;
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	int i = 1;
//	while (i < 10) {
//		test();    //2345678910
//		i++;
//	}
//	return 0;
//}
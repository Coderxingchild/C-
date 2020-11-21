#include<stdio.h>
#include<iostream>
using namespace std;

#pragma warning(disable:4996)

int main()
{
	char passwd[20] = { 0 };
	cout << "请输入密码:>";
	scanf("%s", passwd);

	getchar(); //处理 \n

	cout << "请确认密码(Y/N):>";
	int ch;
	ch = getchar();

	if (ch == 'Y' || ch == 'y')
		cout << "确认成功！" << endl;
	else
		cout << "放弃确认!" << endl;

	return 0;
}

//extern 声明外部符号
//static 修饰全部变量，不能在其他源文件内部看到（或使用）
//putchar getchar--------输出/获取字符


//int main()
//{
//	int n = 1;
//	while (n <= 10) {
//		if (5 == n) {
//			break;        //1234 直接终止循环
//			//continue;     //死循环
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


//输出1---100之间的奇数
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


//static 修饰局部变量
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
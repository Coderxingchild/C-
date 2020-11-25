#include<stdio.h>
#include<iostream>
#include<time.h>

using namespace std;

#include<windows.h>

#pragma warning(disable:4996)


//猜数字

//void menu()
//{
//	cout << "********************" << endl;
//	cout << "********************" << endl;
//	cout << "*  1.play  2.exit  *" << endl;
//	cout << "********************" << endl;
//	cout << "********************" << endl;
//}
//void game()
//{
//	int key;
//	int ret = rand() % 100 + 1;
//	cout << ret << endl;
//	while (1) {
//		cout << "请猜数字：";
//		cin >> key;
//		if (ret > key) {
//			cout << "你猜小了！" << endl;
//		}
//		else if (ret < key) {
//			cout << "你猜大了！" << endl;
//		}
//		else {
//			cout << "你猜对了！" << endl;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int select;
//	srand((unsigned int)time(NULL));  //生成随机数
//	do {
//		menu();
//		cout << "请选择》";
//		cin >> select;
//		switch (select) {
//		case 1:
//			game();
//			break;
//		case 2:
//			cout << "游戏结束！" << endl;
//			break;
//		default:
//			cout << "请重新输入：";
//			break;
//		}
//	} while (select);
//		return 0;
//}





//int main()
//{
//	//三次输入密码的机会
//	int i = 0;
//	char passwd[20] = { 0 };
//	cout << "请输入密码：";
//	cin >> passwd;
//	for (int i = 0; i < 3; ++i)
//	{
//		if (strcmp(passwd, "123456") == 0) {
//			cout << "密码正确" << endl;
//			break;
//		}
//		else {
//			cout << "密码错误，请重新输入:" << endl;
//			cin >> passwd;
//		}
//		if (i == 3) {
//			cout << "三次输入密码错误，请稍后再试！" << endl;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "************";
//	int left = 0;
//	int right = strlen(arr1);
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		cout << arr2 << endl;
//		Sleep(1000);
//		system("cls");  //清空式存放
//		left++;
//		right--;
//	}
//	cout << arr2 << endl;
//
//	return 0;
//}



//数组中查找某个数

//二分查找
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; 
//	int k;
//	cin >> k;
//
//	while (left <= right) {
//		int mid = (right + left) / 2; 
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			cout << "找到了！" << mid << endl;
//			break;
//		}
//	}
//	if (left > right) {
//		cout << "找不到！" << endl;
//	}
//	return 0;
//}



//一一遍历
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k;
//	cin >> k;
//	int i = 1;
//	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		if (arr[i] == k)
//		{
//			cout << "找到了----->" << i << endl;
//			break;
//		}
//	}
//	if (i>=10) {
//		cout << "找不到！" << endl;
//	}
//	return 0;
//}



////求 1！+2！+3！+.....
//
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	int n;
//	cin >> n;
//
//	for (int j = 1; j <= n; j++) {
//		ret = 1;
//		for (i = 1; i <= j; ++i) {  //计算各个阶乘
//			ret *= i;
//		}
//		sum += ret;
//	}
//}



////求 n! 
//
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n;
//	cin >> n;
//	while (i <= n) {
//		ret *= i;
//		i++;
//	}
//	cout << "阶乘结果为：" << ret << endl;
//	return 0;
//}


//int main()
//{
//	char passwd[20] = { 0 };
//	cout << "请输入密码:>";
//	scanf("%s", passwd);
//
//	getchar(); //处理 \n
//
//	cout << "请确认密码(Y/N):>";
//	int ch;
//	ch = getchar();
//
//	if (ch == 'Y' || ch == 'y')
//		cout << "确认成功！" << endl;
//	else
//		cout << "放弃确认!" << endl;
//
//	return 0;
//}


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
#include<stdio.h>
#include<iostream>
#include<time.h>

using namespace std;

#include<windows.h>

#pragma warning(disable:4996)


//������

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
//		cout << "������֣�";
//		cin >> key;
//		if (ret > key) {
//			cout << "���С�ˣ�" << endl;
//		}
//		else if (ret < key) {
//			cout << "��´��ˣ�" << endl;
//		}
//		else {
//			cout << "��¶��ˣ�" << endl;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int select;
//	srand((unsigned int)time(NULL));  //���������
//	do {
//		menu();
//		cout << "��ѡ��";
//		cin >> select;
//		switch (select) {
//		case 1:
//			game();
//			break;
//		case 2:
//			cout << "��Ϸ������" << endl;
//			break;
//		default:
//			cout << "���������룺";
//			break;
//		}
//	} while (select);
//		return 0;
//}





//int main()
//{
//	//������������Ļ���
//	int i = 0;
//	char passwd[20] = { 0 };
//	cout << "���������룺";
//	cin >> passwd;
//	for (int i = 0; i < 3; ++i)
//	{
//		if (strcmp(passwd, "123456") == 0) {
//			cout << "������ȷ" << endl;
//			break;
//		}
//		else {
//			cout << "�����������������:" << endl;
//			cin >> passwd;
//		}
//		if (i == 3) {
//			cout << "������������������Ժ����ԣ�" << endl;
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
//		system("cls");  //���ʽ���
//		left++;
//		right--;
//	}
//	cout << arr2 << endl;
//
//	return 0;
//}



//�����в���ĳ����

//���ֲ���
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
//			cout << "�ҵ��ˣ�" << mid << endl;
//			break;
//		}
//	}
//	if (left > right) {
//		cout << "�Ҳ�����" << endl;
//	}
//	return 0;
//}



//һһ����
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
//			cout << "�ҵ���----->" << i << endl;
//			break;
//		}
//	}
//	if (i>=10) {
//		cout << "�Ҳ�����" << endl;
//	}
//	return 0;
//}



////�� 1��+2��+3��+.....
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
//		for (i = 1; i <= j; ++i) {  //��������׳�
//			ret *= i;
//		}
//		sum += ret;
//	}
//}



////�� n! 
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
//	cout << "�׳˽��Ϊ��" << ret << endl;
//	return 0;
//}


//int main()
//{
//	char passwd[20] = { 0 };
//	cout << "����������:>";
//	scanf("%s", passwd);
//
//	getchar(); //���� \n
//
//	cout << "��ȷ������(Y/N):>";
//	int ch;
//	ch = getchar();
//
//	if (ch == 'Y' || ch == 'y')
//		cout << "ȷ�ϳɹ���" << endl;
//	else
//		cout << "����ȷ��!" << endl;
//
//	return 0;
//}


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
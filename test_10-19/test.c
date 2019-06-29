//
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void swap(int arr1[]; int arr2[]; int leng)
//{
//	int i = 0;
//	for (i = 0; i < leng; i++)
//	{
//		int t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 5, 4, 3, 2, 1 };
//	swap(arr1, arr2, sizeof(arr1) / sizeof(arr1[0]));
//	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	{
//	printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。

//1.完成猜数字游戏。
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int num=0;
//	while (1)
//	{
//		printf("请输入所猜的数>:");
//		scanf("%d", &num);
//		if (num > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("猜对了\n");
//		}
//	}
//}
//void meu()
//{
//	printf("************************\n");
//	printf("******* 1、play ********\n");
//	printf("******* 2、exit ********\n");
//	printf("************************\n");
//
//}
//int main()
//{
//	int input=0;
//	srand((unsigned)time(NULL));
//	do{
//		meu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:printf("退出程序");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//} 
//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
//
//int main()
//{
//	int num=0;
//	int key = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	while (left <= right)
//	{
//		num = left + (right-left) / 2;
//		if (arr[num] < key)
//		{
//			left = num+1;
//		}
//		else if (arr[num] > key)
//		{
//			right = num - 1;
//		}
//		else
//			break;
//
//	}
//	if (left <= right)
//	{
//		printf("找到了,下标是%d\n", num); 
//	}
//	else
//		printf("没找到\n");
//	return 0;
//}
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//
//int main()
//{
//	int i = 0;
//	char psw[10] = "";
//	while (i <= 3)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (0 == strcmp(psw, "password"))
//		{
//			printf("登录成功\n");
//		}
//		else
//			printf("请重新输入密码:\n");
//		break;	
//	}
//	if (i > 3)
//	{
//		printf("退出程序\n");
//	}
//	return 0;
//}
//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//int main()
//{
//	char c;
//	printf("请输入字符>:");
//	c = getchar();
//	if (c >= 'A'&&c <= 'Z')
//	{
//		c += 32;
//		printf("%s", c);
//	}
//	else if (c >= 'a'&& c <= 'z')
//	{
//		c -= 32;
//		printf("%s", c );
//	}
//	else
//		printf("是数字\n");
//	return 0;
//}

int mian()
{

}


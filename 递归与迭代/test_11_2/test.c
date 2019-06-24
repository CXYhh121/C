#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>       
//#include<string.h>
//#include<windows.h>
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//#include<stdio.h>
//int DigitSum(n)
//{
//	if (n>0)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", DigitSum(num));
//	//system("pause");
//	return 0;
//
//}
//4. 编写一个函数reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中
//的字符串操作函数。
//
//void reverse_string(char *string)
//{
//	if (*(++string) != '\0')
//		reverse_string(string);
//	printf("%c", *(string - 1));
//}
//
//int main()
//{
//	char *a = "abcde";
//	reverse_string(a);
//	printf("\n");
//	return 0;
//}
//5.递归和非递归分别实现strlen
//int my_strlen(char *string)
//{
//	int count = 0;
//	if (*string != '\0')
//	{
//		string++;
//		count = 1 + my_strlen(string);
//	}
//	return count;
//}
//
//int main()
//{
//	char *str = "abcdef";
//	printf("%d\n", my_strlen(str));
//	system("pause");
//	return 0;
//}
//递归和非递归分别实现strlen
//int MyStrlen(const char *str)
//{
//  assert(str);
// int count = 0;
// while (*str)
// {
// str++;
// count++;
// }
// return count;
//}
//int MyStrlen(const char *str)
//{
//  assert(str);
// if (*str=='\0')
// return 0;
// else
// return 1 + MyStrlen(str + 1);
//}
//int MyStrlen(const char *str)
//{
//	const char *p = str;
//	while (*p)
//	{
//		p++;
//	}
//	return p - str;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = MyStrlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//
//}
//
//
//6.递归和非递归分别实现求n的阶乘
//int fun(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n > 1)
//	{
//		n--;
//		return (n + 1)*fun(n);
//	}
//}
//int main()
//{
//	int num;
//	printf("请输入一个数:>");
//	scanf("%d", &num);
//	int ret = fun(num);
//	printf("%d\n", ret);
//	return 0;
//
//}
//int  fun1(int n)  //递归
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * fun1(n - 1);
//}
//
//int fun2(int n) //非递归
//{
//	int sum = 1;
//	for (; n > 0; n--)
//	{
//		sum *= n;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 5;
//	printf("请输入n:");
//	scanf_s("%d", &n);
//	int DS = 0;
//	int FDS = 0;
//	DS = fun1(n);
//	FDS = fun2(n);
//	printf("递归结果：%d\n", DS);
//	printf("费递归结果：%d\n", FDS);
//
//	//system("pause");
//	return 0;
//}

////7.递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num;
//	printf("请输入一个数;>");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int n = 0;
//	int flag = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 1) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							//flag = 0;
//							n |= (1 << (a - 1));
//							n |= (1 << (b - 1));
//							n |= (1 << (c - 1));
//							n |= (1 << (d - 1));
//							n |= (1 << (e - 1));
//							if (n == 1 || n == 3 || n == 7 || n == 15 || n == 31)
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//							n = 0;
//						}
//
//					}
//
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//
//
//
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0;
//	int FD;//因为c和d的供词刚好对立 表示对立的
//	int i;
//	for (i = 1; i <= 4; i++)
//	{
//
//		if (i == 1)//A说的假
//		{
//			A = 1; C = 1; FD = 1; D = 0;
//		}
//		if (i == 2)//B说的假
//		{
//			A = 0; C = 0; FD = 1; D = 0;
//		}
//		if (i == 3)//C说的假
//		{
//			A = 0; C = 1; FD = 0; D = 0;
//		}
//		if (i == 4)//D的说的假
//		{
//			A = 0; C = 1; FD = 1; D = 0;
//		}
//		if (A + B + C + D + FD == 1 && FD == D)//只有一个人是凶手 当和为1时一个凶手出现  因为CD供词推出的都是D是不是 与上FD==D是为了排除D是D不是的情况 
//			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//	}
//	return 0;
//}
//
//int main()
//{
//	char killer;
//	for (killer = 'A'; killer <= 'D'; killer++)//巧妙地利用ASCII 从A-D进行循环和比较
//	{
//		//下面分别对应每个人都供词  不是A 是C     是D    不是D
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)  //这里等于3表示 有三个人说了真话
//		{
//			printf("%c是凶手\n", killer);
//			break;
//		}
//	}
//	return 0;
//}
//
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//int main()
//
//{
//
//	int arr[10][10] = { 0 };
//
//	int i = 0, j = 0;
//
//	for (i = 0; i<10; i++)
//
//	{
//
//		for (j = 0; j<10; j++)
//
//		{
//
//			if (j == 0)
//
//				arr[i][j] = 1;
//
//			if (i == j)
//
//				arr[i][j] = 1;
//
//			if (i >= 2)
//
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//
//		}
//
//	}
//
//	for (i = 0; i<10; i++)
//
//	{
//
//		for (j = 0; j <= 20 - 2 * i - 2; j++)
//
//		{
//
//			printf(" ");
//
//		}
//
//		for (j = 0; j <= i; j++)
//
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//#include<stdio.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int ret = 0;
//	int bit = 0;
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		ret = ret << 1; //左移一位，保存前一位
//		bit = value & 1; //取出最后一位
//		value = value >> 1;//值右移，取下一位
//		ret = bit | ret; //最后一位赋给ret
//	}
//	return ret;
//}
//int main()
//{
//	int num;
//	printf("请输入一个数：>");
//	scanf("%d", &num);
//	int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
//
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数：>");
//	scanf("%d%d", &a, &b);
//	c = a | b;
//	printf("%d\n", c / 2);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数：>");
//	scanf("%d%d", &a, &b);
//	c = b + ((a - b) >> 1);
//	printf("%d\n", c);
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[5] = { 1, 2, 3, 2, 1 };
//	int len = sizeof(arr) / sizeof(arr[0]);//求出数组的长度
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//		//一个数与自己异或得零，数组中数相互异或最后得到的数就是唯一出现的数
//	}
//	printf("%d\n", arr[0]);
//	return 0;
//}
//
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//int my_strlen(const char *str)
//{
//	assert(str);
//	int len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//void reverse(char *start, char *end)
//{
//	assert(start);
//	assert(end);
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//void str_reverse(char *str)
//{
//	assert(str);
//	int len = my_strlen(str);
//	reverse(str, str + len - 1);
//	while (*str != '\0')
//	{
//		char *p = str;
//		while ((*str != ' ') && (*str != '\0'))
//		{
//			str++;
//		}
//		reverse(p, str - 1);
//		if (*str != '\0')
//		{
//			str++;
//		}
//	}
//}
//int main()
//{
//	char str[] = "student a am i";
//	str_reverse(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//1.调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

}
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
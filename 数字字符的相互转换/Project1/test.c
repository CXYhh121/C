#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//比较大小  ,如果str1>str2则返回正数，str1==str2则返回0，str1<str2则返回负数
/*#include<stdio.h>
int Compare(const char *src,const char *des)
{
	while (*src != 0 && *des != 0)
		++src, ++des;
	if (*src == *des)
		return 0;
	if (*src == '\0')
		return -1;
	else
		return 1;
}
int main()
{
	char *str1 = "abcde";
	char *str2 = "abcd";
	char *str3 = "abcdefgh";
	char *str4 = "12345";
	printf("str1 > str2 return %d\n", Compare(str1, str2));
	printf("str1 < str3 return %d\n", Compare(str1, str3));
	printf("str1 = str4 return %d\n", Compare(str1, str4));
	return 0;
}*/

//将字符串数字转换为对应的数字
#include <stdio.h>
#include <assert.h>
int string_to_number(char *str)
{
	int n = 0;
	assert(str);
	while (*str != '\0')
	{
		while (*str >= '0' && *str <= '9')//判断字符串是否全为数字
		{
			n = n * 10 + (*str - '0');
			//当n = 0时，*str = 1，n = 0*10 + ('1' - '0') = 1;
			//n = 1,*str = 2,n = 1*10+('2' - '0') = 12;
			//n = 12,*str = 3,n = 12*10+('3' - '0') = 123;
			//n = 123,*str = 4 n = 123*10+('4' - '0') = 1234;
			str++;
		}
		return n;
	}
	return 0;
}
int main()
{
	char a[] = "12345";
	printf("%d\n", string_to_number(a));
	return 0;
}


//将数字转换为对应字符串
//#include <stdio.h>
//void number_to_string(int n, char s[100])
//{
//	int i = 0;
//	int p = n;//保存n，是为了之后输出整数n
//	while (n>0)
//	{
//		s[i++] = n % 10 + '0';
//		//举个例子：输入为1234
//		//n = 1234 s[0] = 1234%10 +'0' = 4(此时为字符4)，n = n/10 = 123
//		//n = 123  s[1] = 123%10+'0' = 3 n = n/10 = 12;
//		n = n / 10;
//	}
//	s[i] = '\0';
//	printf("整数是：%d\n", p);
//	printf("字符串是：");
//	int m;//此时应该倒序输出此字符串
//	for (m = i - 1; m >= 0; m--)
//	{
//		printf("%c ", s[m]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int n;
//	char s[100] = { 0 };
//	printf("请输入要转化的数字\n");
//	scanf("%d", &n);
//	number_to_string(n, s);
//	return 0;
//}
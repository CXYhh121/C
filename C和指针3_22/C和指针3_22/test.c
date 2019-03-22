#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	int ret = Fun(2);
//	printf("%d\n", ret);
//	return 0;
//
//}



//int func(x)
//{
//	int countx = 0;
//	while (x)
//	{
//		countx++;
//		x = x&(x - 1);
//	}
//	return countx;
//}
//
//int main()
//{
//	int ret = func(65530);
//	printf("%d\n", ret);
//	return 0;
//}


//main()
//{
//	int  a[3][2] = { 0 }, (*ptr)[2], i, j;
//	for (i = 0; i<2; i++)
//	{
//		ptr = a + i;
//		scanf("%d", ptr);
//		ptr++;
//	}
//	for (i = 0; i<3; i++)
//	{
//		for (j = 0; j<2; j++)
//			printf("%2d", a[i][j]);
//		printf("\n");
//	}
//}
//#include <string.h>
//#include <stdlib.h>
//
//char * GetWelcome(void){
//	char * pcWelcome;
//	char * pcNewWelcome;
//	pcWelcome = "Welcome to Huawei Test";
//	pcNewWelcome = (char *)malloc(strlen(pcWelcome));    //1
//	if (NULL == pcNewWelcome){
//		return NULL;        //2
//	}
//	strcpy(pcNewWelcome, pcWelcome);    //3
//	return pcNewWelcome;            //4
//}
//
//
//int main()
//{
//	char* str = GetWelcome();
//	printf("%s\n", str);
//	return 0;
//}



//计算一个参数二进制位中1的个数

int count_one_bits1(size_t value)
{
	int ones;
	for (ones = 0; value != 0; value = value >> 1)
	{
		if (value % 2 == 0)
			ones = ones + 1;
	}
	return ones;
}
int count_one_bits2(size_t value)
{
	int ones;
	for (ones = 0; value != 0; value >>= 1)
	{
		if ((value & 1) != 0)
			ones += 1;
	}
	return ones;
}
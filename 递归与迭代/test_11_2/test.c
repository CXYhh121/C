#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>       
//#include<string.h>
//#include<windows.h>
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//4. ��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C��������
//���ַ�������������
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
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
//	printf("������һ����:>");
//	scanf("%d", &num);
//	int ret = fun(num);
//	printf("%d\n", ret);
//	return 0;
//
//}
//int  fun1(int n)  //�ݹ�
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * fun1(n - 1);
//}
//
//int fun2(int n) //�ǵݹ�
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
//	printf("������n:");
//	scanf_s("%d", &n);
//	int DS = 0;
//	int FDS = 0;
//	DS = fun1(n);
//	FDS = fun2(n);
//	printf("�ݹ�����%d\n", DS);
//	printf("�ѵݹ�����%d\n", FDS);
//
//	//system("pause");
//	return 0;
//}

////7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//	printf("������һ����;>");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0;
//	int FD;//��Ϊc��d�Ĺ��ʸպö��� ��ʾ������
//	int i;
//	for (i = 1; i <= 4; i++)
//	{
//
//		if (i == 1)//A˵�ļ�
//		{
//			A = 1; C = 1; FD = 1; D = 0;
//		}
//		if (i == 2)//B˵�ļ�
//		{
//			A = 0; C = 0; FD = 1; D = 0;
//		}
//		if (i == 3)//C˵�ļ�
//		{
//			A = 0; C = 1; FD = 0; D = 0;
//		}
//		if (i == 4)//D��˵�ļ�
//		{
//			A = 0; C = 1; FD = 1; D = 0;
//		}
//		if (A + B + C + D + FD == 1 && FD == D)//ֻ��һ���������� ����Ϊ1ʱһ�����ֳ���  ��ΪCD�����Ƴ��Ķ���D�ǲ��� ����FD==D��Ϊ���ų�D��D���ǵ���� 
//			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//	}
//	return 0;
//}
//
//int main()
//{
//	char killer;
//	for (killer = 'A'; killer <= 'D'; killer++)//���������ASCII ��A-D����ѭ���ͱȽ�
//	{
//		//����ֱ��Ӧÿ���˶�����  ����A ��C     ��D    ����D
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)  //�������3��ʾ ��������˵���滰
//		{
//			printf("%c������\n", killer);
//			break;
//		}
//	}
//	return 0;
//}
//
//3.����Ļ�ϴ�ӡ������ǡ�
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
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
//		ret = ret << 1; //����һλ������ǰһλ
//		bit = value & 1; //ȡ�����һλ
//		value = value >> 1;//ֵ���ƣ�ȡ��һλ
//		ret = bit | ret; //���һλ����ret
//	}
//	return ret;
//}
//int main()
//{
//	int num;
//	printf("������һ������>");
//	scanf("%d", &num);
//	int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
//
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������>");
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
//	printf("��������������>");
//	scanf("%d%d", &a, &b);
//	c = b + ((a - b) >> 1);
//	printf("%d\n", c);
//	return 0;
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[5] = { 1, 2, 3, 2, 1 };
//	int len = sizeof(arr) / sizeof(arr[0]);//�������ĳ���
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//		//һ�������Լ������㣬���������໥������õ���������Ψһ���ֵ���
//	}
//	printf("%d\n", arr[0]);
//	return 0;
//}
//
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

}
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
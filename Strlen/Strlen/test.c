#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1)>0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}#include <stdio.h>//������ģʽint my_strlen(const char* str){	int count = 0;	while (*str != '\0')	{		++count;		str++;	}	return count;}//���ܴ�����ʱ����������
int my_strlen(const char * str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}//ָ��-ָ��ķ�ʽ
int my_strlen(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;}int main(){	char str[] = "agadhgash";	int ret = my_strlen(str);	printf("%d\n", ret);	return 0;}
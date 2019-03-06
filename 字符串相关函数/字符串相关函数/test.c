#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

////ģ��ʵ��strcpy,�Ὣ\0һ�𿽱�
//char* my_strcpy(char* dest,char* str)
//{
//	char* start = dest;
//
//	while (*str != '\0')
//	{
//		*dest++ = *str++;
//	}
//	*dest = *str;
//	return start;
//}
//
//int main()
//{
//	char str[20] = "qqqqqqqq";
//	my_strcpy(str, "hello");
//	printf("%s\n", str);
//	return 0;
//}

////ģ��ʵ��strcat��׷���ַ��������\0
//char* my_strcat(char* dest, char* str)
//{
//	char* start = dest;
//	while (*dest)
//		++dest;
//	while (*str)
//		*dest++ = *str++;
//	*dest = *str;
//
//	return start;
//}
//int main()
//{
//	char str[20] = "hello \0qqqqqqqqqqqq";
//	my_strcat(str, "world");
//	printf("%s\n", str);
//	return 0;
//}

////ģ��ʵ��strcmp,�Ƚ϶�Ӧ�ַ���ASCII��ֵ��С
////���ǱȽ��ַ�������
//int my_strcmp(const char* str, const char* src)
//{
//	assert(str);
//	assert(src);
//	while (*str == *src)
//	{
//		if (*str == '\0')
//			return 0;
//		str++;
//		src++;
//	}
//	/*if (*str > *src)
//		return 1;
//	else
//		return -1;*/
//	return *str - *src;
//}
//int main()
//{
//	int ret = my_strcmp("abcdef","abcdefg");
//	printf("%d\n", ret);
//	return 0;
//}

////ģ��ʵ��strncpy,����Ҫ�󳤶ȵ��ַ���������\0,
////�����ַ����Ȳ���Ҫ�󳤶ȣ���0����
//char* my_strncpy(char* dest, char* str, int count)
//{
//	char* start = dest;
//	while (*str && count)
//	{
//		*dest++ = *str++;
//		--count;
//	}
//
//	while (count)
//	{
//		*dest++ = '\0';
//		--count;
//	}
//
//	return start;
//}
//int main()
//{
//	char str[20] = "qqqqqqqqqq";
//	my_strncpy(str, "hello world",5);
//
//	printf("%s\n", str);
//	return 0;
//}

//ģ��ʵ��strncat,����֮������\0
//�����ַ�������Ҫ��ĳ��ȣ�ֱ�Ӻ��ԣ�������0
//char* my_strncat(char* dest, char* str,int count)
//{
//	char* start = dest;
//	while (*dest)
//		++dest;
//	while (*str && count)
//	{
//		*dest++ = *str++;
//		--count;
//	}
//	*dest = *str;
//	return start;
//}
//int main()
//{
//	char str[20] = "hello \0qqqqqqq";
//	my_strncat(str, "world",10);
//
//	printf("%s\n", str);
//	return 0;
//}


//ģ��ʵ��strncmp
//���������ж�
//int my_strncmp1(const char *src, const char *dest, size_t count)
//{
//	assert(NULL != dest && NULL != src);
//
//	int ret = 0;
//	//����ʹ�ú���--����Ϊret����src��dest�������֮ǰ���м��������жϵ�
//	while (count-- && !(ret = *(unsigned char *)src - *(unsigned char *)dest) && *dest)
//	{
//		src++;
//		dest++;
//	}
//	if (ret < 0)
//	{
//		ret = -1;
//	}
//	else if (ret > 0)
//	{
//		ret = 1;
//	}
//	return ret;
//}
//
////�Ƚ������ж�
//int my_strncmp2(const char* dest, const char* src, size_t count)
//{
//	assert(NULL != dest && NULL != src);
//
//	//����ʹ��ǰ��--����Ϊret����src��dest�������֮ǰ���м��������жϵ�
//	while (--count && (*dest) && (*src == *dest))
//	{
//		*dest++;
//		*src++;
//	}
//
//	if (*(unsigned char*)dest > *(unsigned char*)src)
//		return 1;
//	else if (*(unsigned char*)dest < *(unsigned char*)src)
//		return -1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret = my_strncmp1("abcdef", "abcdefgh", 6);
//
//	printf("%d\n", ret);
//	return 0;
//}



//ģ��ʵ��strstr,�����ҵ��ַ��������شӸ��ַ�����ʼ�ĺ��������ַ���
//����δ�ҵ��ַ����򷵻ؿմ�(null)
const char* my_strstr(const char* dest, const char* str)
{
	assert(dest);
	assert(str);

	const char* start = dest;
	const char* s1, *s2;

	if (*str == '\0')
		return((char *)dest);

	while (*dest)
	{
		s1 = dest;
		s2 = (char *)str;

		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;

		if (!*s2)
			return(dest);

		dest++;
	}

	return(NULL);
}
int main()
{
	const char* tmp = my_strstr("abcderfgjk", "derc");

	printf("%s\n", tmp);
	return 0;
}
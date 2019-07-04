#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include<stdio.h>
#include<string.h>
//
//void left_rotate(char* str, int k)
//{
//	k = k % strlen(str);
//	//k轮操作
//	while (k--)
//	{
//		//一轮操作，左旋一次
//		//暂时保存第一个位置的内容
//		char temp = *str;
//		char* cur = str;
//		//如果下一个字符为有效字符
//		while (*(cur + 1) != '\0');
//		{
//			//下一个位置的内容向前挪动一次
//			*cur = *(cur + 1);
//			cur++;
//		}
//		//把第一个位置的内容放在末尾
//		*cur = temp;
//	}
//}
//int main()
//{
//	char arr[100];
//	int k = 0;
//	scanf("%s", arr);
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC


//1.实现strcpy
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "qqqqqqq";
//	char *p = "hello world";
//	char* ret = my_strcpy(arr, p);
//	printf("%s\n", ret);
//	return 0;
//}

//2.实现strcat
//#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	while (*dest != '\0')
//		dest++;
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char* p2 = "world";
//	char* ret = my_strcat(arr, p2);
//	printf("%s\n", ret);
//	return 0;
//}
//3.实现strstr
//#include<assert.h>
//char* my_strstr(const char *dest, const char *str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	char* cp = (char*)dest;
//	char* substr = (char*)str;
//	char* s1 = NULL;
//	if (*str == '\0')
//		return NULL;
//	while (*cp)
//	{
//		s1 = cp;
//		substr = (char *)str;
//		while (*s1 && *substr && (*s1 == *substr))
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//			return cp;
//		cp++;
//	}
//
//}
//int main()
//{
//	char str[] = "hello world";
//	char* pch = "world";
//	printf("%s\n", pch);
//	return 0;
//}

//4.实现strchr
//char *strchr(const char *string, int c)
//{
//
//}
//int main()
//{
//
//}
//5.实现strcmp
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 != '\0' && *str2 != '\0' && *str1!=*str2)
//	{
//		if (*str1 > *str2)
//			return 1;
//		else
//			return -1;
//		*str1++;
//		*str2++;
//	}
//	return 0;
//}
//int main()
//{
//	char* p1 ="abcdf";
//	char* p2 = "abcfde";
//	int ret = my_strcmp(p1, p2);
//	if (ret > 0)
//	{
//		printf("p1大于p2\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p1小于p2\n");
//	}
//	else
//	{
//		printf("p1等于p2\n");
//	}
//	return 0;
//}
//6.实现memcpy
//
//#include<assert.h>
//void * memcpy(void *dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//
//}
//struct {
//	char name[40];
//	int age;
//}person,person_copy;
//int main()
//{
//	char myname[] = "pierre de Fermat";
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy:%s %d\n", person_copy.name, person_copy.age);
//	return 0;
//}
//7.实现memmove
#include<assert.h>
void* my_memmove(void *dest, const void *src, size_t count)
{
	void *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//分两种情况处理
	if ((char*)dest <= (char *)src|| (char*)dest >= (char*)src + count)
	  {
		   while(count--)
		      {
			    *(char*)dest = *(char*)src;
			    dest = (char*)dest + 1;
			    src = (char*)src + 1;
		          }
	       }
   else
      {
	      dest = (char*)dest + count - 1;
	      src = (char*)src + count - 1;
	      while (count--)
	         {
		       *(char*)dest = *(char*)src;
		       dest = (char*)dest - 1;
		       src = (char*)src - 1;
	               }
     }
	        return ret;
}
int main()
{
	char str[] = "memmove can be very useful........";
	my_memmove(str + 20, str + 15, 11);
	printf("%s\n", str);
	return 0;
}
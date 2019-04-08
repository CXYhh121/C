#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h> 
#include <inttypes.h>
//int fun(int n)
//{
//	int a;
//	if (n == 1)
//		return 1;
//	a = n + fun(n - 1);
//	return(a);
//}
//int main()
//{
//	printf(" %d\n", fun(5));
//	return 0;
//}


//void main()
//{
//	int x = 1, a = 0, b = 0;
//		switch (x){
//		case 0:b++;
//		case 1:a++;
//		case 2:a++; b++;
//	}
//	printf("a=%d,b=%d\n", a, b);
//}

//
//#include <stdio.h>
//
//main()
//{
//	int a[5] = { 2, 4, 6, 8, 10 }, *p, **k;
//	p = a; k = &p;
//	printf("%d ", *(p++));
//	printf("%d\n", ** k);
//}



union X
{
	uint16_t a;
	struct Z
	{
		uint8_t m;
		uint8_t n;
	}z;
};

int main()
{
	union X x;
	x.a = 0x1234;
	printf("%d\n", x.z.n);
	return 0;
}
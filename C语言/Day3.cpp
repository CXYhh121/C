//1.������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
#include<stdio.h> 
#include<stdlib.h>
/*void swap  (int arr1 [], int arr2  [], int  leng)
{
	int i = 0;
	for (i = 0; i < leng ;i++)
	{
		int t = arr1 [i];
		arr1[i] = arr2 [i];
		arr2[i] = t;
	}
}
 int main()
{
	int  i = 0;
	int arr1 [5] = { 1, 2, 3, 4, 5 };
	int arr2 [5] = { 5, 4, 3, 2, 1 };
	swap(arr1, arr2, sizeof(arr1) / sizeof(arr1[0]));
	for(i = 0;i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
	printf("%d", arr1[i]);
	}
	printf("\n");
	for(i = 0;i< sizeof(arr1) / sizeof(arr1[0]);i++)
	{
		printf("%d", arr2[i]);
	}
	return 0;
}*/
//2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
/*int main()
{
   int i = 0;
   int flag = 1;
   double count = 0;
 
   for(i=1; i<=100; ++i)
     {
         count += flag*1.0/i;
         flag = -flag;
     }
     
    printf("%f",count);
 
   return 0;
}*/
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
/*int main()
{
	int count = 0;
	int i = 0; 
	for (i = 0; i<100; i++)
	{
		if(i = _9)
		{
			count++;
		}
		if(i = 9_)
		{
			count**
		}
	printf("count=%d",count);	
	return 0;	
	}
	
}*/
//1.����Ļ���������ͼ���� 
int  main()
{
        int n=6;
        int i,a,b;
        //ǰ4��.�ϰ벿��
        for( i=1;i<=n;i++)//��������
        {
            for(  a=n-1;a>=i;a--)//��ӡ�ո�
            {
                printf(" ");
            }
            for(  b=1;b<=2*i-1;b++)//��ӡ*
            {
                printf("*");
            }
            printf("\n");
        }
        //��3��,�°벿��
        for( i=n-1;i>=1;i--)
        {
         for( a=i;a<=n-1;a++)
            {
                printf(" ");
            }
            for( b=1;b<=2*i-1;b++)
            {
                printf("*");
            }
            printf("\n");
       }
    }

//2.���0��999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3?����153��һ����ˮ�ɻ������� 
/*int main()
{
    int i,j,k,n;
    printf("ˮ�ɻ�����",n);
      for(n=100;n<1000;n++)
    {
         i=n/100;
         j=n/10-i*10;
         k=n%10;
      if(n==i*i*i+j*j*j+k*k*k)
            printf("%d\n ",n);
    }
          return 0;
}*/


//3. ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222
/*int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int sum = 0;
	printf("������һ������");
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		a = n + a * 10;
		sum += a;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}*/

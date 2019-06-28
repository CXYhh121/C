#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<stdlib.h>
#include<string.h>
#define BUFLEN 100
#define LEN 15 
#define N 100 



struct record
{
	char number[LEN];
	char name[LEN];
	float price;
	int amount;

}stu[N];

int k = 1, n, m;

void readfile();
void seek();
void modify();
void insert();
void del();
void display();
void save();
void menu();

int main()
{
	while (1)
		menu();
	system("pause");
	return 0;
}

void help()
{
	printf("\n0.��ӭʹ��ϵͳ������\n");
	printf("\n1.����ϵͳ��,��ˢ�²ֿ������Ϣ,�ٲ�ѯ;\n");
	printf("\n2.���ղ˵���ʾ�������ִ���;\n");
	printf("\n3.���Ӳֿ������Ϣ��,�мǱ��水;\n");
	printf("\n4.лл����ʹ�ã�\n");
}

void readfile()
{
	char *p = "storehouse.txt";
	FILE *fp = fopen("student.txt", "rb");
	int i = 0;
	if (fp  == NULL)
	{
		printf("Open file %s error! Strike any key to exit!", p);
		return;
	}
	while (fscanf(fp, "%s %s %f %d", stu[i].number, stu[i].name, &stu[i].price,
		stu[i].amount) == 4)
	{
		i++;
	}
	fclose(fp);
	n = i;
	printf("¼����ϣ�\n");
}

void seek()
{
	int i, item, flag;
	char s1[LEN];
	printf("------------------\n");
	printf("-----1.����Ų�ѯ-----\n");
	printf("-----2.�����Ʋ�ѯ-----\n");
	printf("-----3.�˳����˵�-----\n");
	printf("------------------\n");
	while (1)
	{
		printf("��ѡ���Ӳ˵����:");
		scanf("%d", &item);
		flag = 0;
		switch (item)
		{
		case 1:
			printf("������Ҫ��ѯ�Ļ���ı��:\n");
			scanf("%s", s1);
			for (i = 0; i<n; i++)
			if (strcmp(stu[i].number, s1) == 0)
			{
				flag = 1;
				printf("��� ����    ����   ����  \n");
				printf("--------------------------------------------------------------------\n");
				printf("%s  %5s   %7f  %5d \n", stu[i].number, stu[i].name, stu[i].price,
					stu[i].amount);
			}
			if (flag == 0)
				printf("�ñ�Ų����ڣ�\n"); break;
		case 2:
			printf("������Ҫ��ѯ�Ļ��������:\n");
			scanf("%s", s1);
			for (i = 0; i<n; i++)
			if (strcmp(stu[i].name, s1) == 0)
			{
				flag = 1;
				printf("��� ����    ����   ����\n");
				printf("--------------------------------------------------------------------\n");
				printf("%s  %5s   %7f  %5d \n", stu[i].number, stu[i].name, stu[i].price,
					stu[i].amount);
			}
			if (flag == 0)
				printf("�����Ʋ����ڣ�\n"); break;
		case 3:return;
		default:printf("����-3֮��ѡ��\n");
		}
	}
}

void modify()
{
	int i, item, num;
	char s1[LEN + 1], s2[LEN + 1];
	printf("������ҪҪ�޸ĵĻ���ı��:\n");
	scanf("%s", s1);
	for (i = 0; i < n; i++)
	if (strcmp(stu[i].number, s1) == 0)
		num = i;
	printf("------------------\n");
	printf("1.�޸�����\n");
	printf("2.�޸ĵ���\n");
	printf("3.�޸�����\n");
	printf("4.�˳����˵�\n");
	printf("------------------\n");
	while (1)
	{
		printf("��ѡ���Ӳ˵����:");
		scanf("%d", &item);
		switch (item)
		{
			case 1:
				printf("�������µ�����:\n");
				scanf("%s", s2);
				strcpy(stu[num].name, s2); break;
			case 2:
				printf("�������µĵ���:\n");
				scanf("%f", &stu[num].price); break;
			case 3:
				printf("�������µ�����:\n");
				scanf("%d", &stu[num].amount); break;
			case 4:return;
			default:printf("����-4֮��ѡ��\n");
		}
	}
}


void insert()
{
	int i = n, j, flag;
	printf("����������ӵĻ�����:\n");
	scanf("%d", &m);
	do
	{
		flag = 1;
		while (flag)
		{
			flag = 0;
			printf("�������%d ������ı��:\n", i + 1);
			scanf("%s", stu[i].number);
			for (j = 0; j<i; j++)
			if (strcmp(stu[i].number, stu[j].number) == 0)
			{
				printf("���иñ��,���������¼��!\n");
				flag = 1;
				break;
			}
		}
		printf("�������%d ������ı��:\n", i + 1);
		scanf("%s", stu[i].number);
		printf("�������%d �����������:\n", i + 1);
		scanf("%s", stu[i].name);
		printf("�������%d ������ĵ���:\n", i + 1);
		scanf("%f", &stu[i].price);
		printf("�������%d �����������\n", i + 1);
		scanf("%d", &stu[i].amount);
		if (flag == 0)
		{
			
			i++;
		}
	} while (i < n + m);
	n += m;
	printf("¼����ϣ�\n\n");
}

void del()
{
	int i, j, flag = 0;
	char s1[LEN + 1];
	printf("������Ҫɾ������ı��:\n");
	scanf("%s", s1);
	for (i = 0; i<n; i++)
	if (strcmp(stu[i].number, s1) == 0)
	{
		flag = 1;
		for (j = i; j<n - 1; j++)
			stu[j] = stu[j + 1];
	}
	if (flag == 0)
		printf("�ñ�Ų����ڣ�\n");
	if (flag == 1)
	{
		printf("ɾ���ɹ�,��ʾ�����ѡ��˵�\n");
		n--;
	}
}
void display()
{
	int i;
	printf("���л������ϢΪ:\n");
	printf("��� ����   ����   ���� \n");
	printf("--------------------------------------------------------------------\n");
	for (i = 0; i<n; i++)
	{
		printf("%s %5s   %7f  %5d\n", stu[i].number, stu[i].name, stu[i].price,
			stu[i].amount);
	}
}

void save()
{
	int i;
	FILE *fp;
	fp = fopen("student.txt", "wb");
	for (i = 0; i<n; i++)
	{
		fprintf(fp, "%s  %5s   %7f  %5d\n", stu[i].number, stu[i].name, stu[i].price,
			stu[i].amount);
	}
	fclose(fp);
}
void menu()
{
	int num;
	printf(" \n\n           �������ϵͳ        \n\n");

	printf("*********************ϵͳ���ܲ˵�************************       \n");
	printf("������ʾ����ѯǰ����ˢ��ϵͳ��\n");
	printf("     ----------------------   ----------------------   \n");
	printf("     *********************************************     \n");
	printf("     * 0.ϵͳ������˵��  * *  1.ˢ�»�����Ϣ   *     \n");
	printf("     *********************************************     \n");
	printf("     * 2.���ӻ�����Ϣ    * *  3.�޸Ļ�����Ϣ   *     \n");
	printf("     *********************************************     \n");
	printf("     * 4.����ѯ������Ϣ    * *  5.�����ɾ����Ϣ *     \n");
	printf("     *********************************************     \n");
	printf("     * 6.��ʾ��ǰ��Ϣ    * *  7.���浱ǰ������Ϣ*     \n");
	printf("     ********************** **********************     \n");
	printf("     * 8.�˳�ϵͳ        *                            \n");
	printf("     **********************                            \n");
	printf("     ----------------------   ----------------------                           \n");
	printf("��ѡ��˵����:");
	scanf("%d", &num);
	switch (num)
	{
		case 0:help(); break;
		case 1:readfile(); break;
		case 2:insert(); break;
		case 3:modify(); break;
		case 4:seek(); break;
		case 5:del(); break;
		case 6:display(); break;
		case 7:save(); break;
		case 8:k = 0; break;
		default:printf("����-8֮��ѡ��\n");
	}
}
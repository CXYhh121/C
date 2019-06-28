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
	printf("\n0.欢迎使用系统帮助！\n");
	printf("\n1.进入系统后,先刷新仓库货物信息,再查询;\n");
	printf("\n2.按照菜单提示键入数字代号;\n");
	printf("\n3.增加仓库货物信息后,切记保存按;\n");
	printf("\n4.谢谢您的使用！\n");
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
	printf("录入完毕！\n");
}

void seek()
{
	int i, item, flag;
	char s1[LEN];
	printf("------------------\n");
	printf("-----1.按编号查询-----\n");
	printf("-----2.按名称查询-----\n");
	printf("-----3.退出本菜单-----\n");
	printf("------------------\n");
	while (1)
	{
		printf("请选择子菜单编号:");
		scanf("%d", &item);
		flag = 0;
		switch (item)
		{
		case 1:
			printf("请输入要查询的货物的编号:\n");
			scanf("%s", s1);
			for (i = 0; i<n; i++)
			if (strcmp(stu[i].number, s1) == 0)
			{
				flag = 1;
				printf("编号 名称    单价   数量  \n");
				printf("--------------------------------------------------------------------\n");
				printf("%s  %5s   %7f  %5d \n", stu[i].number, stu[i].name, stu[i].price,
					stu[i].amount);
			}
			if (flag == 0)
				printf("该编号不存在！\n"); break;
		case 2:
			printf("请输入要查询的货物的名称:\n");
			scanf("%s", s1);
			for (i = 0; i<n; i++)
			if (strcmp(stu[i].name, s1) == 0)
			{
				flag = 1;
				printf("编号 名称    单价   数量\n");
				printf("--------------------------------------------------------------------\n");
				printf("%s  %5s   %7f  %5d \n", stu[i].number, stu[i].name, stu[i].price,
					stu[i].amount);
			}
			if (flag == 0)
				printf("该名称不存在！\n"); break;
		case 3:return;
		default:printf("请在-3之间选择\n");
		}
	}
}

void modify()
{
	int i, item, num;
	char s1[LEN + 1], s2[LEN + 1];
	printf("请输入要要修改的货物的编号:\n");
	scanf("%s", s1);
	for (i = 0; i < n; i++)
	if (strcmp(stu[i].number, s1) == 0)
		num = i;
	printf("------------------\n");
	printf("1.修改名称\n");
	printf("2.修改单价\n");
	printf("3.修改数量\n");
	printf("4.退出本菜单\n");
	printf("------------------\n");
	while (1)
	{
		printf("请选择子菜单编号:");
		scanf("%d", &item);
		switch (item)
		{
			case 1:
				printf("请输入新的名称:\n");
				scanf("%s", s2);
				strcpy(stu[num].name, s2); break;
			case 2:
				printf("请输入新的单价:\n");
				scanf("%f", &stu[num].price); break;
			case 3:
				printf("请输入新的数量:\n");
				scanf("%d", &stu[num].amount); break;
			case 4:return;
			default:printf("请在-4之间选择\n");
		}
	}
}


void insert()
{
	int i = n, j, flag;
	printf("请输入待增加的货物数:\n");
	scanf("%d", &m);
	do
	{
		flag = 1;
		while (flag)
		{
			flag = 0;
			printf("请输入第%d 个货物的编号:\n", i + 1);
			scanf("%s", stu[i].number);
			for (j = 0; j<i; j++)
			if (strcmp(stu[i].number, stu[j].number) == 0)
			{
				printf("已有该编号,请检查后重新录入!\n");
				flag = 1;
				break;
			}
		}
		printf("请输入第%d 个货物的编号:\n", i + 1);
		scanf("%s", stu[i].number);
		printf("请输入第%d 个货物的名称:\n", i + 1);
		scanf("%s", stu[i].name);
		printf("请输入第%d 个货物的单价:\n", i + 1);
		scanf("%f", &stu[i].price);
		printf("请输入第%d 个货物的数量\n", i + 1);
		scanf("%d", &stu[i].amount);
		if (flag == 0)
		{
			
			i++;
		}
	} while (i < n + m);
	n += m;
	printf("录入完毕！\n\n");
}

void del()
{
	int i, j, flag = 0;
	char s1[LEN + 1];
	printf("请输入要删除货物的编号:\n");
	scanf("%s", s1);
	for (i = 0; i<n; i++)
	if (strcmp(stu[i].number, s1) == 0)
	{
		flag = 1;
		for (j = i; j<n - 1; j++)
			stu[j] = stu[j + 1];
	}
	if (flag == 0)
		printf("该编号不存在！\n");
	if (flag == 1)
	{
		printf("删除成功,显示结果请选择菜单\n");
		n--;
	}
}
void display()
{
	int i;
	printf("所有货物的信息为:\n");
	printf("编号 名称   单价   数量 \n");
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
	printf(" \n\n           货物管理系统        \n\n");

	printf("*********************系统功能菜单************************       \n");
	printf("友情提示：查询前请先刷新系统！\n");
	printf("     ----------------------   ----------------------   \n");
	printf("     *********************************************     \n");
	printf("     * 0.系统帮助及说明  * *  1.刷新货物信息   *     \n");
	printf("     *********************************************     \n");
	printf("     * 2.增加货物信息    * *  3.修改货物信息   *     \n");
	printf("     *********************************************     \n");
	printf("     * 4.增查询货物信息    * *  5.按编号删除信息 *     \n");
	printf("     *********************************************     \n");
	printf("     * 6.显示当前信息    * *  7.保存当前货物信息*     \n");
	printf("     ********************** **********************     \n");
	printf("     * 8.退出系统        *                            \n");
	printf("     **********************                            \n");
	printf("     ----------------------   ----------------------                           \n");
	printf("请选择菜单编号:");
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
		default:printf("请在-8之间选择\n");
	}
}
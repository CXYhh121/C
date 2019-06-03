#include"Contact.h"
#include"Person.h"
void InitContact(Contact* pcon)
{
	assert(pcon != NULL);
	pcon->sz = 0;
	pcon->capacity = DEFAULT_SZ;
	pcon->data = (PeoInfo*)malloc(pcon->capacity*sizeof(PeoInfo));
	memset(pcon->data, 0, pcon->capacity*sizeof(PeoInfo));

}
void DstoryContact(Contact* pcon)
{
	assert(pcon != NULL);
	SaveContact(pcon);
	free(pcon->data);
	pcon->data = NULL;
	pcon->sz = 0;
	pcon->capacity = 0;
}
void LoaContact(Contact* pcon)
{
	assert(pcon != NULL);
	int i = 0;
	PeoInfo temp = { 0 };
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//读数据
	while (fread(&temp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz++] = temp;
	}
	fclose(pcon);
	pcon = NULL;
}

void SaveContact(Contact* pcon)
{
	assert(pcon != NULL);
	int i = 0;
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//写数据
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;

}

int CheckCapacity(Contact* pcon)
{
	assert(pcon != NULL);
	if (pcon->capacity == pcon->sz)
	{
		//增容
		PeoInfo *ptr = (PeoInfo*)realloc(pcon->data, (pcon->capacity + INC_SZ)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += INC_SZ;
			printf("\t增容成功！\n");
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void AddContact(Contact* pcon)
{
	assert(pcon != NULL);
	////增加容量函数
	if (CheckCapacity(pcon) == 0)
	{
		printf("通讯录已满，尝试增容失败，无法添加！");
		return;
	}

	else
	{
		printf("请输入名字：>");
		scanf("%s", pcon->data[pcon->sz].Name);
		printf("请输入性别：>");
		scanf("%s", pcon->data[pcon->sz].Sex);
		printf("请输入年龄：>");
		scanf("%d", &pcon->data[pcon->sz].Age);
		printf("请输入电话：>");
		scanf("%s", pcon->data[pcon->sz].Tele);
		printf("请输入地址：>");
		scanf("%s", pcon->data[pcon->sz].Addr);
	}
	
	
	pcon->sz++;
	printf("添加成功！\n");

}
void ShowContact(Contact* pcon)
{
	assert(pcon != NULL);
	int i = 0;
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n",
			pcon->data[i].Name,
			pcon->data[i].Sex,
			pcon->data[i].Age,
			pcon->data[i].Tele,
			pcon->data[i].Addr
			);
	}
}
int FindEntry(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon != NULL);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].Name, name) == 0)
		{
			return i;//找到了
		}
	}
	return -1;//找不到
}
void DelContact(Contact* pcon)
{
	assert(pcon != NULL);
	char name[NAME_MAX] = {0};
	int pos;
	if (pcon->sz == 0)
	{
		printf("通讯录为空，无法删除！");
	}
	else
	{
		printf("请输入要删除人的名字:>");
		scanf("%s", &name);
		pos = FindEntry(pcon, name);
		if (pos == -1)
		{
			printf("通讯录中无此人信息！\n");
		}
		else
		{
			//删除
			int i = 0;
			for (i = pos; i < pcon->sz - 1; i++)
			{
				pcon->data[i] = pcon->data[i + 1];
			}
			printf("删除成功！\n");
			pcon->sz--;
		}
	}
}



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
	//������
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
	//д����
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
		//����
		PeoInfo *ptr = (PeoInfo*)realloc(pcon->data, (pcon->capacity + INC_SZ)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += INC_SZ;
			printf("\t���ݳɹ���\n");
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
	////������������
	if (CheckCapacity(pcon) == 0)
	{
		printf("ͨѶ¼��������������ʧ�ܣ��޷���ӣ�");
		return;
	}

	else
	{
		printf("���������֣�>");
		scanf("%s", pcon->data[pcon->sz].Name);
		printf("�������Ա�>");
		scanf("%s", pcon->data[pcon->sz].Sex);
		printf("���������䣺>");
		scanf("%d", &pcon->data[pcon->sz].Age);
		printf("������绰��>");
		scanf("%s", pcon->data[pcon->sz].Tele);
		printf("�������ַ��>");
		scanf("%s", pcon->data[pcon->sz].Addr);
	}
	
	
	pcon->sz++;
	printf("��ӳɹ���\n");

}
void ShowContact(Contact* pcon)
{
	assert(pcon != NULL);
	int i = 0;
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
			return i;//�ҵ���
		}
	}
	return -1;//�Ҳ���
}
void DelContact(Contact* pcon)
{
	assert(pcon != NULL);
	char name[NAME_MAX] = {0};
	int pos;
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ����");
	}
	else
	{
		printf("������Ҫɾ���˵�����:>");
		scanf("%s", &name);
		pos = FindEntry(pcon, name);
		if (pos == -1)
		{
			printf("ͨѶ¼���޴�����Ϣ��\n");
		}
		else
		{
			//ɾ��
			int i = 0;
			for (i = pos; i < pcon->sz - 1; i++)
			{
				pcon->data[i] = pcon->data[i + 1];
			}
			printf("ɾ���ɹ���\n");
			pcon->sz--;
		}
	}
}



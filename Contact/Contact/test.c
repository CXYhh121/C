#include"Contact.h"

void menu()
{
	printf("\t****************************************\n");
	printf("\t********     ��ӭʹ��ͨѶ¼   **********\n");
	printf("\t****************************************\n");
	printf("\t******1��add         2��del      *******\n");
	printf("\t******3��search      3��modify   *******\n");
	printf("\t******5��show        6��empty    *******\n");
	printf("\t******7��sort        0��exit     *******\n");
	printf("\t****************************************\n");
}
void test()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	LoaContact(&con);
	do{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EMPTY:
			break;
		case SORT:
			break;
		case EXIT:
			DstoryContact(&con);//����free�ͷ�malloc���ٵĿռ�
			printf("�˳�ͨѶ¼��\n");
			break;

		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}


	} while (input);
}
int main()
{
	test();
	return 0;
}
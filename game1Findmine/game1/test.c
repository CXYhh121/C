
//system("pause");
#include "game.h"
void game()
{
	//��������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ��mine show
	Initboard(mine, ROWS, COLS,'0');
	//Display(mine, ROW, COL);
	Initboard(show, ROWS, COLS,'*');
	Display(show, ROW, COL);
	//��ӡDisplay
	//������
	Setmine(mine, ROW, COL);
	//Display(mine, ROW, COL);
	//����
	//SafeMine(mine, show, ROW, COL);
	Findmine(mine, show, ROW, COL);
	
	
}
void menu()
{
	printf("******************************\n");
	printf("*******��ӭ����ɨ��С��Ϸ*****\n");
	printf("******************************\n");
	printf("******    1.play        ******\n");
	printf("******    0.exit        ******\n");
	printf("******************************\n");
	printf("******************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�����룺��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}
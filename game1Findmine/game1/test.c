
//system("pause");
#include "game.h"
void game()
{
	//创建数组
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化mine show
	Initboard(mine, ROWS, COLS,'0');
	//Display(mine, ROW, COL);
	Initboard(show, ROWS, COLS,'*');
	Display(show, ROW, COL);
	//打印Display
	//布置雷
	Setmine(mine, ROW, COL);
	//Display(mine, ROW, COL);
	//找雷
	//SafeMine(mine, show, ROW, COL);
	Findmine(mine, show, ROW, COL);
	
	
}
void menu()
{
	printf("******************************\n");
	printf("*******欢迎来到扫雷小游戏*****\n");
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
		printf("请输入：〉");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}
#include "game.h"

void game()
{
	char board[ROW][COL] = { 0 };
	char ret;
	Initboard(board, ROW, COL);
	Display(board, ROW, COL);
	while (1)
	{
		ComputerMove(board,ROW,COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
			break;
		Display(board, ROW, COL);
		PlayerMove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
			break;
		Display(board, ROW, COL);
	}
	if (ret == 'X')
	{
		printf("电脑赢！\n");
	}
	else if (ret == '0')
	{
		printf("玩家赢！\n");
	}
	else if (ret == 'Q')
	{
		printf("平局！\n");
	}
	Display(board, ROW, COL);
}
void menu()
{
	printf("************************************\n");
	printf("*******      1.play          *******\n");
	printf("*******      0.exit          *******\n");
	printf("************************************\n");

}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
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
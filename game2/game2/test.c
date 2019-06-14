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
		printf("����Ӯ��\n");
	}
	else if (ret == '0')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ�֣�\n");
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
		printf("������:>");
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
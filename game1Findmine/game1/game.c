#include "game.h"
void Initboard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void Display(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char arr[ROWS][COLS], int row, int  col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
		
	}
}
int  GetmineCount(char mine[ROWS][COLS], int x, int y)
{
	int count = mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
	return count;
}
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col,int x,int y)
{
	
	int ret = GetmineCount(mine, x, y);
	if (ret == 0)
	{
		show[x][y] = ' ';
		if (x - 1 > 0 && y > 0 && show[x - 1][y] == '*')
			OpenMine(mine, show, row,col, x - 1, y);
		if (x - 1 > 0 && y + 1 > 0 && show[x - 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y + 1);
		if (x > 0 && y + 1 > 0 && show[x][y + 1] == '*')
			OpenMine(mine, show, row, col, x, y + 1);
		if (x + 1 > 0 && y + 1 > 0 && show[x + 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y + 1);
		if (x + 1 > 0 && y > 0 && show[x + 1][y] == '*')
			OpenMine(mine, show, row, col, x + 1, y);
		if (x + 1 > 0 && y - 1 > 0 && show[x + 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y - 1);
		if (x  > 0 && y - 1 > 0 && show[x][y - 1] == '*')
			OpenMine(mine, show, row, col, x, y - 1);
		if (x - 1  > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y - 1);

	}
	else
	{
		show[x][y] = GetmineCount(mine, x, y) + '0';
	}
}
void SafeMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = 1;
	int ch = 0;
	printf("请输入坐标：>");
	scanf("%d%d", x, y);
	if (mine[x][y] == '1')
	{
		mine[x][y] = '0';//如果第一次中雷则改为非雷
		ch = GetmineCount(mine, x, y);//获取周围雷的个数
		show[x][y] = ch + '0';
		while (ret)//随机在周围有空的地方布置一个雷
		{
			x = rand() % 9 + 1;//生成随机数1-9
			y = rand() % 9 + 1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
			}
			ret--;
		}
	}
	OpenMine(mine, show, row, col, x , y);
	Display(mine,row,col);
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while ( win<row*col-EASY_COUNT)
	{
		printf("请输入坐标：〉");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x<=row && y>=1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				int ret = GetmineCount(mine, x, y);
				show[x][y] = ret + '0';
				OpenMine(mine, show, row, col, x, y);
				Display(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入错误,请重新输入!\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你排雷成功!\n");
	}

}



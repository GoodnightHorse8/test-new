#include "game.h"
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			 arr[i][j] = set;
		}

	}
}


void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-----------扫雷游戏------------\n");
	for (i = 0; i <= col;i++)//打印序号
	{
		printf(" %d ", i);
	}
	printf("\n");
	
	for (i =1; i <=row; i++)//打印列
	{
		printf(" %d ", i);
		int j = 0;
		for (j =1; j <=col; j++)//打印行
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}


void Setmine(char arr[ROWS][COLS], int row, int col)
{
	int count = LEI;
	while (count)
	{
		//为了让生成的随机雷在1到9之间,所以%9加1
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}

	}

}

  int Getmine(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y]+
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');

}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//判断坐标有效性
	while (win< row * col - LEI)
	{
		printf("请输入你要查找的坐标:");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] =='1')
			{
				printf("不好意思，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else//改坐标不是0，但是要统计周围有几个雷了
			{
				int count= Getmine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;

			}
		}
		else
		{
			printf("该坐标不存在，请重新输入\n");
		}

	}
	if (win == row * col - LEI)
	{
		printf("恭喜扫雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}




}
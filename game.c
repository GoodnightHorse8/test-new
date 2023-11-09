#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//打印一行的数据
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)//打印分割行
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

	void  PlayerMove(char board[ROW][COL], int row, int col);//玩家下棋
	{
		int x = 0;
		int y = 0;
		printf("玩家走:\n");
		while (1)
		{
			printf("请输入您要下的坐标:");
			scanf_s("%d%d,&x,&y");
			判断x，y的合法性
				if (x >= 1 && x <= row && y >= 1 && y <= col)
				{
					if (board[x - 1][y - 1] = ' ')
					{
						board[x - 1][y - 1] = '*';
						break;
					}
					else
					{
						printf("该坐标已被占用\n");
					}
				else
				{
					printf("坐标非法，请重新输入！\n");
				}
				}
		}

		void  ComputerMove(char board[ROW][COL], int row, int col);//电脑下棋
		{
			int x = 0;
			int y = 0;
			printf("电脑走:");
			while (1)
			{
				x = rand() % row;//让结果只有（0,1,2)
				y = rand() % col;
				if (board[x][y] == ' ')
				{
					board[x][y] = '#';
					break;
				}


			}

		}
	}
	//返回1表示棋盘满了
	//返回0表示棋盘没满
	int IsFull(char board[ROW][COL], int row, int col)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			for(j=0;j<col;j++)
				if (board[i][j] == ' ')
				{
					return 0;
				}
		}
		return 1;
	}
	char IsWin(char board[ROW][COL], int row, int col);//判断谁赢条件
	{
		int i = 0;
		for (i = 0; i < row; i++)//横三行
		{
			if (board[i][O] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return board[i][1];
			}

		}
	}
	for (i = 0; i < col; i++)//竖三行
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][O] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][O] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1 == IsFull(board, ROW, COL))
	{
		retuen 'Q';
	}
	return 'c';
}
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
	printf("-----------ɨ����Ϸ------------\n");
	for (i = 0; i <= col;i++)//��ӡ���
	{
		printf(" %d ", i);
	}
	printf("\n");
	
	for (i =1; i <=row; i++)//��ӡ��
	{
		printf(" %d ", i);
		int j = 0;
		for (j =1; j <=col; j++)//��ӡ��
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
		//Ϊ�������ɵ��������1��9֮��,����%9��1
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
	//�ж�������Ч��
	while (win< row * col - LEI)
	{
		printf("��������Ҫ���ҵ�����:");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] =='1')
			{
				printf("������˼���㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else//�����겻��0������Ҫͳ����Χ�м�������
			{
				int count= Getmine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;

			}
		}
		else
		{
			printf("�����겻���ڣ�����������\n");
		}

	}
	if (win == row * col - LEI)
	{
		printf("��ϲɨ�׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}




}
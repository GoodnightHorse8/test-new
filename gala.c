void menu()
{
	printf("***************************\n");
	printf("****** 1.play  0.exit******\n");
	printf("***************************\n");

}
void game()
{
	char ret = 0;
	//数组来存放棋盘的信息
	char board[ROW][COL] = { 0 };//全部为空格
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断是否赢
		ret = IsWin();
		if (ret != 'c')
		{
			break;
		}
		if (ret == '*')
		{
			printf（"玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
		{
			print("平局\n");
		}
	}
	void test()
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu()
				print("请选择:\n");
			scanf_s("%d", &input);
			switch (input)
			{case 1:
				printf("三子棋\n");
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择！\n");
				break;


			}
		} while (input);
	}
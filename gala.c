void menu()
{
	printf("***************************\n");
	printf("****** 1.play  0.exit******\n");
	printf("***************************\n");

}
void game()
{
	char ret = 0;
	//������������̵���Ϣ
	char board[ROW][COL] = { 0 };//ȫ��Ϊ�ո�
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж��Ƿ�Ӯ
		ret = IsWin();
		if (ret != 'c')
		{
			break;
		}
		if (ret == '*')
		{
			printf��"���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
		{
			print("ƽ��\n");
		}
	}
	void test()
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu()
				print("��ѡ��:\n");
			scanf_s("%d", &input);
			switch (input)
			{case 1:
				printf("������\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;


			}
		} while (input);
	}
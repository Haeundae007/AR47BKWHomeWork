#include <iostream>


int main()
{
	char stage[10][10];//[y][x]
	char direction = ' ';
	int playerX = 5, playerY = 5; // *
	int monsterX = 0, monsterY = 0;


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			stage[i][j] = ' ';
		}
	}
	while (1)
	{
		srand((unsigned int)time(NULL));

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{

				if (i == playerY && j == playerX)
				{
					printf("★");
				}
				else if (i == monsterY && j == monsterX)
				{
					printf("＠");
				}
				else if (playerX == monsterX && playerY == monsterY)
				{
					printf("허무");
				}
				else
				{
					printf("□");
				}

			}

			printf("\n");
		}


		printf("방향 입력 (W A S D) : ");
		std::cin >> direction;

		//switch(기준)
		switch (direction)
		{
		case 'w':
			if (playerY > 0)
			{
				playerY--;
			}
			break;
		case 's':
			if (playerY < 9)
			{
				playerY++;
			}
			break;
		case 'a':
			if (playerX > 0)
			{
				playerX--;
			}
			break;
		case 'd':
			if (playerX < 9)
			{
				playerX++;
			}
			break;
		default:
			printf("다시입력\n");
		}

		int monsterDirection = 0; // 0 가만히 있는다, 1 위로 2 아래 3 좌 4 우
		monsterDirection = rand() % 5;

		switch (monsterDirection)
		{
		case 1:
			if (monsterY > 0)
			{
				monsterY--;
			}
			break;
		case 2:
			if (monsterY < 9)
			{
				monsterY++;
			}
			break;
		case 3:
			if (monsterX > 0)
			{
				monsterX--;
			}
			break;
		case 4:
			if (monsterX < 9)
			{
				monsterX++;
			}
			break;

		default:
			printf("다시입력\n");

		}

		system("cls");
	}

	system("pause");
}
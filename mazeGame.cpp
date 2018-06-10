/*

			Coded By : Muneeb Mughal
			Date : 10/6/2018
			Time : 11 : 28 PM

*/

#include "stdafx.h" // Should only be used if using Visual Studio
#include <iostream>
#include <conio.h>

#define UP 72

#define DOWN 80

#define LEFT 75

#define RIGHT 77

void printMaze(char[12][12]);

int main()
{

	char maze[12][12] =
	{
		{ '#', '#','#', '#','#', '#','#', '#','#', '#', '#', '#' },
	{ '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#' },
	{ '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.' ,'#' },
	{ '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },
	{ '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.' },
	{ '#', '#', '#', '#', '.', '#', '.', '#', '.', '#' , '.', '#' },
	{ '#', '.', '.', '#', '.', '#', '.', '#', '.', '#' , '.', '#' },
	{ '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' , '.', '#' },
	{ '#', '.', '.', '.', '.', '.', '.', '.', '.', '#' , '.', '#' },
	{ '#', '#', '#', '#', '#', '#', '.', '#', '#', '#' , '.', '#' },
	{ '#', '.', '.', '.', '.', '.', '.', '#', '.', '.' , '.', '#' },
	{ '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' , '#', '#' }
	};

	int input = 0;

	char* player = &maze[2][0];

	char* winPosition = &maze[4][11];

	*player = 'X';

	while (true)
	{

		printMaze(maze);

		input = _getch();

		if (input == RIGHT)
		{
			if (player == winPosition)
			{
				system("cls");
				system("color 02");
				printf("\t\tCongrats you have won the game! ");
				break;
			}
			else if (*(player + 1) == '.')
			{
				*player = '.';
				++player;
				*player = 'X';
			}

		}
		else if (input == LEFT)
		{
			if (*(player - 1) == '.')
			{
				*player = '.';
				--player;
				*player = 'X';
			}
		}
		else if (input == UP)
		{
			if (*(player - 12) == '.')
			{
				*player = '.';
				player -= 12;
				*player = 'X';
			}
		}
		else if (input == DOWN)
		{
			if (*(player + 12) == '.')
			{
				*player = '.';
				player += 12;
				*player = 'X';
			}
		}

		system("cls");
	}

	return 0;
}

void printMaze(char maze[12][12])
{

	for (int i = 0; i <= 11; ++i)
	{

		printf("\t\t\t\t");
		for (int j = 0; j <= 11; ++j)

			std::cout << maze[i][j];

		std::cout << std::endl;
	}

}

#include "Board.h"



Board::Board()
{
	print();
}

void Board::addChecker(char who, int row, int col)
{
	cout << "Enter kind of checker-- B/W:";
	cin >> who;

	cout << "Enter coordinates: ";
	cout << "Row: ";
	cin >> row;
	cout << "Collumn: ";
	cin >> col;

	board[row][col]= who;
	print();
}

void Board::print()
{
	for (int row = 8;row >= 0; row--)
	{
		cout << row << "\t";
		for (int col = 0; col < 8; col++)
		{
			cout << board[row][col] << '\t';
		}
		cout << endl;
	}
	cout << "\t------------------------------------" << endl;
	cout << '\t';
	for (int col = 0; col < 7;col++)
	{
		cout << col << '\t';
	}
	cout << endl;
}

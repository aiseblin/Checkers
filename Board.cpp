#include "Board.h"



Board::Board()
{
	
}

void Board::addChecker(char who, int row, int collu)
{
	int oppPieces = 0;
	int userPieces = 0;
	

	cout << "Enter the number of your pieces, and then your opponent's pieces: " << endl;
	cin >> userPieces >> oppPieces;
	
	
	
	cout << "Enter the coordinates of your pieces, followed by those of your opponent's: " << endl;

	
	for (int user = 1; user <= userPieces; user++)
	{	
		who = 'B';
		cin >> row >> collu;
		board[row][collu]= who;
	}

	
	for (int opponents = 1;opponents <= oppPieces; opponents++)
	{
		who = 'W';
		cin >> row >> collu;
		board[row][collu] = who;
	}
	

	
	print();
}

void Board::print()
{
	for (int row = 7;row >= 0; row--)
	{
		cout << row << "\t";
		for (int collu = 0; collu < 8; collu++)
		{
			cout << board[row][collu] << '\t';
		}
		cout << endl;
	}
	cout << "\t------------------------------------" << endl;
	cout << '\t';
	for (int collu = 0; collu < 8;collu++)
	{
		cout << collu << '\t';
	}
	cout << endl;
}

#include "Board.h"



Board::Board()
{
	
}

void Board::addChecker(char who, int row, int collu)
{
	int whitePieces = 0;
	int blackPieces = 0;
	
	
	cout << "Enter the number of white pieces and then black pieces (w b), followed by their coordinates, (row collumn): " << endl;
	cin >> whitePieces >> blackPieces;
	


	
	for (int white = 1; white <= whitePieces; white++)
	{	
		who = 'W';
		cin >> row >> collu;
		board[row][collu]= who;
	}

	
	for (int black = 1;black <= blackPieces; black++)
	{
		who = 'B';
		cin >> row >> collu;
		board[row][collu] = who;
	}
	

	
	print();
}

void Board::print()
{
	//Print algorithm from Prof Charnesky's example

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

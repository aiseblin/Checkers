#include <iostream>
#include "Board.h"
using namespace std;
/*
Name: Afeefeh Seblini
Problem: User will input number of checkers on board and their coordinates, 
program will calculate the maximum number of moves that the king can make.
*/

int main()
{

	char who = 0;
	int row = 0;
	int collu = 0;
	Board board;
	board.addChecker(who, row, collu);
	system("pause");
	return 0;
}
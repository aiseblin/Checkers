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
	Board board;
	board.addChecker();
	board.print();
	system("pause");
	return 0;
}
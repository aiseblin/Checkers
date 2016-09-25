#include <iostream>
using namespace std;

class Board {
public:
	Board();
	void addChecker(char who, int row, int col);
	void print();

private:
	char board[8][8];
};
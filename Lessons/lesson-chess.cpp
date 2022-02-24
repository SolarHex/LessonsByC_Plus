#include <iostream>
using namespace std;

const int rook = 1;
const int bishop = 2;
const int queen = 3;

// Принимает 5 значений, выдает 0 или 1
int move_check(int move_type, int c_x, int c_y, int as_x, int as_y) {
switch (move_type) {
case rook : return (c_x == as_x) || (c_y == as_y);
case bishop : return abs(as_x - c_x) == abs(as_y - c_y);
case queen : return (abs(as_x - c_x) == abs(as_y - c_y)) || ((c_x == as_x) || (c_y == as_y));
default : return 0;
}
}

// Принимает x, y, вывдит все i, j, подходящих условию
void poss_moves(int move_type, int x, int y){


for (int i = 1; i < 9; i++)
for (int j = 1; j < 9; j++ )
if (move_check(move_type, x, y, i, j))
cout << i << " " << j << endl;


}

int main() {
int move_type, x, y;
cin >> move_type >> x >> y;
poss_moves (move_type, x, y);
return 0;
}
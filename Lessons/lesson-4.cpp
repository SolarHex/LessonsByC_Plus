#include <stdio.h>
#include <iostream>


using namespace std;

int ladia(int a, int b, int x, int y) {
    if (x == a || y == b) {
        return 1;
        }
        else {
        return 0;
        }
        }
        int slon(int a, int b, int x, int y) {
        if (abs(a - x) == abs(b - y)) {
        return 1;
        }
        else {
        return 0;
        }
}
int main()
{
        int a, b, x, y;
        cin >> a;
        cin >> b;
        cin >> x;
        cin >> y;
        if (slon(a, b, x, y) == 1 || (ladia(a, b, x, y) == 1)) {
        cout << "YES";
        }
        else {
        cout << "NO";
        }
        return 0;
}

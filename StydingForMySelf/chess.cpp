
#include <iostream>

const int Ladya = 0;
const int Slon = 1;
const int Ferz = 2;

int vse(int figury, int x, int y, int x1, int y1){
    switch(figury){
        case Ladya : return ((x == x1) || (y1 == y1));
        case Slon : return (abs(x-x1) == abs(y-y1));
        case Ferz : return ((x == y) || (x1 == y1) || (abs(x-x1) == abs(y-y1)));
        default: return 0;
    }
}

int position(){
    
    std::cout << "You can move in :" << std::endl;
}

int main(){
    using std::cout;
    using std::cin;

    int x ,y ,y1 ,x1 ;
    std::cin >>x>>y>>x1>>y1;
    std::cout << (vse(Slon,x,y,x1,y1) ? "YES" : "NO");
    return 0;
}


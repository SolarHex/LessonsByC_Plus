
#include <iostream>
#include <cmath>

int leap_year(int);
int month_days(int, int);

int main(){
    int month, year;
    std::cout << "Choice your month and date" << std::endl;
    std::cin >> month >> year;
    std::cout << month_days(month, year);
    return 0;

}

int month_days(int month_number, int year){

    int month_days[12] = {31,28+leap_year(year),31,30,31,30,31,31,30,31,30,31};
    return month_days[month_number-1];
}

int leap_year(int year){
    return (year % 400 == 0 ) || (year % 4 == 0 && year % 100 != 0);
}

int check_double(int check){
    while (/* condition */)
    {
        /* code */
    }
    
}

//You need to check in double , input 2 month and 2 years to check how many days 
#include <iostream>

int is_leap_year(int);
int month_days(int,int);


int month_days(int month_number, int year)
{
    int month_days[12] = {31, 28+is_leap_year(year), 31,30,31,30,31,31,30,31,30,31};
    return month_days[month_number-1];
}

int is_leap_year(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 !=0);
}


int main()
{
    int month, year;
    std::cout << "What is your month?" << std::endl;
    std::cin >> month >> year;
    std::cout << month_days(month, year) << std::endl;

    return 0;
}

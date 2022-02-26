#include <iostream>

int CounterDay(int begging_year,int beggining_month, int beggining_day, int year, int last_month)
{
    int difference_in_year, leap_year, aint_leap_year, perhaps,e, result = 0;

    difference_in_year = year - begging_year;
    leap_year = difference_in_year / 4;
    aint_leap_year = difference_in_year - leap_year;
    perhaps = leap_year* 366 + aint_leap_year * 365;
    perhaps -= (year % 4) ? 1 : 0;  
    // +1 if it leap year

	// Counting month
	for (e = 1; e < beggining_month; e++) {
		// if it is leap
		if (e == 2) perhaps -= (year % 4) ? 28 : 29; 
			// else there 30 days
			else if (e == 4 || e == 6 || e == 9 || e == 11) perhaps -= 30;
				else // else 31 days
					perhaps -= 31;
	};
    if (beggining_month != 12 && difference_in_year == 1) return beggining_day + perhaps;
		else return perhaps - beggining_day;

	// if(last_month == n){
	// 	std::cout << "Your month last is (for counting): " << std::endl;
	// 	std::cin >> n;
	// 	int beggining_day *= n;
	// }
}

int main()
{	
	int x,y,z,a,b;
	std::cout << "Your beggining year: " << std::endl;
	std::cin >> x;

	std::cout << "Your month started in: " << std::endl;
	std::cin >> y;

	std::cout << "Your day started in: " << std::endl;
	std::cin >> z;

	std::cout << "Your last year: " << std::endl;
	std::cin >> a;

	std::cout << "Your month will ending in: " << std::endl;
	std::cin >> b;

	std::cout << CounterDay(x, y, z, a, b) << std::endl;

}
#include <iostream>
using namespace std;

int DaysCount(int yearBegin, int monthBegin, int dayBegin, int yearCurrent){
	int y, m, e, d, a, b, c, res = 0;
	a = yearCurrent - yearBegin;	// Разница в годах
	b = a / 4;						// Кол-во високосных
	c = a - b;						// Кол-во невысокосных
	d = b * 366 + c * 365;			// Предварительное кол-во дней до начала года
	d -= (yearCurrent % 4) ? 1 : 0;	// +1 день, если год високосный
	
	// Считаем месяцы
	for (e = 1; e < monthBegin; e++) {
		// Если февраль и високосный:
		if (e == 2) d -= (yearCurrent % 4) ? 28 : 29; 
			// Если по 30 дней
			else if (e == 4 || e == 6 || e == 9 || e == 11) d -= 30;
				else // Если по 31 день в месяце
					d -= 31;
	};
	/* Для корректировки, если расчет идет от последнего месяца года
	до задаваемого граничного года можно использовать примерно такое
	условие, дабы не прибавлять, а вычитать количество дней
	*/
	if (monthBegin != 12 && a == 1) return dayBegin + d;
		else return d - dayBegin;
}

int main()
{
	cout << DaysCount(2015, 12, 15, 2016) << endl;
}
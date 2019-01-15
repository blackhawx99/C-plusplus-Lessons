#include <iostream>
using namespace std;

int main()
{
	typedef int date;
	enum  Month
	{
		JANUARY = 1,
		FEBRUARY,
		MARCH,
		APRIL,
		MAY,
		JUNE,
		JULY,
		AUGUST,
		SEPTEMBER,
		OCTOBER,
		NOVEMBER,
		DECEMBER
	};

	Month currentMonth = APRIL;
	date currentDate =15;
	cout << "We are " << currentMonth << " months into the year and " << currentDate << " days into that month" << endl;

	int myInt1 = 5, myInt2;
	myInt2 = 10;
	cout << "Value stored in myInt1 is " << myInt1 << endl;
	cout << "Value stored in myInt2 is " << myInt2 << endl;

	float myFloat1 = 1.2f, myFloat2;
	myFloat2 = 9.9f;
	cout << "Value stored in myFloat1 is " << myFloat1 << endl;
	cout << "Value stored in myFloat2 is " << myFloat2 << endl;

	cin.get();
	return 0;
}

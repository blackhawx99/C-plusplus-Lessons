#include <iostream>
using namespace std;

int main()
{
	
	int num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator and num = " << ++num << endl;
	
	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operator and num = " << --num << endl;


	int width = 10;
	int height = 15;
	int areaOfRectangle = width * height;
	cout << "The area of a " << width << " by " << height << " rectangle is " << areaOfRectangle << endl;

	float fahrenheit =95.0f;
	float celsius = (fahrenheit - 32)* 0.5556;
	cout << fahrenheit << "°F is equal to " << celsius << "°C" << endl;

	const float kPi =3.14;
	float radius = 22.0f;
	float areaOfCircle =kPi*(radius*radius);
	cout << "The area of a circle with radius " << radius << " is " << areaOfCircle << endl;

	std::cin.get();
	return 0;
}

#include <iostream>
using namespace std;

int main()
{


int playerInput1;
int playerInput2;


cout << "Hello. Please enter the first number" << endl;
cin >> playerInput1;
cout << "Now the second" << endl;
cin >> playerInput2;

int sum2Num = (playerInput1 + playerInput2);
cout << "The Sum of your numbers is " << sum2Num << endl;

int mean2Num = (playerInput1*playerInput2)/2;
cout << "The Mean of your numbers is " << mean2Num << endl;

int playerInput3;
cout << "Please enter another number" << endl;
cin >> playerInput3;

int sum3Num = playerInput1 + playerInput2 + playerInput3;
int mean3Num = (playerInput1*playerInput2*playerInput3) / 3;
cout << "Your Sum is now " << sum3Num << "and your new Mean is " << mean3Num << endl;


string endString;
cin >> endString;
}

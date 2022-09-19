#include <iostream>
using namespace std;

int factorial(int input)
{
    if(input==1)
        return 1;
    return input*factorial(input-1);
}

int main()
{
	cout << "Enter a Number" << endl;
	int a;
	cin >> a;
    a = factorial (a);
    cout << "Factorial of the number is: "<< a;
}


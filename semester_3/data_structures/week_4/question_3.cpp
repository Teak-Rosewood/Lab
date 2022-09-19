#include <iostream>
using namespace std;

int fibo(int input)
{
    if(input == 1 || input == 0)
        return input;
    else 
        return fibo(input - 1) + fibo(input - 2);
}

int main()
{
    cout << "Enter the number of fibonacci numbers to print: " << endl;
    int a;
	cin >> a;
	cout << "The fibonacci series is: " << endl;
	for(int i = 0; i < a; i++)
	{
		cout << fibo(i) << " ";
	}
}


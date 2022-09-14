#include <iostream>
int factorial (int a)
{
	int sum = 1;
	for (int i = 1; i <= a; i++)
	{
		sum = sum * i;
	}
	return sum;
}
int main ()
{
	std::cout << "Enter the Numbers: ";
	for (int i = 0; i < 10; i ++)
	{
		int a;
		std:: cin >> a;
		std::cout << "factorial of " << a  << ": " << factorial(a) << std::endl;
	}
}

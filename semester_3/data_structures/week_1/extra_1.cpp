#include <iostream>

int main ()
{
	std::cout << "Enter the Number: ";
	int a;
	std::cin >> a;
	int flag = 1;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			flag = 0;
	}
	if (flag == 0)
		std::cout << "Number is not prime";
	else
		std::cout << "Number is prime"; 
}

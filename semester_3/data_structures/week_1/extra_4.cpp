#include <iostream>

int main ()
{
	int sum = 0;
	int input = 0;
	do 
	{
		std::cout << std::endl << "Enter a Number: ";
		std::cin >> input;
		sum = sum + input;
		
	}while (input != -1);
	std::cout << "Sum: " << sum;
}

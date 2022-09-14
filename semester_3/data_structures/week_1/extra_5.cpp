#include <iostream>

int main ()
{
	int m;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> m;
	int temp = 0;
	int k = 1;
	for (int i = 1; i <= m; i++)
	{
		temp = k;
		for(int j = i; temp > 0; temp--, j++)
		{
			std::cout << j << "\t";
			i = j;
		}
		std::cout << std::endl;
		k++;
	}
}

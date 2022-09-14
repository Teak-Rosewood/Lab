#include <iostream>
int printOdd(int m, int n)
{
	for(int i = m; i < n; i++)
	{
		if (i % 2 == 0)
			std::cout << i <<" ";
	}
}
int main ()
{
	int m, n;
	std::cout << "Enter m, n" << std::endl;
	std::cin >> m >> n;
	printOdd(m, n);
}

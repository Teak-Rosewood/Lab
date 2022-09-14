#include <iostream>
struct sparse
{
	int r;
	int c;
	int v;
};
int main ()
{
	int size, i , j;
	std::cout << "Enter the number of entries in the sparse matrix: ";
	std::cin >> size;
	sparse values[size];
	std::cout << "Enter the values of the sparse matrix" << std::endl;
	for(int a = 0; a < size; a++)
	{
		std::cin >> values[a].r >> values[a].c >> values[a].v;
	}
	int arr[values[0].r][values[0].c];
	for (int a = 0; a < values[0].r; a++)
	{
		for(int b = 0; b < values[0].c; b++)
		{
			arr[a][b] = 0;
		}
	}
	for(int a = 1; a < size; a++)
	{
		arr[values[a].r][values[a].c] = values[a].v;
	}
	std::cout << "the 2D matrix constructed is: " << std::endl;
	for (int a = 0; a < values[0].r; a++)
	{
		for(int b = 0; b < values[0].c; b++)
		{
			std::cout << arr[a][b] << " ";
		}
		std::cout << std::endl;
	}
	
	return 0;
}

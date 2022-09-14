#include <iostream>

void triangularUpper()
{
	int size, temp, k = 0;
	
	std::cout << "Enter the size of the Upper triangular matrix: ";
	std::cin >> size;
	
	// size of 1D matrix is n(n+1)/2
	
	int onedSize = size * (size + 1) / 2;
	int input[onedSize];
	
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j >= i)
			{
				std::cin >> input[k];
				++k;
			}			
		}
	}
	
	std::cout << "The 1D matrix constructed is:" << std::endl;
	
	for (int i = 0; i < onedSize; ++i)
	{
		std::cout << input[i] << " ";
	}
	k = 0;
	std::cout << std::endl << "The 2D matrix constructed is:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j >= i)
			{
				std::cout << input[k] << " ";
				++k;
			}
			else 
				std::cout << "0 ";
		}				
			std::cout << std::endl;
	}
	int row = 0, column = 0;
	while(row != -1)
	{
		std::cout << std::endl << "Enter a column and row of the 2D matrix and -1 -1 to exit: ";
		std::cin >> column >> row;
		if (row != -1)
		{
			if(column >= row)
			{
				int element = (size * row) + column - (row * (row + 1) / 2);
				std::cout << "The element is: " << input[element];
			}
			else 
				std::cout << "The element is: 0";
			
		}
	}
	
}


void triangularLower ()
{
	int size, temp, k = 0;
	
	std::cout << "Enter the size of the lower triangular matrix: ";
	std::cin >> size;
	
	// size of 1D matrix is n(n+1)/2
	
	int onedSize = size * (size + 1) / 2;
	int input[onedSize];
	
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j <= i)
			{
				std::cin >> input[k];
				++k;
			}			
		}
	}
	k = 0;
	std::cout << "The 1D matrix constructed is:" << std::endl;
	
	for (int i = 0; i < onedSize; ++i)
	{
		std::cout << input[i] << " ";
	}

	std::cout << std::endl << "The 2D matrix constructed is:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j <= i)
			{
				std::cout << input[k] << " ";
				++k;
			}
			else 
				std::cout << "0 ";
			
		}
		std::cout << std::endl;
	}
	int row = 0, column = 0;
	while(row != -1)
	{
		std::cout << std::endl << "Enter column and row of the 2D matrix and -1 -1 to exit: ";
		std::cin >> column >> row;
		if (row != -1)
		{	
			if(row <= column)
			{
				int element = ((row * (row + 1) / 2) + column);
				std::cout << "The element is: " << input[element];
			}
			else
				std::cout << "The element is: 0";
			
		}
	}

}

void diagonal ()
{
	int size, temp, k = 0;
	
	std::cout << "Enter the size of the diagonal matrix: ";
	std::cin >> size;
	
	// size of 1D matrix is n
	
	int onedSize = size;
	int input[onedSize];
	
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j == i)
			{
				std::cin >> input[k];
				++k;
			}			
		}
	}
	
	std::cout << "The 1D matrix constructed is:" << std::endl;
	
	for (int i = 0; i < onedSize; ++i)
	{
		std::cout << input[i] << " ";
	}

	std::cout << std::endl << "The 2D matrix constructed is:" << std::endl;
	k = 0;
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j == i)
			{
				std::cout << input[k] << " ";
				++k;
			}
			else 
				std::cout << "0 ";
		}
		std::cout << std::endl;
	}
	
	int row = 0, column;
	while(row != -1)
	{
		std::cout << std::endl << "Enter a row and column of the 2D matrix and -1,-1 to exit: ";
		std::cin >> row >> column;
		if (row != -1)
		{
			if(row == column)
			{
				int element = row;
				std::cout << "The element is: " << input[row];	
			}
			else
				std::cout << "The element is: 0";
		}	
	}
}

void triDiagonal ()
{
	int size, temp, k = 0;
	
	std::cout << "Enter the size of the tri-diagonal matrix: ";
	std::cin >> size;
	
	// size of 1D matrix is 3n - 2
		
	int onedSize = 3 * size - 2;
	
	int input[onedSize];
	
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j == i)
			{
				std::cin >> input[k];
				++k;
			}
			else if (j == i+1)
			{
				std::cin >> input[k];
				++k;
			}
			else if (j+1 == i)
			{
				std::cin >> input[k];
				++k;
			}			
		}
	}
	
	std::cout << "The 1D matrix constructed is:" << std::endl;
	
	for (int i = 0; i < onedSize; ++i)
	{
		std::cout << input[i] << " ";
	}

	std::cout << std::endl << "The 2D matrix constructed is:" << std::endl;
	k = 0;
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if (j == i)
			{
				std::cout << input[k] << " ";
				++k;
			}
			else if (j == i+1)
			{
				std::cout << input[k] << " ";
				++k;
			}
			else if (j+1 == i)
			{
				std::cout << input[k] << " ";
				++k;
			}	
			else
				std::cout << "0 ";
			
		}
		std::cout << std::endl;
	}
	
	int row = 0, column;
	while(row != -1)
	{
		std::cout << std::endl << "Enter a row and column of the 2D matrix and -1,-1 to exit: ";
		int row, column;
		std::cin >> column >> row;
		if (row != -1)
		{
			int element = (2 * row + column);
			std::cout << "The element is: " << input[element];
		}
	}
}

void rowMajor ()
{
	int size, temp, k = 0;
	
	std::cout << "Enter the size of the row-major matrix: ";
	std::cin >> size;
	
	// size of 1D matrix is n
	
	int onedSize = size * size;
	int input[onedSize];
	
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			
				std::cin >> input[k];
				++k;
						
		}
	}
	
	std::cout << "The 1D matrix constructed is:" << std::endl;
	
	for (int i = 0; i < onedSize; ++i)
	{
		std::cout << input[i] << " ";
	}

	std::cout << std::endl << "The 2D matrix constructed is:" << std::endl;
	k = 0;
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			std::cout << input[k] << " ";
			++k;
		}
		std::cout << std::endl;
	}
	
	int row = 0, column;
	while(row != -1)
	{
		std::cout << std::endl << "Enter a row and column of the 2D matrix and -1,-1 to exit: ";
		std::cin >> row >> column;
		if (row != -1)
		{
			int element = (row * size) + column;
			std::cout << "The element is: " << input[element];	
		}	
	}

}

void columnMajor ()
{
	int size, temp, k = 0;
	
	std::cout << "Enter the size of the column-major matrix: ";
	std::cin >> size;
	
	// size of 1D matrix is n
	
	int onedSize = size * size;
	int input[onedSize];
	
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			
				std::cin >> input[k];
				++k;
						
		}
	}
	
	std::cout << "The 1D matrix constructed is:" << std::endl;
	
	for (int i = 0; i < onedSize; ++i)
	{
		std::cout << input[i] << " ";
	}

	std::cout << std::endl << "The 2D matrix constructed is:" << std::endl;
	k = 0;
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			std::cout << input[k] << " ";
			++k;
		}
		std::cout << std::endl;
	}
	
	int row = 0, column;
	while(row != -1)
	{
		std::cout << std::endl << "Enter a row and column of the 2D matrix and -1,-1 to exit: ";
		std::cin >> row >> column;
		if (row != -1)
		{
			int element = (column * size) + row;
			std::cout << "The element is: " << input[element];	
		}	
	}

}


int main ()
{
	int flag = 8;
	while (flag != 0)
	{
		std::cout << "Enter the type of 2D matrix: " << std::endl; 
		std::cout << "1 - Upper triangular matrix" << std::endl;
		std::cout << "2 - Lower trangular matrix" << std::endl;
		std::cout << "3 - Diagonal matrix" << std::endl;
		std::cout << "4 - Tri-diagonal matrix" << std::endl;
		std::cout << "5 - Row-Major" << std::endl;
		std::cout << "6 - Column-Major" << std::endl;
		std::cout << "Press 0 to exit" << std::endl; 
	
		std::cin >> flag;
		
		switch (flag)
		{
			case 1: 
				triangularUpper();
				break;
			case 2: 
				triangularLower();
				break;
			case 3: 
				diagonal();
				break;
			case 4: 
				triDiagonal();
				break;
			case 5: 
				rowMajor();
				break;
			case 6:
				columnMajor();
				break;
		}
	}
	return 0;
}

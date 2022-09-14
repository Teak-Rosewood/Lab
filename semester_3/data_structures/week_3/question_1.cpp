#include <iostream>
using namespace std;

struct poly
{
	int c;
	int e;
};
int main ()
{
	int size1, size2, degree = 0, k = 0;
	
	cout << "Enter the degree of first polynomial: ";
	cin >> size1;
	size1++;
	
	poly p1[size1];
	
	cout << "Enter the first polynomial in the form of coefficient and exponent: " << endl;
	for (int i = 0 ; i < size1; i++)
	{ 
		cin >> p1[i].c >> p1[i].e;
		if (p1[i].e > degree)
			degree = p1[i].e;
	}
	
	cout << "Entered polynomial is: " << endl;
	
	for (int i = 0 ; i < size1; i++)
	{
		if (i == size1 - 1)
			cout << p1[i].c;
		else 
			cout << p1[i].c << "x^" << p1[i].e << " + " ;
	}
	
	
	cout << endl << "Enter the degree of second polynomial: ";
	cin >> size2;
	size2++;
	poly p2[size2];
	
	cout << "Enter the second polynomial in the form of coefficient and exponent: " << endl;
	for (int i = 0 ; i < size2; i++)
	{
		cin >> p2[i].c >> p2[i].e;
		if (p2[i].e > degree)
			degree = p1[i].e;
	}
	
	cout << "Entered polynomial is: " << endl;
	
	for (int i = 0 ; i < size2; i++)
	{
		if (i == size2 - 1)
			cout << p2[i].c;
		else 
			cout << p2[i].c << "x^" << p2[i].e << " + " ;
	}
	degree++;
	poly p3[degree];
	
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (p1[i].e == p2[j].e)
			{
				p3[k].e = p1[i].e;
				p3[k].c = p1[i].c + p2[j].c;
				++k;
			}
		}
	}
	
	cout << endl << "When added the resulting polynomial is:" << endl;
	for (int i = 0 ; i < degree; i++)
	{
		if (i == degree - 1)
			cout << p3[i].c;
		else 
			cout << p3[i].c << "x^" << p3[i].e << " + " ;
	}
	
	
}

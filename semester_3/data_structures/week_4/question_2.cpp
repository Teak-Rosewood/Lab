#include <iostream>
using namespace std;
int GCD(int num1,int num2)
{
    if(num2>num1)
        return GCD(num2,num1);
    if(num2==0)
        return num1;
    else
        return GCD(num2,num1%num2);
}

int main()
{
    cout << "Enter two numbers " << endl;
	int a, b;
	cin >> a >> b;
    a = GCD(a, b);
    cout << "The GDC of the numbers in: " << a;
}


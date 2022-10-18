#include <iostream>

using namespace std;

struct stack 
{
	int count = 0;
	char *top;
	int size;
	char arr[100];
	stack (int a)
	{
		size = a;
	}
	
	bool isFull ()
	{
		if(count == size - 1)
			return true;
		else 
			return false;
	}	
	
	bool isEmpty ()
	{
		if (count == 0)
			return true;
		else 
			return false;	
	}	
	
	void push (char a)
	{
		if (isFull())
			cout << "Stack is Full" << endl;
		else 
		{
			arr[count] = a;
			count++;
			top++;
			cout << "Pushed " << a << endl;
		}
	}
	
	char pop ()
	{
		if(isEmpty())
			cout << "Stack is Empty" << endl;
		else 
		{
			cout << "popped " << arr[count-1] << endl;
			count--;
			top--;	
		}
	}
};

int main ()
{
	stack a (20);
	int size;
	char b;
	cout << "Enter the number of values" << endl;
	cin >> size;
	for(int i = 0; i < size; i++)
	{
		cin >> b;
		a.push(b);
	}
	cout << "Enter the number of values to pop" << endl;
	cin >> size;
	for(int i = 0; i < size; i++)
		b = a.pop();
	
	return 0;
}

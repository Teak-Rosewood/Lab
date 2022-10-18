#include <algorithm> 
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

struct stack
{
	int top = 1;
	int values[100];
	bool isFull()
	{
		if (top == 100)
			return true;
		return false;
	}
	
	bool isEmpty()
	{
		if (top == 1)
			return true;
		return false;
	}
	
	char peek()
	{
		return values[top];
	}
	
	void push (int input)
	{
		if(!isFull())
		{
			top++;
			values[top] = input;
		}
		else 
			cout << "stack is full" <<endl;
	}
	
	void pop ()
	{
		if(!isEmpty())
			top--;
		else 
			cout << "stack is empty" << endl;
	}
};

void reverse(char *exp)
{
	int size = strlen(exp);
	int j = size, i = 0;
	char temp[size];

	temp[j--] = '\0';
	while (exp[i] != '\0')
	{
		temp[j] = exp[i];
		j--;
		i++;
	}
	strcpy(exp, temp);
}

int main ()
{
	char exp[100];
	int format, temp1, temp2;
	stack s;
	string final;
	cout << "Enter an expression: " << endl;
	
	cin >> exp;
	cout << "1 - Postfix Form" << endl;
	cout << "2 - Prefix Form" << endl;
	
	cin >> format;
	
	if (format == 1)
	{
		for(int i = 0; exp[i] != '\0'; i++)
		{
			if(exp[i] >= '0' && exp[i] <= '9')
			{
				s.push(int(exp[i] - '0'));
			}	
			else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*')
			{
				temp1 = s.peek();
				s.pop();
				temp2 = s.peek();
				s.pop();
				switch (exp[i])
				{
					case '+':
						s.push(temp1+temp2);
						break;
					case '-':
						s.push(temp1-temp2);
						break;
					case '/':
						s.push(temp1/temp2);  
						break;
					case '*':
						s.push(temp1*temp2); 
						break;
				}
				temp1 = s.peek();
			}
		}
		temp1 = s.peek();
		cout << temp1 << endl;
		cout << "The solution to the given expression is: " << temp1 << endl;
	}

	if (format == 2)
	{
		reverse(exp);
		for(int i = 0; exp[i] != '\0'; i++)
		{
			if(exp[i] >= '0' && exp[i] <= '9')
			{
				s.push(int(exp[i] - '0'));
			}	
			else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*')
			{
				temp1 = s.peek();
				s.pop();
				temp2 = s.peek();
				s.pop();
				switch (exp[i])
				{
					case '+':
						s.push(temp1+temp2);
						break;
					case '-':
						s.push(temp1-temp2);
						break;
					case '/':
						s.push(temp1/temp2);  
						break;
					case '*':
						s.push(temp1*temp2); 
						break;
				}
				temp1 = s.peek();
				cout << temp1 << endl;
			}
		}
		cout << "The solution to the given expression is: " << temp1 << endl;
	}
}

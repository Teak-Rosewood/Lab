#include <algorithm>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct stack
{
	int top = -1;
	char values[100];
	bool isFull()
	{
		if (top == 99)
			return true;
		return false;
	}

	bool isEmpty()
	{
		if (top == -1)
			return true;
		return false;
	}

	char peek()
	{
		return values[top];
	}

	void push(char input)
	{
		if (!isFull())
		{
			top++;
			values[top] = input;
		}
		else
			cout << "stack is full" << endl;
	}

	void pop()
	{
		if (!isEmpty())
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

void brackets(char *exp)
{
	int i = 0;
	while (exp[i] != '\0')
	{
		if (exp[i] == '(')
			exp[i] = ')';
		else if (exp[i] == ')')
			exp[i] = '(';
		i++;
	}
}

int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

int main()
{
	char exp[100];
	int format;
	stack s;
	string final = "";
	cout << "Enter an expression: " << endl;

	cin >> exp;
	cout << "1 - Postfix Form" << endl;
	cout << "2 - Prefix Form" << endl;

	cin >> format;

	if (format == 1)
	{
		for (int i = 0; exp[i] != '\0'; i++)
		{
			if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9'))
			{
				final = final + exp[i];
			}

			else if (exp[i] == '(')
			{

				s.push('(');
			}
			else if (exp[i] == ')')
			{
				while (s.peek() != '(')
				{
					final = final + s.peek();
					s.pop();
				}
				s.pop();
			}
			else
			{
				while ((!s.isEmpty() && prec(exp[i]) <= prec(s.peek())))
				{
					final = final + s.peek();
					s.pop();
				}
				s.push(exp[i]);
			}
		}

		while (!s.isEmpty())
		{
			final = final + s.peek();
			s.pop();
		}

		cout << "Postfix form of the expression is: " << final << endl;
	}

	if (format == 2)
	{
		reverse(exp);
		brackets(exp);
		for (int i = 0; exp[i] != '\0'; i++)
		{
			if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9'))
			{
				final = final + exp[i];
			}

			else if (exp[i] == '(')
			{

				s.push('(');
			}
			else if (exp[i] == ')')
			{
				while (s.peek() != '(')
				{
					final = final + s.peek();
					s.pop();
				}
				s.pop();
			}
			else
			{
				while ((!s.isEmpty() && prec(exp[i]) <= prec(s.peek())))
				{
					final = final + s.peek();
					s.pop();
				}
				s.push(exp[i]);
			}
		}

		while (!s.isEmpty())
		{
			final = final + s.peek();
			s.pop();
		}
		reverse(final.begin(), final.end());
		cout << "Prefix form of the expression is: " << final << endl;
	}
}

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Queue 
{
	int* arr;
	int front, size, rear;
	
	Queue (int a)
	{
		front = -1;
		rear = -1;
		size = a;
		arr = new int[size];
	}
	
	bool isFull()
	{
		if((front == 0 && rear == size - 1) || (front == rear + 1))
		{
			cout << "Overfolow Detected" << endl;
			return true;
		}
		return false;
	}
	
	bool isEmpty()
	{
		
		if(front == -1)
		{
			cout << "Queue is Empty" << endl;
			return true;
		}
		return false;
		
	}
	
	void enQueue (int a)
	{
		if(!isFull())
		{
			if (front == -1)
				front = 0;
			rear = (rear + 1) % size;
			arr[rear] = a;
			cout << "enQueued " << a << endl;	
		}	
	}
	
	void display ()
	{
		int i;
		for (i = front;  i != rear; i = (i + 1) % size)
		{
			cout << arr[i] << " ";
		}
		cout << arr[i];
		cout << endl;
	}
	
	void deQueue ()
	{
		if(!isEmpty())
		{
			cout << "deQueued " << arr[front] << endl;
			if(front == rear)
			{
				front = -1;
				rear = -1;
			}
			else  
				front = (front + 1) % size;
		}	
	}
};

int main ()
{
	cout << "Enter the size of the Circular Queue" << endl;
	int a, b = 1, c;
	cin >> a;
	Queue q(a);
	while (b != 4)
	{
		cout << "Enter 1 - enQueue, 2 - deQueue, 3 - Display Queue, 4 - Exit" << endl;
		cin >> b;
		switch (b)
		{
			case 1:
				cout << "Enter the number to enqueue" << endl;
				cin >> c;
				q.enQueue(c);
				break;
			case 2:
				q.deQueue();
				break;
			case 4: 
				cout << "Exiting" << endl;;
				break;
			case 3:
				q.display();
				break;
			default:
				cout << "Invalid Input" << endl;
		}
	}
}

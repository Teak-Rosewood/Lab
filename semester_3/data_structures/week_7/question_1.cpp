#include <iostream>
using namespace std;

struct Queue 
{
	int* arr;
	int front, size, rear;
	
	Queue (int a)
	{
		front = 0;
		rear = 0;
		size = a;
		arr = new int[size];
	}
	bool isFull()
	{
		if(front == size)
		{
			cout << "Overflow Detected" << endl;
			return true;
		}
		return false;
	}
	
	bool isEmpty()
	{
		cout << "Queue is Empty" << endl;
		if(front == rear)
			return true;
		return false;
	}
	
	void enQueue (int a)
	{
		if(!isFull())
		{
			cout << "Queued " << a << endl;
			arr[front] = a;
			front++;
		}
	}
	
	void display ()
	{
		for (int i = rear;  i < front; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	
	void deQueue ()
	{
		if(!isEmpty())
		{
			cout << "Dequeued " << arr[rear] << endl;
			rear++;	
		}	
	}
};

int main ()
{
	cout << "Enter the size of the Queue" << endl;
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

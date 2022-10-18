#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct node *next;
}

void push (struct Node** head, int node_data)
{
	struct Node* newNode = new Node;
	
	newNode->data = node_data;
	newNode->next = (*head);
	(*head) = newNode;
}

void insertAfter(struct Node** head , int prev_value, int node_data)
{
	struct Node *newNode = new Node;
	struct Node *prev = *head;
	newNode->data = node_data;
	while(prev->data != prev_value)
	{
		prev = prev->next;
	}
	newNode->next = prev->next;
	prec->next = newNode;
}

void insertBefore(struct Node** head , int prec_value, int node_data)
{
	struct Node *newNode = new Node;
	struct Node *prec = *head;
	newNode->data = node_data;
	while(prec->data != prec_value)
	{
		prec = prec->next;
	}
	newNode->next = prec->next;
	prec->next = newNode;
}
void append(struct Node** head, int node_data)
{
	struct Node* newNode = new Node;
	struct Node *last = *head;
	newNode->data = node_data;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNode;
	return;
}

void displayList (struct Node *node)
{
	while(node != NULL)
	{
		cout << node->data << "-->";
		node = node->next;
	}
	if(node == NULL)
	{
		cout << "NULL VALUE";
	}
}
int main ()
{
	int flag = -1;
	while(flag != 0)
	{
		cout << "Following are the options: " << endl;
		cout << "1 - Add number to linked list" << endl;
		cout << "2 - Add number to the end of the linked list" << endl;
		cout << "3 - Add number to the beginning of the linked list" << endl;
		cout << "4 - Add number between a node in the linked list" << endl;
		cout << "5 - Delete a node from the linked list" << endl;
		cout << "6 - Display the linked list"
		cout << "Enter 0 to exit the program" << endl;
		cin >> flag;
		switch (flag):
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5: 
				break;
			case 6:
				break;
			case 0:
				cout << "Exiting the program" << endl;
	}
	
	return 0;
}

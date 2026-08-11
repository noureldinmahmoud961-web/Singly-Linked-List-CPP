#include <iostream>
using namespace std;


struct node {
	int value = 0;
	node * next;
};
node* head = NULL;

void insertNode(int data) {
	node* newNode;
	node  * last;
	newNode = new node;
	newNode->value = data;

	if (head == NULL)
	{
		head = newNode;
		newNode->next = NULL;

	}
	else
	{
		last = head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
		newNode->next = NULL;
	}

}

void display() {
	node* currentNode;

	if (head == NULL)
	{
		cout << "linked list is empty" << endl;
	}
	else
	{
		currentNode = head;
		while (currentNode != NULL)
		{
			cout << currentNode-> value<< endl;
			currentNode = currentNode->next;

		}
	}
}

int main() {
	cout << "Linked List\n";
	insertNode(20);
	insertNode(5);
	insertNode(10);
	insertNode(12);
	display();
	return 0;
}

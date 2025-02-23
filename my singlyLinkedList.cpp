#include <iostream>




struct Node
{
	int data;
	Node* next;
};


void insertEnd(Node** head, int newData)
{
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = nullptr;
	if (*head == nullptr)
	{
		*head = newNode;
	}

	else
	{
		Node* last = *head;
		while (last->next != nullptr)
		{
			last = last->next;
		}
		last->next = newNode;
	}
}


void deletebyValue(Node** head, int value)
{
	if (*head == nullptr)
	{
		std::cout << "This list is empty and nothing to delete \n";
	}

	if ((*head)->data == value)
	{
		Node* temp = *head;
		*head = (*head)->next;
		delete temp;
		return;
	}

}


void displayList(Node* node)
{
	while (node != nullptr)
	{
		std::cout << node->data << " ";
		node = node->next;
	}

	std::cout << std::endl;
}




int main()
{
	Node* head = nullptr;
	insertEnd(&head, 1);
	insertEnd(&head, 2);
	insertEnd(&head, 3);

	displayList(head);

	return 0;
}

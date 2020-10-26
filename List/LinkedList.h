#pragma once
#include "Node.h"
#include <iostream>

using namespace std;

template<typename T>
class LinkedList
{
private:
	Node<T>* head;
public:
	LinkedList()
	{
		head = nullptr;
	}

	LinkedList(Node<T>* head)
	{
		this->head = head;
	}

	Node<T>* getHead()
	{
		return head;
	}

	void Print()
	{
		Node<T>* current = head;
		while (current != nullptr)
		{
			cout << current->value;
			if (current->next != nullptr)
			{
				cout << ", ";
			}
			current = current->next;
		}
	}

	void add(T new_value)
	{
		if (head == nullptr)
		{
			head = new Node<T>(new_value);
		}
		else
		{
			Node<T>* current = this->head;
			while (current->next != nullptr)
			{
				current = current->next;
			}
			current->next = new Node<T>(new_value);
		}
	}
};


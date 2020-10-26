#pragma once
template<typename T>
class Node
{
public:
	T value;
	Node<T>* next;
	Node()
	{
		this->value = T();
		this->next = nullptr;
	}
	Node(T value)
	{
		this->value = value;
		this->next = nullptr;
	}
	Node(T value, Node* next)
	{
		this->value = value;
		this->next = next;
	}
};


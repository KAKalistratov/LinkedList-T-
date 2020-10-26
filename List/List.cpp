#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() 
{
	Node<int> a3(3);
	Node<int> a2(2, &a3);
	Node<int> a1(1, &a2);
	LinkedList<int> a(&a1);
	a.add(4);
	a.Print();
	
	return 0;
}
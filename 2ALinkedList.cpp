/*

	Desarrolla un algoritmo que teniendo dos LinkedList<int> genere una nueva 
	LinkedList<int> con el merge de las dos LinkedList<int>

	LinkedList1: Head → 10 → 13 → 8 → 7 → NULL

	LinkedList2: Head → 5 → 11 → 2 → NULL

	LinkedListSale: Head → 10 → 5 → 13 → 11 → 8 → 2 → 7 → NULL

*/
#include <iostream>
#include "LinkedList.h"
using namespace std;
LinkedList mergeList(LinkedList a, LinkedList b){
	Node *ptr1, *ptr2, *ptr3;
	ptr1 = ptr2 = ptr3 = NULL;
	LinkedList c;
	c.head = a.head;
	
	ptr1 = a.head->next; // Apunta al segundo elemento de la primera lista

	c.head->next = b.head;
	ptr2 = b.head->next; // Apunta al segundo elemento de la segunda lista
	ptr3 = c.head->next; // Apunta al segundo elemento de la nueva lista

	c.print();
	cout << endl;
	cout << "ptr1" << endl;
	cout << ptr1->data << endl;
	cout << "ptr2" << endl;
	cout << ptr2->data << endl;
	cout << "ptr3"<< endl;
	cout << ptr3->data << endl;
	while(ptr1 != NULL && ptr2 != NULL){ // Mientras que no se acaben las dos listas
		if(ptr1 != NULL){
			ptr3->next = ptr1;
			ptr1 = ptr1->next;
			ptr3 = ptr3->next;
		}
		if(ptr2 != NULL){
			ptr3->next = ptr2;
			ptr2 = ptr2->next;
		}
		ptr3 = ptr3->next;
	}
	ptr3->next = NULL;
	// c.print();
	return c;
}
int main(){
	LinkedList a;
	LinkedList b;
	a.push(10);
	a.push(13);
	a.push(8);
	a.push(7);
	b.push(5);
	b.push(11);
	b.push(2);
	a.print();
	b.print();
	LinkedList merged = mergeList(a,b);
	merged.print();
	return 0;
}
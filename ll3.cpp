/*
	En esta implementacion push recibe un dato del tipo de dato del struct
	en vez de un nodo. El otro es mas generico en el sentido que puede recibir
	cualquier tipo de dato (porque lo que recibe es el nodo), pero el usuario de la
	estructura no deberia de preocuparse por la encapsulacion.
*/
#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
class LinkedList{
public:

	// Lista vacia
	LinkedList(){this->head = NULL;}

	// Podria implementar un deletenode function aqui
	// void deleteNode();

	//Agrega un elemento al final de la lista
	void push(int n){
		Node * newElement = new Node;
		newElement->data = n;
		newElement->next = NULL;

		Node *last = this->getLast();
		if(last != NULL)
			last->next = newElement;
		else
			head = newElement;
	}

	// Agrega un elemento al inicio de la lista
	void unshift(int n){
		Node *newElement = new Node;
		newElement->data = n;
		newElement->next = head;
		head = newElement;
	}

	Node* getNode(int n){
		Node *ptr = head;
		while(ptr!=NULL){
			if(ptr->data == n)
				return ptr;
			ptr = ptr->next;
		}
		return NULL;
	}

	bool isEmpty(){	return (this->head == NULL);}

	int length(){
		if(this->isEmpty())
			return 0;
		Node *iterator = this->head;
		int length = 1;
		while(iterator->next != NULL){
			iterator = iterator->next;
			length++;
		}
		return length;
	}
	Node* getLast(){
		if(this->isEmpty())
			return head;
		Node * iterator = this->head;
		while(iterator->next!=NULL)
			iterator = iterator->next;
		return iterator;
	}
	void print(){
		Node *ptr = this->head;
		while(ptr!=NULL){
			cout << ptr->data << " -> " ;
			if(ptr->next==NULL)
				cout << "=|";

			ptr = ptr->next;
		}
		cout << endl;
	}
	Node * getHead(){return head;};
private:
	Node *head;

};
int main(){
	LinkedList list;
	cout << list.isEmpty() << endl;
	list.push(12);
	list.push(11);
	list.push(10);
	list.push(5);
	cout << (list.getHead())->data << endl;
	list.print();
	list.unshift(13);
	list.print();
	cout << list.length() << endl;
	cout << list.isEmpty() << endl;
	return 0;
}
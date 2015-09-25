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


	//Agrega un elemento al final. de la lista
	void push(Node* n){
		/*
			Aqui TIENES que pasarlo por referencia (la direccion/un apuntador)
			en vez de un parametro por valor porque estas asignando la direccion, pero el Nodo n (que es una copia que se crea del nodo que pasaste en el main) se destruye cuando sale de la funcion push... entonces ya no estarias apuntando a nada.
		*/
		n->next = NULL;
		Node *last = this->getLast();
		if(last != NULL)
			last->next = n;
		else
			head = n;
	}


	// Agrega un elemento al inicio de la lista
	void unshift();


	// void delete();
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


	void show(){
		Node *ptr = this->head;
		cout << "The List is ";
		while(ptr!=NULL){
			cout << ptr->data << " -> ";
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
	Node* a = new Node;
	a->data = 12;
	cout << list.isEmpty() << endl;
	list.push(a);
	cout << (list.getHead())->data << endl;
	list.show();
	cout << list.length() << endl;
	cout << list.isEmpty() << endl;
	return 0;
}
#include <iostream>
#include <conio.h>
#include <process.h>
using namespace std;
// Creating a NODE Structure
struct node
{
	int data;  // data
	struct node *next;  // link to next node and previous node
};

// Creating a class LIST
class list{
	struct node *start;
	public:
		void create(); // to create a list
		void show();   // show
		void merge(list,list);  // Merge two list's
};

// Main function
int main(){
	cout << endl << endl;
	list l1,l2,l3;
	cout<<"Enter the First List in ascending order.";
	l1.create(); // to create a first list
	cout<<"Enter the Second List in <ascendin></ascendin>g order";
	l2.create(); // to create a second list
	cout<<"The first list is";
	l1.show();
	cout<<"The second list is";
	l2.show();
	l3.merge(l1,l2);
	l3.show();
	getch();
	return (0);
}

//    Functions

// Creating a new node
void list::create(){
	struct node *nxt_node, *pre_node;
	int value, no, i;
	start = nxt_node = pre_node = NULL;
	cout<<"How many nodes : ";
	cin>>no;
	cout<<"Enter "<< no <<" Elements: ";
	for(i = 1; i <= no;i++){
		cin>>value;
		nxt_node = new node;
		nxt_node->data = value;
		nxt_node->next = NULL;
		if(start == NULL)
			start = nxt_node;
		else
			pre_node->next = nxt_node;
		pre_node = nxt_node;
	}
	cout<<"The list is created!";
}
	
// Displaying LIST
void list::show(){
	struct node *ptr = start;
	cout << "The List is";
	while(ptr!=NULL){
		cout << ptr->data << " -> ";
		ptr = ptr->next;
	}
	cout << endl;
}

void list::merge(list l1,list l2){
	struct node *nxt_node,*pre_node,*pptr,*qptr;
	int dat;
	pptr = l1.start;
	qptr = l2.start;
	start = nxt_node = pre_node = NULL;
	while(pptr != NULL && qptr!=NULL){
		if(pptr->data <= qptr->data){
			dat = pptr->data;
			pptr = pptr->next;
		}
		else{
			dat = qptr->data;
			qptr = qptr->next;
		}
		nxt_node = new node;
		nxt_node->data = dat;
		nxt_node->next = NULL;
		if(start == NULL)
			start = nxt_node;
		else
			pre_node->next = nxt_node;
		pre_node = nxt_node;
	}
	if(pptr==NULL){
		while(qptr!=NULL){
			nxt_node = new node;
			nxt_node->data = qptr->data;
			nxt_node->next = NULL;
			if(start == NULL)
				start = nxt_node;
			else
				pre_node->next = nxt_node;
			pre_node = nxt_node;
			qptr = qptr->next;
		}
	}
	else if(qptr==NULL){
		while(pptr!=NULL){
			nxt_node = new node;
			nxt_node->data=pptr->data;
			nxt_node->next=NULL;
			if(start == NULL)
				start = nxt_node;
			else
				pre_node->next=nxt_node;
			pre_node = nxt_node;
			pptr = pptr->next;
		}
	}
	cout<<"The lists are merged.";
	return;
}
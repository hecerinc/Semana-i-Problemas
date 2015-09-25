/* 
Array of integers size n
Given an integer x which of the integer set two elements the sum of them makes the element x
Which two numbers summed give x
If no two numbers sum x, 

Only positive numbers (no zero)
Return 1 pair of a b (the first one that you find)
You can just give the index of the array

Marcel:
Given 2 linked lists, find out if they merge into one (if they have a common node)
LL A and the LL B are different size

A -> B -> C -> D -> E -> Z
    W -> X -> Y -> E

Return "Node E" is where they converge


Axel: 
Array of chars
string will consist of several words seperated by spaces
Reverse the string and also reverse the words

SI: asdf qwerty
SO: ytrewq fdsa


#3:
Given a linked list, check if it has a loop 
*/
// hola@iterador.com
// Programming Pearls
// Corman's Algorithms
// Tortoise and the Heir alogirthm

bool isLoop(LinkedList myList){
	Node *pPointer = myList.pHead;
	std::map<addr, int> map;
	while(pPointer != NULL && map[pPointer]==null){
		map[pPointer] = pointer->iValue;
		pPointer = pPointer->next;
	}
	return pPointer == NULL;
}
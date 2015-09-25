/*
	
	Escribe un operacion de comparacion (operator == ) de la BST en donde diga si dos
	BST's tienen el mismo contenido y forma.
	
	Bajo demanda:
		- La informacion del BST son enteros
		- Pueden estar vacia o sumamente poblada
		- El inicio de la BST es root
*/

#include <iostream>
using namespaces std;
bool compare(node a, node b){ //root nodes de los arboles
	if(a == NULL && b == NULL)
		return true;
	if(a == NULL || b == NULL)
		return false;
	// Check values in the level
	if(a->data != b->data)
		return false;

	return compare(a->left, b->left) && compare(a->right, b->right);

}
// int height(Node<T> r){
// 	if(r== NULL) return 0;
// 	int left = height(r->left);
// 	lista.push(left);
// 	int right = height(r->right);
// 	lista.push(right);
// 	int hmine = abs(left-right);
// 	lista.push(hmine);
// 	return hmine;
// }
// int main(){
// 	return 0;
// }
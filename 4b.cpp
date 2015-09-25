/*
	Dado un arreglo ordenado de strings en forma ascendente, al cual se le insertaron elementos vacíos. Escribe el código para encontrar un elemento

	Ejemplo{"a","","","","base","","carro","","","","","mio","tuyo","","","yo"}

	Si quisiéramos encontrar el elemento "tuyo" regresaría 12

*/
#include <iostream>
#include <string>
using namespace std;
int binaryS(int arr[], int key, int low, int high){ // n = length
	// Validar si n <= 2
	// if()
	if(high < low)
		return -1;
	int half = (low+high)/2;
	if(arr[half]==key)
		return half;
	//Find min
	if(key > arr[half])
		return binaryS(arr, key, half+1, high);
	else
		return binaryS(arr, key, low, half-1);
	// int half;
	return -1;
}
int findSting(string str){
	
}
int main(){
	return 0;
}
/*
	Escribe un programa que dada una matriz cuadrada de nxn numeros aleatorios
	genere una nueva matriz con k giros clockwise.

	Condiciones:
		- n>=1
		- k es cualquier entero
		- La matriz es de enteros
		- Si se puede utilizar memoria adicional

	Este algoritmo usa una nueva matriz. Efectivo y simple, pero ocupa memoria.
	O(n^2)
*/
#include <iostream>
using namespace std;
void printMatrix(int mat[10][10], int n){
	//Print matrix
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

}
void rotateMatrix(int mat[10][10], int n, int k){// matriz, n = rows = columns, giros
	int giros = k>=4?k%4:k;
	if(!giros){
		printMatrix(mat, n);
		return;
	}

	bool desc, left;
	left = desc = false;
	if(giros == 3 || giros == 1)
		left = true;
	if(giros >= 2)
		desc = true;

	int newMat[10][10];
	for (int i = 0; i < n; i++){
		int newPos = n-i-1;
		for (int j = 0; j < n; j++){
			if(left && !desc) //left ascending
				newMat[j][newPos] = mat[i][j];
			else if(!left && desc) //right descending
				newMat[newPos][n-1-j] = mat[i][j];
			else if(left && desc){ //left descending
				newPos = i; 
				newMat[n-1-j][newPos] = mat[i][j];
			} 
		}
	}
	printMatrix(newMat, n);

}
int main(){
	int mat[10][10];
	int n, k;
	memset(mat, -1, sizeof mat);
	cin >> n >> k;
	//Read matrix
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}
	rotateMatrix(mat, n, k);
	return 0;
}
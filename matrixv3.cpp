/*
	INCOMPLETO
	Escribe un programa que dada una matriz cuadrada de nxn numeros aleatorios
	genere una nueva matriz con k giros clockwise.

	Condiciones:
		- n>=1
		- k es cualquier entero
		- La matriz es de enteros
		- No se permite usar memoria adicional

	Este algoritmo modifica la matriz original. Mas complejo pero no ocupa tanta memoria.
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
	cout << giros << endl;
	if(!giros){
		printMatrix(mat, n);
		return;
	}

	// int newMat[10][10];
	bool desc, left;
	left = desc = false;
	if(giros == 3 || giros == 1)
		left = true;
	if(giros >= 2)
		desc = true;

	for (int i = 0; i < n; i++){
		int newPos = n-i-1;
		for (int j = 0; j < n; j++){
			int x = -1;
			if(left && !desc){ //left ascending
				x = mat[j][newPos];
				mat[j][newPos] = mat[i][j];
			} 
			else if(!left && desc){ //right descending
				x = mat[newPos][n-1-j];
				mat[newPos][n-1-j] = mat[i][j];
			}
			else if(left && desc){ //left descending
				if(j==i-1)
					continue;				
				newPos = i;
				x = mat[n-1-j][newPos];
				mat[n-1-j][newPos] = mat[i][j];
				mat[i][j] = x;
			} 
		}
		printMatrix(mat, n);
		cout << endl << endl;
	}

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
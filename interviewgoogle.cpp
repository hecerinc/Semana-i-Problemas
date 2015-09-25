Given a 2D space of maximum size nxn which supports two operations:
[1] void UPDATE(x,y,v) sets the value of cell (x,y) to v
[2] int QUERY(x1,y1,x2,y2) returns la suma de la submatriz;


For example if the table 3x3 has this data (assuming 0-based origin at the top-left after 9 calls to UPDATE());

1 2 3
4 5 6
7 8 9

Query(0,0,2,2)
45

	a. UPDATE is often and QUERY is not
	b. matrix [N][N]; matrix[x][y] = v; O(1)


QUERY
for (int i = x1; i <= x2; i++){
	for (int j = y1; j < y2; j++){
		sum+= matrix[i][j];
	}
}
// Complexity of:
// O((x2-x1)*(y2-y1)) == O(n^2)


result = matrixOfSums[x2][y2] - matrixOfSums[x1][y1];
result = matrixOfSums[x2][y2] - matrixOfSums[x1][y1] - (matrixOfSums[x2][y1] - matrixOfSums[x1][0]);
/*
Questions:
1. Can I assume the query does not go out of bounds.
A: Yes, but that's the only assumption you can make

Montse: What would be the complexity of the query?


(After solving the first part)

Montse: Now imagine that QUERY is going to be called more frequently, how can you optimize your query so that it is more efficient. What would you store so that queries run faster and maybe update can run slower.

First problem is usually a warm up
Make sure you know basic concepts like complexity.
Talk about your solution first
Make drawings
Should I write implementation of matrix of sums? Interviewers want to see the main problem solved, you can often assume or skip trivial implementations
*/
/*
En el individual usa un stack | AND y NOT 
Prioridad: NOT AND OR

http://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
http://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/
http://www.programcreek.com/2014/02/leetcode-find-minimum-in-rotated-sorted-array/
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
*/

DIA 1 
	- Trabajo Grupal
	- P2P 
	- Sudoku
DIA 2 
	Montse
	- Conferencia del papa de Montse
	- Trabajo Grupal
	- Trabajo individual F||V&&

DIA 3
	MSFT Guy
	- Trabajo P2P
		- Given a linked list reverse it (yo la hice) (Axel a mi)
		- Dado una lista, rotala (yo se la puse a Evan)
	- Entrevista 1:
		- Dado un array de ints, regresa la primera combinacion que te de un int know
	- Entrevista 2:
		- Dado un string, voltealo y reverse the order
	- Entrevista 3:
		- Dado un linked list, write a function that will return if there is a loop
DIA 4
	Apple Guy
	- Trabajo Grupal
		- 4B
		- 4C
	- Entrevistas:
		- See msft1.cpp. Dadas dos linked lists determina el punto donde convergen (si convergen)
		- Dado una matriz de nxn determina el # de paths para llegar de la esq. superior izq a la esq. inferior derecha. Si nada mas puedes avanzar a la derecha y hacia abajo
		- Implementa una clase y la subclase de CallCenter
DIA 5
	Chava de MSFT
	[x] P2P que ya subi
	- Naty
	- Marco
	- Ricky
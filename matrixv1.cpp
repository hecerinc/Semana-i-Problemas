#include <iostream>
using namespace std;
void rotateMatrix(int mat[10][10], const int n, int k){// matriz, n = rows = columns, giros
	int giros = k>4?k%4:k;
	if(!giros)
		return;

	int newMat[10][10];
	// newMat = new int[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			int newPos = n-i-1;
			newMat[j][newPos] = mat[i][j];
		}
	}

	//Print matrix
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << newMat[i][j] << " ";
		}
		cout << endl;
	}
	// delete newMat;

}
int main(){
	int mat[10][10];
	int n;
	memset(mat, -1, sizeof mat);
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}
	rotateMatrix(mat, n, 1);
	return 0;
}
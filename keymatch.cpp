#include <iostream>
using namespace std;
void printArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
void removeKey(int arr[], int n, int k){
	for (int i = 0; i < n; i++){
		if(arr[i]==k)
			arr[i] = -1;
	}
	printArray(arr, 10);
	//Order
	bool swap = true;
	for (int i = 0; i < n-1 && swap; i++){
		swap = false;
		for (int j = 0; j < n-1-i; j++){
			if(arr[j]== -1 && arr[j+1]!=-1){
				arr[j] = arr[j+1];
				arr[j+1] = -1;
				swap = true;
			}
		}
	}
	printArray(arr, 10);
}
int main(){
	int arr[10] = {1,2,4,2,5,2,2,10,12,4};
	removeKey(arr, 10, 2);
	return 0;
}
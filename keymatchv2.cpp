#include <iostream>
using namespace std;
void printArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
void removeKey(int arr[], int n, int k){
	int cambios =0;
	int changed[10];
	fill_n(changed, 10, -1);
	for (int i = 0, j=0; i < n; i++){
		if(arr[i]==k){
			arr[i] = -1;
			cambios++;
		}
		else{
			changed[j] = arr[i];
			j++;
		}
	}
	for (int i = 0; i < n-cambios; i++){
		arr[i] = changed[i];
	}
	cout << endl;
	printArray(changed, 10);
	//Order
	// printArray(arr, 10);
}
int main(){
	int arr[10] = {1,2,4,2,5,2,2,10,12,4};
	removeKey(arr, 10, 2);
	return 0;
}
#include <iostream>
using namespace std;
int findMin(int arr[], int n){

}
int findKey(int arr[], int key, int n){ // n = length
	int mindex = -1;
	//Find min
	if(arr[0] < arr[n-1])
		mindex = 0;
	if((n-1-1)==0)
		mindex = arr[0]<arr[n-1]?0:(n-1);

	int mid;

}
int main(){
	int arr[] = {15,16,19,20,25,1,3,4,5,7,10,14};
	int n = sizeof arr;
	findKey(arr, 5, n);
	return 0;
}
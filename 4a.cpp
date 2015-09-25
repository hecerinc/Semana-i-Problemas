/*

	Given a sorted array that has been rotated, and a key, return the index of the key in the array in
	O(log n) time.

*/
#include <iostream>
using namespace std;
int findPivot(int arr[], int low, int high)
{
	// base cases
	if (high < low)  return -1;
	if (high == low) return low;

	int half = (low + high)/2;   /*low + (high - low)/2;*/
	if (half < high && arr[half] > arsr[half + 1])
		return half;
	if (half > low && arr[half] < arr[half - 1])
		return (half-1);
	if (arr[low] >= arr[half])
		return findPivot(arr, low, half-1);
	else
		return findPivot(arr, half + 1, high);
}
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
int findKey(int arr[], int key, int size){
	int pivot = findPivot(arr, 0, size-1);

	if (pivot == -1)
		return binaryS(arr, 0, size-1, key);

	if (arr[pivot] == key)
		return pivot;
	if (arr[0] <= key)
		return binaryS(arr,  key, 0, pivot-1);
	else
		return binaryS(arr, key, pivot+1, size-1);
}
int main(){
	int arr[] = {15,16,19,20,25,28,1,3,4,5,7,10,14};
	cout << findKey(arr, 25, 13) << endl;
	// cout << 5/2 << endl;
	return 0;
}
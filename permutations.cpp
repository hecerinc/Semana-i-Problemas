#include <iostream>
#include <string>
using namespace std;
bool isPermutation(string a, string b){
	if(a.length()!=b.length())
		return false;
	int n = a.length(), alen, blen;
	alen = blen = 0;
	for (int i = 0; i < n; i++){
		alen += int(a[i]);
		blen += int(b[i]);
	}
	for (int i = 0; i < n; i++){
		blen -= int(a[i]);
	}
	return blen==0?true:false;
}
int main(){
	while(true){
		string a, b;
		cin >> a;
		cin >> b;
		cout << isPermutation(a, b) << endl;
	}
	return 0;
}
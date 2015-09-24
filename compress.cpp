#include <iostream>
#include <string>
using namespace std;
string compress(string str){
	string x = "";
	int reps = 0;
	for (int i = 1; i < str.length(); i++){
		if(str[i]==str[i-1])
			reps++;
		else{
			x += str[i-1]+to_string(reps+1); //Reps plus the original (1)
			reps = 0;
		}
	}
	// Falta el ultimo caracre
	// if(reps!=0)
	// 	x+=str[str.length()-1]+to_string(reps+1);
	return x;
}
int main(){
	while(true){
		string a;
		getline(cin, a);
		cout << compress(a) << endl;
	}
	return 0;
}
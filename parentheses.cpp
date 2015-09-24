/* 

	Desarrolla un algoritmo que teniendo un string conteniendo paréntesis, llaves y corchetes, 
	valide si está correctamente construido.
	
	Ejemplo:

		[(){}]()	SI es correcto
		[}{[		No es correcto
*/
#include <iostream>
#include <string>
using namespace std;
bool validateString(string str){
	int arr[3] = {0,0,0};
	/*
		0 - Parentesis
		1 - Llaves
		2 - Corchetes
	*/
	for (int i = 0; i < str.length(); i++){
		if(str[i] == '{')
			arr[1]++;
		else if(str[i]=='}')
			arr[1]--;
		else if(str[i]=='(')
			arr[0]++;
		else if(str[i]==')')
			arr[0]--;
		else if(str[i]=='[')
			arr[2]++;
		else if(str[i]==']')
			arr[2]--;
	}
	for (int i = 0; i < 3; i++){
		if(arr[i]!= 0)
			return false;
	}
	return true;
}
int main(){
	while(true){
		string a;
		cin >> a;
		cout << validateString(a) << endl << endl;
	}
	return 0;
}
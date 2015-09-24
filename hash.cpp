/*
	Preguntas relevantes:
		- Puedo usar string?
		- Puedo usar una cadena de caracteres?
		- Si tengo multiples espacios continuos, es un solo hash o uno por cada espacio?
*/
#include <iostream>
#include <string>
using namespace std;
string replaceWithHash(string s){
	for (int i = 0; i < s.length(); i++){
		if(s[i]==' ')
			s[i] = '#';
	}
	return s;
}
int main(){
	string a = "";
	getline(cin, a);
	cout << replaceWithHash(a) << endl;
	return 0;
}
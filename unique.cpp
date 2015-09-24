/*
	Implementa un algoritmo para determinar si un string contiene caracteres únicos.

	Preguntas relevantes:
		- Son mayusculas y minusculas?
		- ASCII? Extended?
		- Son iguales las mayusculas y minusculas?
*/
#include <iostream>
#include <string>
#include <set>
using namespace std;
bool isUnique2(string str){
	if(str.lenth()>52)
		return false;
	bool may[26];
	bool min[26];
	for (int i = 0; i < str.length(); i++){
		if(!may[str[i]-'A'])
			may[str[i]-'A']
	}

}
bool isUnique(string str){
	if(str.length()>52)
		return false;
	set<int> letters;
	for (int i = 0; i < str.length(); i++)
		letters.insert(int(str[i]));
	return str.length()==letters.size()?true:false;
}
int main(){
	string a = "abcc";
	cout << isUnique(a) << endl;
	return 0;
}
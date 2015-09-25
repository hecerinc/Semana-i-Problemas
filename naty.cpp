/*
	Given a binary tree, create a function that will return a string in the order level by level
	If it's null don't display anything

	Marco:

	Given two strings. String a is a sentence from a magazine. String b is a ransom message that you want to build.
	Check whether you have enough letters in the magazine string to form the ransom message.
	You can be given an empty string

	Rick:
	Implement the atoi function
*/

int atoi(string number){
	int n = 0, startingPosition =0;
	bool isNegative = false;
	isNegative = (number[0] == '-');
	if(isNegative)
		startingPosition = 1;
	for (int i = startingPosition; i < number.length(); i++)
		number = number*10 + (number -'0');

	return isNegative?(-1)*number:number;
}

int checkMagazine(string sentence, string ransom){
	if(ransom.length() > sentence.length()) return false;
	for (int i = 0; i < sentence.length(); i++){
		
	}

}
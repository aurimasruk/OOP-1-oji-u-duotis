#include <iostream>

using namespace std;

int isvedimas(int l, string name, string mystr){
	for(int i = -2; i < l; i++)	cout << "*"; cout << endl << "*";

	for(int i = 0; i < l; i++)	cout << " "; cout << "*" << endl;
	
	cout << "* " << mystr << name << " *" << endl << "*";
	
	for(int i = 0; i < l; i++)	cout << " "; cout << "*" << endl;

	for(int i = -2; i < l; i++)	cout << "*";
}

int main(){

	int l;
	string name, mystr = "Sveikas, ";

	cout << "Enter your name: ";
	cin >> name;

	l = mystr.length() + name.length() + 2;

	isvedimas(l, name, mystr);

	return 0;
}

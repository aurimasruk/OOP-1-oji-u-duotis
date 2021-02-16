#include <iostream>
using namespace std;

bool gender(string name){
	if(name.back() == 's') return 1;
	else return 0;
}

void output(string name, int fsize){

	string x1("*"), x2(" "), mystr;

	if(gender(name)) mystr = "Sveikas, " + name + "!";
	else mystr = "Sveika, " + name + "!";

	if (fsize == 0) cout << mystr << endl;

	else{
	int l = mystr.length();
	int rows = fsize * 2 + 1;
	int columns = fsize * 2 + l;

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			if(fsize == i and fsize == j) {cout << mystr;
			j = j + l - 1;	}
			else{
				if(i == 0 or j == 0 or i == rows - 1 or j == columns - 1) cout << x1;
				else cout << x2;
			}
		}
		cout << endl;
	}
}}

int main(){
	int fsize;							// frame size
	string name;
	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your frame size: ";
	cin >> fsize;

	while(fsize < 0 or fsize > 15){
	cout << "Change your frame size (0-15): ";
	cin >> fsize;}

	cout << endl;
	output(name, fsize);

	return 0;	}

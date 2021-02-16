#include <iostream>
using namespace std;

bool gender(string name){
	if(name.back() == 's') return 1;
	else return 0;
}

void output(string name){

	string x1("* "), x2(" *"), mystr;

	if(gender(name)) mystr = "Sveikas, " + name + "!";
	else mystr = "Sveika, " + name + "!";

	int l = mystr.length();

	string l1(x1.length() + l + x2.length(), '*');
	string l2(x1 + string(l, ' ') + x2);
	string l3(x1 + mystr + x2);
	string l4(l2);
	string l5(l1);

	cout << l1 << endl;
	cout << l2 << endl;
	cout << l3 << endl;
	cout << l4 << endl;
	cout << l5 << endl;
}

int main(){

	string name;
	cout << "Enter your name: ";
	cin >> name;

	output(name);

	return 0;	}

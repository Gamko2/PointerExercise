#include <iostream>
using namespace std;

int main() {
	
	char str[] = "A string";
	char* pointer = str;

	cout << str[0] <<" Pointer position: " << *pointer << " The letter t, hopefully: " <<pointer[3] << endl;
	pointer = pointer + 2;
	cout << "Pointer value after increase: " << *pointer << endl;
	cout <<"The letter r and g I hope: " << pointer[2] << " " << pointer[5];

	return 0;
}

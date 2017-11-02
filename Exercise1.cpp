using namespace std;
#include <iostream>


int main() {
		int a;
		int b;
		int* ptra;
		int* ptrb;
	cout << "Enter a and b" << endl;
	cin >> a;
	cin >> b;
	ptra = &a;
	ptrb = &b;

	cout << " Value of ptra is " << *ptra << "stored in adress " << ptra << endl;
	cout << "Value of ptrb is " << *ptrb << "stored in adresse " << ptrb << endl;
	cout << " Great success!";
	return 0;
}

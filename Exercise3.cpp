#include <iostream>
using namespace std;

int main() {
	int a;
	
	cout << "Enter a number" << endl;
	cin >> a;
	int* ptra = &a;
	cout << "Your number is " <<*ptra;
	return 0;
}

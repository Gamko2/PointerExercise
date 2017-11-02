
#include <iostream>
using namespace std;

int main() {
	int n;
	int max = 0;

	cout << "Enter the amount of numbers you want to enter(not more than 100)" << endl;
	cin >> n;
	if (n > 100) {
		cout << "invalid value>";
		return 0;
	}
	cout << "Enter you values" << endl;
	int array[100];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for (int j = 0; j < n; j++) {
		if (array[j] > max) {
			max = array[j];
		}
	}

	int* pointer = &max;
	cout << "Largest value is " << *pointer;

	return 0;
}

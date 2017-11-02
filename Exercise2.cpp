#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n;
	int max = 0;

	cout << "Enter the amount of numbers you want to enter" << endl;
	cin >> n;
	
	cout << "Enter you values" << endl;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		v.push_back(b);
	}

	for (int j = 0; j < n; j++) {
		if (v[j] > max) {
			max = v[j];
		}
	}

	int* pointer = &max;
	cout << "Largest value is " << *pointer;

	return 0;
}

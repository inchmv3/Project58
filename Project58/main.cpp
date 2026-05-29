#include "logic.h"
int main() {
	int array[];
	int size;
	cout << "input size of array: \n";
	cin >> size;
	string msg = to_string(count_average(array, size));
	cout << msg;
	return 0;

}
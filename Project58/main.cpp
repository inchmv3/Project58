#include "logic.h"
int main() {
	int classA[DEFAULT_SIZE];
	int classB[DEFAULT_SIZE];
	int classC[DEFAULT_SIZE];
	int size;
	cout << "input size of array: \n";
	cin >> size;
	
	init(classA, size);
	init(classB, size);
	init(classC, size);

	return 0;

}
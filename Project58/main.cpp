#include "logic.h"
int main() {
	int classes[DEFAULT_SIZE][DEFAULT_SIZE];

	int n = 3;
	int m = 5;

	init(classes, n, m);
	print("Average mark of classes:" + average(classes, n, m));

	return 0;

}
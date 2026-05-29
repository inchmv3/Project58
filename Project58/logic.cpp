#include "logic.h"
#define MAX_MARK 10
#define MIN_MARK 1

void init(int marks[], int size) {
	for (int i = 0; i < size; i++)
	{
		marks[i] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
	}
}
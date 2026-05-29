#include "logic.h"
#define MAX_MARK 10
#define MIN_MARK 1

void init(int classes[][DEFAULT_SIZE], int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			classes[i][j] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
		}
	}
}
string convert(int classes[][DEFAULT_SIZE], int n, int m) {
	string s = "";
	for (int i = 0; i < n; i++)
	{
		s += "classe" + to_string(i + 1) + ":";
		for (int j = 0; j < n; j++)
		{
			s += " " + to_string(classes[i][j]);

		}

		s += "\n";
	}
	return s;
}
void print(string text) {
	cout << text;
}
#include "logic.h"

string average(int classes[][DEFAULT_SIZE], int n, int m) {
	if (n <= 0 || m <= 0) {
		return "error";
	}
	
	string result = "";
	for (int i = 0; i < n; i++)
	{
		double sum = 0;
		result += "average mark of classe" + to_string(i + 1) + ":";
		for (int j = 0; j < m; j++)
		{
			sum += classes[i][j];
		}
		result += to_string(sum / m) + "\n";
	}
	return result;
}
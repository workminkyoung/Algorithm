
#include <iostream>
#include <cmath>
using namespace std;

string line = "";

void kantor(int start, int n) {
	if (n == 1) {
		return;
	}

	for (int i = start + n/3; i < start + n/3*2; i++)
	{
		line[i] = ' ';
	}

	kantor(start, n / 3);
	kantor(start + n / 3 * 2, n / 3);
}

int main()
{
	int n;
	
	while (cin >> n) {
		line = "";
		int length = pow(3, n);
		for (int i = 0; i < length; i++)
		{
			line += '-';
		}
		kantor(0, length);
		cout << line << endl;
	}
}
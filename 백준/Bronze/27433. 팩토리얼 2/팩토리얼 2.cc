#include <iostream>
using namespace std;

long long result = 0;

long long factorial(int num) {
	if (num == 0)
		return 1;
	else 
	{
		result = num * factorial(num - 1);
		return result;
	}
}

int main()
{
	int n;
	cin >> n;

	if (n == 0) {
		result = 1;
	}
	else {
		factorial(n);
	}

	cout << result;

	return 0;
}
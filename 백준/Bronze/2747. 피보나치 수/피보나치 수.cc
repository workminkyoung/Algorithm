#include <iostream>
#include <map>

using namespace std;

map<int, int> found_pibo;

int Pibo(int n) {
	if (n == 1 || n == 0) {
		return n;
	}
	else {
		if (found_pibo.count(n) > 0) {
			return found_pibo[n];
		}
		else {
			found_pibo[n] = Pibo(n - 1) + Pibo(n - 2);
			return found_pibo[n];
		}
	}
}

int main()
{
	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
	}
	else if (n == 1) {
		cout << 1;
	}
	else {
		// 피보나치의 수
		cout << Pibo(n);
	}
}
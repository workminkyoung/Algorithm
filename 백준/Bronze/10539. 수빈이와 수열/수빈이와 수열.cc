#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> arr_b;
	vector<int> arr_a;
	int pre = 0;

	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		int index = i + 1;

		arr_b.push_back(m);
		int found_a = m * index - pre;
		pre += found_a;

		arr_a.push_back(found_a);
	}

	for (int i = 0; i < arr_a.size(); i++)
	{
		cout << arr_a[i] << " ";
	}
}
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
	int n;
	int x, y;
	vector<pair<int, int>> bodypairs;
	//vector<int> rank;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		bodypairs.push_back(pair<int, int>(x, y));
	}

	int my_rank = 1;
	for (int i = 0; i < bodypairs.size(); i++)
	{
		my_rank = 1;
		for (int j = 0; j < bodypairs.size(); j++)
		{
			if (j == i)
				continue;

			if (bodypairs[j].first > bodypairs[i].first && bodypairs[j].second > bodypairs[i].second) {
				my_rank++;
			}
		}

		//rank.push_back(my_rank);
		cout << my_rank << " ";
	}
}
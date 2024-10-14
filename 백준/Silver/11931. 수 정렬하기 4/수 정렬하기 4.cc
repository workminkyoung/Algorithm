#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> nums;
    int num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(-num);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        cout << -nums[i] << "\n";
    }
}
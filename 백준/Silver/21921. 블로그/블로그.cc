// bj21921.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int n, x;

	int highest_nums = 0;
	int highest_count = 0;

	cin >> n >> x;

	deque<int> window;
	int cur_nums = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (window.size() == x) {
			cur_nums -= window.front();
			window.pop_front();
		}

		window.push_back(num);
		cur_nums += num;

		if (window.size() == x) 
		{
			if (cur_nums > highest_nums) {
				highest_nums = cur_nums;
				highest_count = 1;
			}
			else if (cur_nums == highest_nums) {
				highest_count++;
			}
		}
	}

	if (highest_nums == 0) {
		cout << "SAD";
	}
	else {
		cout << highest_nums << "\n" << highest_count;
	}
}
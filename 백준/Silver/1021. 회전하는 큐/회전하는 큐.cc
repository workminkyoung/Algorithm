#include <iostream>
#include <deque>

using namespace std;

deque<int> circle_q;
int circle_count = 0;

void move_front(int num) {

	for (int i = 0; i <= num; i++)
	{
		int cur_pop = circle_q.front();
		circle_q.pop_front();

		if (i < num) {
			circle_q.push_back(cur_pop);
			circle_count++;
		}
	}
}

void move_back(int num) {

	for (int i = 0; i <= num; i++)
	{
		int cur_pop = circle_q.back();
		circle_q.pop_back();
		circle_q.push_front(cur_pop);
		circle_count++;
	}

	circle_q.pop_front();
}

int main()
{
	int m;
	int n;

	cin >> m >> n;


	for (int i = 0; i < m; i++)
	{
		circle_q.push_back(i + 1);
	}

	for (int i = 0; i < n; i++)
	{
		int pop_num;
		cin >> pop_num;
		int pop_pos = -1;

		for (int j = 0; j < circle_q.size(); j++)
		{
			if (circle_q[j] == pop_num) {
				pop_pos = j;
				break;
			}
		}
		
		if (pop_pos == -1) {
			break;
		}
		int middle = (circle_q.size()) / 2;
		// 뽑으려는 수가 좌/우측 편향 여부 확인
		if (pop_pos <= middle) {
			move_front(pop_pos);
		}
		else {
			move_back(circle_q.size()-1 - pop_pos);
		}
	}


	cout << circle_count;
}
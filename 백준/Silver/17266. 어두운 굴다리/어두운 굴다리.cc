// bj17266.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int bridge, m;
	cin >> bridge >> m;

	int min_length = 1;
	int prev_x = 0;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;

		int min;

		if (i == m - 1)
		{
			// 끝 위치
			// 이전 위치랑 비교
			if (m == 1) 
			{
				min = x - prev_x;
				if (min > min_length)
				{
					min_length = min;
				}
			}
			else 
			{
				min = ceil((x - prev_x) / 2.0);
				if (min > min_length)
				{
					min_length = min;
				}
			}
			// 끝점이랑 비교
			min = bridge - x;
			if (min > min_length)
			{
				min_length = min;
			}
		}
		else if (i == 0)
		{
			// 첫 위치
			min_length = x;
		}
		else
		{
			//중간 가로등 사이의 거리
			double dist = (x - prev_x) / 2.0;
			min = ceil(dist);
			if (min > min_length)
			{
				min_length = min;
			}
		}

		prev_x = x;
	}

	cout << min_length;
}

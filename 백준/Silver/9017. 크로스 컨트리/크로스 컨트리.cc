// bj9017.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int case_num;
	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		int num, team_idx;
		cin >> num;

		// 팀별 인원수 산정
		vector<int> teams;
		map <int, int> each_team_size;
		for (int j = 0; j < num; j++)
		{
			cin >> team_idx;
			teams.push_back(team_idx);
			each_team_size[team_idx]++;
		}

		// 인원수 비교 후 점수 리스트 축적
		int rank = 1;
		map <int, vector<int>> each_team_rank;
		for (int k = 0; k < num; k++)
		{
			if (each_team_size[teams[k]] == 6) 
			{
				each_team_rank[teams[k]].push_back(rank);
			}
			else 
			{
				continue;
			}
			rank++;
		}

		// 승자 비교 - 작은수가 승리
		int winner = -1;
		int winner_score = 2147483647;
		for (const auto& team_pair : each_team_rank)
		{
			int cur_score = team_pair.second[0] + team_pair.second[1] + team_pair.second[2] + team_pair.second[3];

			if (cur_score < winner_score) {
				winner = team_pair.first;
				winner_score = cur_score;
			}
			else if (cur_score == winner_score) {
				if (team_pair.second[4] < each_team_rank[winner][4]) {
					winner = team_pair.first;
					winner_score = cur_score;
				}
			}
		}

		// 승자 출력
		cout << winner << "\n";
	}
}
// bj20920.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second != b.second) {
		// 조건1. 자주 나오는 단어 선배치
		return a.second > b.second;
	}
	else if (a.first.length() != b.first.length()) {
		// 조건2. 단어 길이 길수록 선배치
		return a.first.length() > b.first.length();
	}
	else {
		// 조건3. 알파벳 순으로 배치
		return a < b;
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	cin.ignore();
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	map<string, int> words;// 문자, 중복수

	for (int i = 0; i < n; i++)
	{
		string str;
		getline(cin, str);

		if (str.length() >= m) {
			words[str]++;
		}
	}

	vector<pair<string, int>> wordVector(words.begin(), words.end());
	sort(wordVector.begin(), wordVector.end(), compare);

	for (pair<string, int> word : wordVector)
	{
		cout << word.first << "\n";
	}
}
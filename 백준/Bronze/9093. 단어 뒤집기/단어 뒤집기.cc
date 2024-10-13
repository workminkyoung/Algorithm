// bj9093.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		string sentence;
		string sentence_reverse = "";
		getline(cin, sentence);

		stringstream splitted(sentence);
		string each;

		while (splitted >> each)
		{
			for (int k = each.length() - 1; k >=0 ; k--)
			{
				cout << each[k];
			}
			cout << " ";
		}
		cout << endl;
	}
}
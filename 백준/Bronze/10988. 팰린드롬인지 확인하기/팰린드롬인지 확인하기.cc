#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int length = word.length();
	int isPalindrome = 1;

	if (length == 1) {
		cout << isPalindrome;
	}
	else {
		for (int i = 0; i < length / 2; i++)
		{
			if (word[i] != word[length - 1 - i]) {
				isPalindrome = 0;
				break;
			}
		}

		cout << isPalindrome;
	}
}
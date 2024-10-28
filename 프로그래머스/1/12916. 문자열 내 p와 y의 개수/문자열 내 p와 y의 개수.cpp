#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int length = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
        {
            length++;
        }
        else if(s[i] == 'y'|| s[i] == 'Y')
        {
            length--;
        }
    }
    
    if(length != 0)
    {
        answer = false;
    }

    return answer;
}

int main()
{
    string text;
    getline(cin, text);
    cout << solution(text);
}
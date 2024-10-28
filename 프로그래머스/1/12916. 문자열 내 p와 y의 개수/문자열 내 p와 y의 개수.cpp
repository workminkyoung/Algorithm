#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int p_length = 0;
    int y_length = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'p' || s[i] == 'P'){
            p_length++;
        }else if(s[i] == 'y'|| s[i] == 'Y'){
            y_length++;
        }
    }
    
    if(p_length != y_length){
        answer = false;
    }

    return answer;
}

int main(){
    
    string text;
    getline(cin, text);
    cout << solution(text);
}
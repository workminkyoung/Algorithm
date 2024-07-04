//
//  main.cpp
//  bj6603
//
//  Created by 김민경 on 7/4/24.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> s;
vector<int> result;
int max = 6;
int lastNum = 0;

void Comb(int index, int length) {
    if (length == 6) {
        for (int i = 0; i < result.size(); i++) {
            if (i < result.size() - 1) {
                cout << result[i] << " ";
            }
            else {
                cout << result[i] << endl;
            }
        }
        return;
    }

    for (int i = index; i < lastNum; i++) {
        result.push_back(s[i]);
        Comb(i + 1, length + 1);
        result.pop_back();
    }
}

int main(int argc, const char* argv[]) {
    // insert code here...
    int k = 0;
    while (true)
    {
        cin >> k;
        s.clear();
        result.clear();

        if (k == 0) {
            break;
        }

        int n = 0;
        for (int i = 0; i < k; i++) {
            cin >> n;
            s.push_back(n);
        }

        lastNum = s.size();
        
        Comb(0, 0);
        cout << endl;
    }

    return 0;
}

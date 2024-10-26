//
//  main.cpp
//  bj2164
//
//  Created by 김민경 on 10/26/24.
//

#include <iostream>
#include <deque>

using namespace std;

int main(int argc, const char* argv[]) {
    int n;
    cin >> n;

    if (n == 1) {
        cout << n;
        return 0;
    }

    deque<int> card;

    //일단 홀수카드 털고 시작
    for (int i = 2; i <= n; i += 2) {
        card.push_back(i);
    }

    bool need_pop = n % 2 == 0 ? true : false;

    while (card.size() != 1) {
        int size = card.size();
        int first_pop;
        int move;

        if (need_pop)
        {
            first_pop = 0;
        }
        else
        {
            first_pop = 1;

            // move next
            move = card.front();
            card.pop_front();
            card.push_back(move);

            need_pop = true;
        }

        for (int i = first_pop; i < size; i+=2)
        {
            //pop
            card.pop_front();
            need_pop = false;
            //next
            if (i + 1 < size) {
                move = card.front();
                card.pop_front();
                card.push_back(move);
                need_pop = true;
            }
        }
    }

    cout << card.front();
}

#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<int, int> switch_dict;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int state;
        cin >> state;
        switch_dict[i + 1] = state;
    }

    int student_n;
    cin >> student_n;

    for (int i = 0; i < student_n; i++)
    {
        int gender, number;
        cin >> gender >> number;

        if (gender == 1) {
            //boy
            int step = number;
            while (number <= n)
            {
                switch_dict[number] = switch_dict[number] == 0 ? 1 : 0;
                number += step;
            }
        }
        else {
            //girl
            switch_dict[number] = switch_dict[number] == 0 ? 1 : 0;

            int prev = number - 1;
            int next = number + 1;

            while (prev >= 1 && next <= n)
            {
                if (switch_dict[prev] == switch_dict[next]) {
                    switch_dict[prev] = switch_dict[prev] == 0 ? 1 : 0;
                    switch_dict[next] = switch_dict[next] == 0 ? 1 : 0;
                }
                else {
                    break;
                }

                prev -= 1;
                next += 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << switch_dict[i] << " ";
        if (i % 20 == 0) {
            cout << "\n";
        }
    }
}
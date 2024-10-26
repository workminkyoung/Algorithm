// bj17266.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int b_length, l_num;
    cin >> b_length >> l_num;

    int min_length = 0;
    int prev_x = 0;
    int min;
    int x;
    
    // 첫 가로등과 시작점의 거리를 잼
    cin >> x;
    min_length = x - prev_x;
    
    // 두번째 가로등부터 사이 거리를 잼
    for (int i = 1; i < l_num; i++)
    {
        cin >> x;
        
        //중간 가로등 사이의 거리
        min = ceil((x - prev_x) == 0 ? 0 : (x - prev_x) / 2.0);
        
        if (min > min_length)
        {
            min_length = min;
        }
        
        prev_x = x;
    }
    
    // 마지막 가로등과 끝점의 거리를 잼
    min = b_length - x;
    if(min_length < min){
        min_length = min;
    }
    
    cout << min_length;
}

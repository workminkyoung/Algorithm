#include <iostream>
using namespace std;

long long Factorial(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 0){
        return 1;
    }
    else{
        return n * Factorial(n-1);
    }
}

int main(int argc, const char * argv[]) {
    int n = 0;
    cin >> n;
    
    cout << Factorial(n);
    
    return 0;
}

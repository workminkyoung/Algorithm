#include <iostream>
#include <vector>
#include <map>

using namespace std;

int n;
vector<int> components;
vector<int> cur_permutation;
//vector<bool> use_check;
map<int, bool> use_check;

void print_vector(){
    for (int i = 0; i < cur_permutation.size(); ++i) {
        cout << cur_permutation[i] << " ";
    }
    cout << "\n";
}

void permutation(int depth){
    if(cur_permutation.size() == components.size()){
        print_vector();
        return;
    }
    
    for (int i = 0; i < n; ++i) {
        if(use_check[components[i]] == true){
            continue;
        }
        cur_permutation.push_back(components[i]);
        use_check[components[i]] = true;
        
        permutation(depth+1);
        
        use_check[components[i]] = false;
        cur_permutation.pop_back();
    }
}


int main(int argc, const char * argv[]) {
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        components.push_back(i);
    }
    
    permutation(0);
    
    return 0;
}
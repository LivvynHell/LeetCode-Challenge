#include <iostream>
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
    int previous_n_1 = 3; //initialised for climbing the previous step
    int previous_n_2 = 2; // initialised for climbing the step before n=3
    int current_num = 0; // number of combinations
    int i = 0;

    if(n <= 3) return n;

    for(i=3; i < n; i++){
    current_num = previous_n_1 + previous_n_2;
    previous_n_2 = previous_n_1;
    previous_n_1 = current_num;
    }
    return current_num;
    }
};

int main(){
    Solution sol;
    int n = 4;

    cout << sol.climbStairs(n);
    return 0;
}
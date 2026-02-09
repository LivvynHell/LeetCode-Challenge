// Recursive method of solving a fibonacci series
// it's a resource eating approach, not recommended for such simple task
// 14 ms runtime is a crazy statistic for such a simple task
#include <iostream>
using namespace std;

class Solution {

public:
    int fib(int n){
    if(n==0 || n==1){
    return n;
    }
    else
    return fib(n-1)+fib(n-2);
    }
};

int main()
{

Solution sol;
int N = 0;

cout << "Input Your N value:" << endl;
cin >> N;

for(int i=0; i<=N; i++){
    cout << sol.fib(i) << endl;
}
}
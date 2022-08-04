#include <iostream>

using namespace std;

int climbStairs(int n) {
    if(n == 1 || n == 0) return 1;
    int ways[n+1];
    ways[0] = ways[1] = 1;
    for(int i=2; i<n+1; i++) {
        ways[i] = ways[i-1] + ways[i-2]; 
    }
    return ways[n];
}

//This recursive solution is not efficient. It get worse when n is a larger value
// int climbStairs(int n) {
//     if(n == 1 || n == 0) return 1;
//     return climbStairs(n-1) + climbStairs(n-2);
// }

int main() {
    int result = climbStairs(45);
    cout<<result;
    return 0;
}
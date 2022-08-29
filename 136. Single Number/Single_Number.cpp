#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int x = 0;
    for(int i=0; i<nums.size(); i++) {
        x = x^nums[i];
    }
    return x;
}

int main() {
    vector<int>send = {3,1,2,2,1};
    int res = singleNumber(send);
    cout<<res;
    return 0;
}
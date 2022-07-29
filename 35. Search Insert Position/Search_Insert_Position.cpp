#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low=0,high = nums.size()-1,mid;
    
    while(low<=high) {
        mid = (low+high)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[mid]>target) {
            high = mid-1;
        }
        else low = mid + 1;
    }
    if(nums[mid] > target) return mid;
    else return mid + 1;
}

int main() {
    vector<int>n = {1,3,4,6};
    int result = searchInsert(n, 5);
    cout<<result;
    return 0;
}
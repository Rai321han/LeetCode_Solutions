#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> twoSum(vector<int>&nums, int target) {        
        unordered_map<int, int> track; //To map given nums with index
        vector<int> indices;    //To store the resultant indicies
        int need,i;
        for(i=0; i<nums.size(); i++) { //O(n)
            need = target - nums[i];
            //If required value isn't in the map then insert the 
            //Currently processing value(as key) and index(as content).
            if(track.find(need) == track.end()) //unordered find has O(1) on average
                track[nums[i]] = i;
            //If required value is in the map, then get the current index and the required index from map
            else {
                indices.push_back(i);
                indices.push_back(track.find(need)->second);
            }
        }
        return indices;
}

int main() {
    vector<int> result;
    vector<int>nums;
    int target;
    nums = {3,-3};
    target = 0;

    result = twoSum(nums, target);
    for(auto& i:result)
        cout<<i<<" ";
    return 0;
}
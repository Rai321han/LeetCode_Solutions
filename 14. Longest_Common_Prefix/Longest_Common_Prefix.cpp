#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix (vector<string>&strs) {
     auto i = strs.begin();
     string minStr=*i;
     int min = minStr.length();
     int temp;
    for(auto it=strs.begin(); it!=strs.end(); it++) {
        string x = *it;
        temp = x.length();
        
        if(temp < min) min = temp;
    }
    string result="";
    for(auto i = 0; i<min; i++) {
        char check = minStr[i];
        for(auto it=strs.begin(); it!=strs.end(); it++) {
            string st = *it;
            char ch = st[i];
            if(check!=ch) return result;
        }
        result.push_back(check);
    }
    return result;
}

int main() {
    vector<string>str = {"flower", "flow", "fl"};
    string result = longestCommonPrefix(str);
    cout<<result;
}
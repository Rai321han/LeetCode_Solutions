#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<int> p2 = {1,1};
    vector<vector<int>> result;

    if(numRows == 1) {
        result.push_back({1});
        return result;
    }
    if(numRows == 2) {
        result.push_back({1});
        result.push_back(p2);
        return result;
    }

    result.push_back({1});
    result.push_back(p2);

    for(int i=1; i<numRows-1; i++) {
        vector<int>temp;
        temp.push_back(1);
        for(int k=1; k < p2.size(); k++) {
           temp.push_back(p2[k-1] + p2[k]);
        }
        temp.push_back(1);
        p2 = temp;
        result.push_back(temp);
    }
    return result; 
}

int main() {
    vector<vector<int>> result = generate(10);
    
    for(int i = 0; i <result.size(); i++) {
        cout<<"[ ";
        for(int j = 0; j < result[i].size(); j++)
            cout << result[i][j]<<" ";
        cout<<"]\n";
    }
    return 0;
}
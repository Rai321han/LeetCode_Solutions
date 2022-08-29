#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> result;
    result.push_back(1);

    for(int i=1; i<=rowIndex; i++) {
        int prev = 1,store;
        for(int k=1; k<result.size(); k++) {
            store = result[k];
            result[k] = prev + result[k];
            prev = store;
        }
        result.push_back(1);
    }
    return result;
}

int main() {
    vector<int> result = getRow(9);
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}
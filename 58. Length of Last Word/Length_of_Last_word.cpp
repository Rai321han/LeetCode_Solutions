#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int i = s.size()-1,count=0;
    while(s[i] == ' ') i--;
    while(s[i] != ' ') {
        count++;
        i--;
        if(i<0) return count;
    }
    return count;
}

int main() {
    string s = " Raihan Uddin ";
    int r = lengthOfLastWord(s);
    cout<<r;
}
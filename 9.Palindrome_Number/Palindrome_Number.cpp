#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(long long x) {
        if(x<0) return false;
        long long reverseNUM=0,y = x;
        int remain;
        while(y!=0) {
            remain = y%10;
            y = y/10;
            reverseNUM = reverseNUM*10 + remain; //making the reverse 
        }   
        if(x == reverseNUM) return true;
        else return false;
}

int main(){
    bool rst = isPalindrome(-121);
    if(rst==true) cout<<"Yes";
    else cout<<"No";
    return 0;
}
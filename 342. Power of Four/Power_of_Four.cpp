#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfFour(int n) {
    if(n<=0) return false;
    float x = (log10(n)/log10(4));
    if(pow(4,(int)x) == n) return true;
    else return false;
}

int main() {
    isPowerOfFour(40)?cout<<"True":cout<<"False";
    return 0;
}
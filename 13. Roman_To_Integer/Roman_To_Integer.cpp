#include <iostream>
#include <string>

using namespace std;

int decimalOf(char x) {
    if (x == 'I') return 1;
   else if (x == 'V') return 5;
   else if (x == 'X') return 10;
   else if (x == 'L') return 50;
   else if (x == 'C') return 100;
   else if (x == 'D') return 500;
   else return 1000;
}

int romanToInt(string s) {
		int result = 0,temp = 0;
		for(int i=s.length()-1; i>=0; i--) {
					int y = decimalOf(s[i]);
					if(y >= temp) {
								result += y;
								temp = y;
					}

					if(y < temp) {
								result -= y;
								temp = y;
					}
				
		}
    return result;
}

int main() {
    string str = "MCMXCIV";
    int x = romanToInt(str);
    cout<<x;
}
#include <iostream>
#include <string>

using namespace std;

string addBinary(string a, string b) {
  int i = a.size() - 1;
  int j = b.size() - 1;
  int carry = 0;
  string result = "";

  while (i >= 0 || j >= 0) {
    int sum = carry;
    if (i >= 0) sum = sum + (a[i] - '0');
    if (j >= 0) sum = sum + (b[j] - '0');
    result = static_cast<char>(sum % 2 + '0') + result; //to not doing reverse I've added result after (sum%2)
    carry = sum / 2;
    i--;
    j--;
  }

  if (carry > 0) result = static_cast<char>(carry + '0') + result;
  return result;
};

int main() {
    string a = "11";
    string b = "1";
    string res = addBinary(a,b);
    cout<<res;
    return 0;
}
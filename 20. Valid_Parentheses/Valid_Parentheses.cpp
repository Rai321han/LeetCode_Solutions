#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char>st;
    st.push(s[0]);
    char temp;
    int i;
    for(i=1; i<s.length(); i++) {
       
   if(s[i] == '(' || s[i] == '{' || s[i] == '[')
			st.push(s[i]);
   else if(st.empty()) return false;
   else if(s[i] == ')' && st.top()=='(')
            st.pop();
   else if(s[i]=='}' && st.top() == '{')
            st.pop();
   else if(s[i]==']' && st.top()== '[')
            st.pop();
   else break;
    }

   if(st.empty()) return true;
   else return false;
}

int main() {
    string input = "{}{{}}}";
    if(isValid(input)) cout<<"true";
    else cout<<"false";
    return 0;
}
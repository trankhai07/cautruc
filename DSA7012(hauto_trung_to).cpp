#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    string s;
    while(x--){
        cin >> s;
        int len = s.size();
        stack<string>st;
        for(int i = 0;i < len;i ++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                string tmp = '(' + b+ s[i] + a+ ')';
                st.push(tmp);
            }
            else{
                string p=""; p = s[i];
                st.push(p);
            }
        }
        cout << st.top() <<endl;
    }
}
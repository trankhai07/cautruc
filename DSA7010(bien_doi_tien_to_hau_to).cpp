#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    string s;
    while(x--){
        cin >> s;
        int len= s.size();
        stack<string>st;
        for(int i = len-1;i >= 0;i --){       // run to down cứ gặp dấu thì lại chuyển về sau cùng 
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'|| s[i] == '%' || s[i] == '^'){
                string a = st.top(); st.pop();
                string b= st.top(); st.pop();
                string tmp = a+b+s[i];
                st.push(tmp);
            }
            else {
                string p = "";
                p = s[i];
                st.push(p);
            }
        }
        cout << st.top()<<endl;
    }
}
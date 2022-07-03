#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    string s;
    while(x--){
        cin >> s; int len = s.size();
        stack<string>st;
        for(int i = len-1;i >= 0;i --){
            if(s[i] == '*' || s[i] == '-' || s[i] == '/' || s[i] == '+'){
                string a= st.top(); st.pop();
                string b= st.top();st.pop();
                string tmp = '('+a+s[i]+b+')';
                st.push(tmp);
            }
            else{
    
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() <<endl;
    }
}
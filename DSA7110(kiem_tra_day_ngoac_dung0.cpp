#include<bits/stdc++.h>
using namespace std;
void output(int len, string s){
    stack<char>st; int check =0;
    for(int i =0;i < len;i ++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '(') st.push(s[i]);
        else{
            if( st.empty() != 1 && s[i] == ')' &&st.top() =='(' ) st.pop();
          else if( st.empty() != 1  && s[i] == '}' &&st.top() =='{') st.pop();
         else if( st.empty() != 1 && s[i] == ']' &&st.top() =='[' ) st.pop();
         else if(st.empty() == 1 && (s[i] == ']' || s[i] == '}' || s[i] == ')')){
             check =1;
             break; 
         }
        }
    }
    if(st.empty() == 1 && check == 0) cout <<"YES\n";
    else cout <<"NO\n";
}
int main(){
    int x; cin >> x;
    string s;
    while(x--){
        cin >> s;
        int len = s.size();
        output(len,s);
    }
}
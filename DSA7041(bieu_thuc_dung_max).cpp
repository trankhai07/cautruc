#include<bits/stdc++.h>
using namespace std;
void output(string s){
    int len=s.size();
    stack<char>st;
    int cn =0;
    for(int i = 0;i < len;i ++){
        if(s[i] != ')') st.push(s[i]);
        else if(s[i] == ')'){
            if(st.empty() != 1 ){
               cn++; st.pop();
            }
        }
    }
    cout << cn*2 << endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        string s;
        cin >> s;
        output(s);
    }
}
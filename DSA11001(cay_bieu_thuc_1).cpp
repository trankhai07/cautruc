#include<bits/stdc++.h>
using namespace std;
void output(string s,int len){
    stack<string>st;
    for(int i = 0;i < len;i ++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            st.push(string(1,s[i]));
        }
        else {
            if(st.empty() != 1){
                string a = st.top(); st.pop();
                if(st.empty() != 1){
                   string b = st.top(); st.pop();
                   string c = b + s[i] + a; 
                   st.push(c);
                }  
            }
        }
    }
    cout << st.top();
}
int main(){
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        output(s,s.size());
        cout << endl;
    }
}
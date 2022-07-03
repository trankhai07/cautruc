#include<bits/stdc++.h>
using namespace std;
void output(string s,int len){
    stack<int>st;
    for(int i = 0;i <= len;i ++){
        st.push(i+1);
        if(s[i] == 'I' || i == len){
            while(st.empty() != 1){
                cout << st.top();
                st.pop();
            }
        }
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        string s; cin >> s;
        int len =s.size();
        output(s,len);
        cout << endl;
    }
    return 0;
}
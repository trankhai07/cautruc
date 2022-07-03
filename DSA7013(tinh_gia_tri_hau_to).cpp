#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;string s;
    cin >> x;
    while(x--){
        cin >> s;
        int len =s.size();
        stack<int>st;
        for(int i = 0;i < len ;i ++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                int t1 = st.top();st.pop();
                int t2 = st.top(); st.pop();
                int t;
                if(s[i] == '+') t = t1+t2;
                else if(s[i] == '-') t= t2-t1;
                else if(s[i] == '*') t =t1*t2;
                else if(s[i] == '/') t = t2/t1;
                st.push(t);
            }
            else{
                string p = ""; p = s[i];
                int number = stoi(p);
                 st.push(number);
            }
        }
     cout << st.top() <<endl;
    }
}
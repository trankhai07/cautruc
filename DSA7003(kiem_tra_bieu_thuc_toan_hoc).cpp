#include<bits/stdc++.h>
using namespace std;
void output(string s,int len){
    stack<char>st;
    int kt =0,cn=0;
    for(int i = 0;i < len;i ++){
        
        if(s[i] != ')'){
            st.push(s[i]);
        } 
        else{
            kt =0;
            while(st.empty() != 1 &&st.top() != '('){
                char t = st.top();
                if(t == '+' || t == '-' || t == '*' || t == '/'){ // kiểm tra xem có dấu nào xuất hiện trong ngoặc kép ko
                   kt=1;      // nếu có thì bằng 1
                }
                st.pop();     
            }
            if(kt == 0){
                 cout << "Yes\n";
                 return ;
            }
            st.pop();
        }
    }
      cout <<"No\n";
   
}
int main(){
    int x; cin >> x;
    cin.ignore();
    while(x--){
        string s; getline(cin,s);
        int len = s.size();
       output(s,len);
    }
}

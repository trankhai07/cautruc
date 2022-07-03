#include<bits/stdc++.h>
using namespace std;
int main(){
   int t ;string s;int nu;
   cin >> t;
   stack<int>st;
    while(t--){
         cin >> s;
        if(s == "PUSH"){
           cin >> nu;
          st.push(nu);
        }
        else if(s == "POP" && st.empty() != 1){
            st.pop();
        }
        else if(s == "PRINT"){
            if(st.empty() == 1) cout <<"NONE\n";
            else{
             cout << st.top()<<endl;
            }
        }
        
    }
    return 0;
}
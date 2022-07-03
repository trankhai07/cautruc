#include<bits/stdc++.h>
using namespace std;
int main(){
  int x; cin >> x;
  string s;
  while(x--){
      cin >> s;
      int len = s.size();
      stack<int>st; st.push(-1);
      int Max = 0;
      for(int i = 0;i < len; i++){
          if(s[i] == '(')  st.push(i);
          else{
            st.pop();
              if(st.empty() != 1){
                 
                 Max = max(Max,i-st.top());
                 cout << i <<" " <<st.top() <<endl;
              }
              else{
               st.push(i);
              }
          }
      }
      cout << Max<<endl;
  }
}
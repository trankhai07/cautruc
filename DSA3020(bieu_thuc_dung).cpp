#include<bits/stdc++.h>
using namespace std;
void output(string s,int len){
    stack<char>st;
    int res =0,xoa=0;
  for(int i =0;i < len;i ++){
      if(st.size() == 0) st.push(s[i]);
      else if(st.top() == '[' && s[i] == ']'){
          xoa+=2;
          st.pop();
      }
      else if(st.top() == ']' && s[i] == '['){
          res += st.size() +xoa;
          st.pop();
      }
      else if(s[i] == '[' ) st.push(s[i]);
      else if(st.top()== ']' && s[i] == ']'){
          st.push(s[i]);
      }
      if(st.size() == 0) xoa= 0;
  }
  cout << res <<endl;
}
int main(){
    int x; string s;
    cin >> x;
    while(x--){
        cin >> s;
        int len =s.size();
        output(s,len);
    }
}
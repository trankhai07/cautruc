#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    while(x--){
      long long cn=0; string s;
      cin >> s;
      int vt=-1;
      for(int i = 0;i < s.size();i ++){
          if(s[i]-48 >= 2){
              vt = i;
              break;
          }
      }
      if(vt != -1){
          for(int i = vt; i < s.size() ;i++){
              s[i] = '1';
          }
      }
      reverse(s.begin(),s.end());
     for(int i = s.size()-1; i >= 0;i --){ 
         if(s[i] == '1'){
             cn+=pow(2,i);
         }
     }
        cout << cn <<endl;
    }
    return 0;
}
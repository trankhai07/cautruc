#include<bits/stdc++.h>
using namespace std;

  string sinh_nhi_phan(string &s){
      int x= s.size();
      int i = x-1;
       for(i;i >= 0;i -- ){
           if(s[i] == '0'){
               s[i] = '1';
           }
           else if(s[i] == '1'){
               s[i]='0'; break;
           }
       }
     
    return s;
  }
int main(){
    int n; cin >> n;
    
    while(n--){
        string s;
        cin >> s;
        cout << sinh_nhi_phan(s) <<endl;
       
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int  output(int n,string s){
    int k = n/2;
    if(n % 2 ) k+=1;
   int cn =0;
   for(int i = 0;i < n-1;i ++){
       cn =0;
       for(int j = i+1;j < n;j ++ ){
           if(s[i] == s[j]) cn ++;
       }
       if(cn > k) return -1;
   }
   return 1;
}
int main(){
    int x; cin >> x;
    while(x--){
        string s;
        cin >> s;
        int n = s.size();
       cout << output(n,s) <<endl;
    }
}
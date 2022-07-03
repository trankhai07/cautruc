#include<bits/stdc++.h>
using namespace std;

void output(long long a[],int x){
    set<int>s;
    for(int i = 0; i < x; i ++ ){
       cin >> a[i];
       long long t = a[i];
       while(t != 0){
           s.insert(t%10);
           t/=10;
       }
    }
    for(auto it : s) cout <<it <<" ";
}
int main(){
   int n; cin >> n;
   while(n--){
       int x; cin >> x;
       long long a[x+1];
       output(a,x);
       cout <<endl;
   }
   return 0;
}
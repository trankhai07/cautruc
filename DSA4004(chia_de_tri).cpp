#include<bits/stdc++.h>
using namespace std;
long long output(int n,long long  m){
    long long x = pow(2,n-1);
     if(m == x) return n; 
     if(m < x) return output(n-1,m);
     return output(n-1,m-x);
}
int main(){
 int x,n;
 long long m;
 cin >> x;
 while(x--){
     cin >> n >> m;
    cout << output(n,m) <<endl;
 }
 return 0;
}
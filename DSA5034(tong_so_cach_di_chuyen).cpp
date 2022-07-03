#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int main(){
   int x,n,m;
   cin >> x;
   while(x--){
       cin >> n >> m;
       long long a[n+1]; memset(a,0,sizeof(a));
       a[0]=a[1]=1;
       for(int i = 2;i <= n;i ++){
           for(int j = 1;j <= min (i,m);j ++)
              a[i]= (a[i] + a[i-j])%mod;
       }
       cout << a[n] <<endl;
   }
}
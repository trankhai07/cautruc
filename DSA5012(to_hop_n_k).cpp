#include<bits/stdc++.h>
using namespace std;
int mod =1000000007;
long long to_hop(int n,int m){
  int c[n+1][n+1];
  c[0][0] =1; 
  for(int i =1;i <= n;i ++ ){
      c[i][0] =1; c[i][i]=1;
      for(int j =1;j < i;j ++){
          c[i][j] = (c[i-1][j-1] %mod+c[i-1][j]%mod)%mod;
      }
  }
  return c[n][m];
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        cout << to_hop(n,m) <<endl;
    }
    return 0;
}
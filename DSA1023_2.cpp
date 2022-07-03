#include<bits/stdc++.h>
using namespace std;
int kq(int a[],int n,int m){
    int c[100][100]={0};
    for(int i = 0;i <= n; i ++ ){
        c[i][i] = 1; c[i][0] =1;
        for(int j = 1;j <= n;j ++ ){
           c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
  return c[n][m];
}
int cn = 0;
void to_hop(int a[],int n,int m){
    
    while(1){
        int i = m;
       while(a[i] == n-m+i && i > 0){
           i--;
       }
       if(i == 0) break;
       else {
       a[i]++;
       for(int j = i+1;j <= m;j ++ )
          a[j] = a[j-1] + 1;
       cn++;
       }
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m;
        cin >> n >> m;
        int a[n+1];
        for(int i = 1;i <= m;i ++ ) cin >> a[i];
        to_hop(a,n,m);
     cout <<kq(a,n,m)- cn<<endl;
    cn =0;
    }
    return 0;
}
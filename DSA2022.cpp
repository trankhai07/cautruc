#include<bits/stdc++.h>
using namespace std;
int Min = INT_MAX,sum=0,amin=INT_MAX;
void to_hop(int a[][16],int b[],int c[],int n,int j){
    if(sum + amin*(n-j+1) >= Min) return ;
    for(int i = 2;i <= n; i++ ){
        if(c[i] == 1){
            b[j] = i;
            c[i] =0;
            sum+=a[b[j-1]][b[j]];
            if(j == n){
                if(sum + a[b[n]][b[1]] < Min) Min = sum + a[b[n]][b[1]];
            }
            else to_hop(a,b,c,n,j+1);
            c[i] = 1;
            sum-=a[b[j-1]][b[j]];
        }
    }
}
int main(){
    int n; cin  >> n;
    int a[16][16];
     int b[n+1],c[n+1];
    for(int i = 1;i <= n;i ++ ){
        b[i] = i;
        c[i ]= 1;
        for(int j = 1;j <= n;j ++ ){
            cin >> a[i][j];
            if(amin > a[i][j] &&& a[i][j] != 0) amin = a[i][j];
        } 
    }
   to_hop(a,b,c,n,2);
  cout << Min;
   return 0;
}
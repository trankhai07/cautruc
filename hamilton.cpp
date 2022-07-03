#include<bits/stdc++.h>
using namespace std;
int check[100],b[100];
void hamilton(int a[][100],int n,int x,int z){
     for(int i = 1;i <= n;i ++){
         if(a[b[x-1]][i]){
             if(x == n+1 && i == z ) {
                 for(int i = 1;i <= n; i ++ ) cout << b[i] <<" ";
                 cout <<z<< endl;
             }
             else if(check[i] == 0){
                 check[i]=1;
                 b[x]=i;
                 hamilton(a,n,x+1,z);
                 check[i]=0;
             }
         }
     }
}
int main(){
    int x,n; cin >> x >> n;
    int a[100][100];
    for(int i = 1;i <= x;i ++ ){
        for(int j = 1;j <= x;j ++) cin >>a[i][j];
    }
    memset(check,0,sizeof(check));
    b[1] = n; check[n]=1;
    hamilton(a,x,2,n);
}
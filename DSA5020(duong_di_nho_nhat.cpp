#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
void output(int a[][1005],int n,int m){
   int c[505][505];
   c[1][1]=a[1][1];
   for(int i = 1; i<= n;i ++){
       for(int j = 1;j <= m;j ++){
             if(i == 1) c[i][j] = a[i][j] + c[i][j-1];   //    đi sang phải 
             else if(j == 1) c[i][j] = a[i][j]+c[i-1][j];   // đi lên trên 
            else if(i != 1 || j != 1)  c[i][j] = a[i][j] + min(c[i-1][j],min(c[i-1][j-1],c[i][j-1])); //  đi chéo  bởi vì kết thúc ở tại hàng n cột m
       }
   }
   cout << c[n][m] <<endl;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        //int a[1005][1005];
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++) cin >> a[i][j];
        }
        output(a,n,m);
    }
}
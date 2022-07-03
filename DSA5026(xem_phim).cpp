#include<bits/stdc++.h>
using namespace std;
int d[105][25005]={0};
void output(int a[],int m,int n){
    int res = INT_MIN;
    for(int i = 1;i <= n;i ++ ){
        for(int j = 1;j <= m;j ++ ){
            if(j < a[i]) d[i][j] = d[i-1][j];
            else{
                d[i][j] = max(d[i-1][j],d[i-1][j-a[i]] + a[i]);
            }
            res = max(res,d[i][j]);
        } 
    }
    cout <<res <<endl;
}
int main(){
    int m,n;
    cin >> m >> n;
    int a[n+1] = {0};
    for(int i = 1;i <= n; i ++ ) cin >> a[i];
    output(a,m,n);
}
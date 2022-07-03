#include<bits/stdc++.h>
using namespace std;

void output(int a[][101],int n,int m,int i,int j,int &kt){
    if(i >= n || j >= m) return;
    if(i == n-1 && j == m-1) kt++;
    if(i < n ) output(a,n,m,i+1,j, kt);
    if(j < m) output(a,n,m,i,j+1,kt);
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m; cin >> n >>m;
        int a[101][101];
        for(int i = 0;i < n;i ++ ){
            for(int j = 0;j < m;j ++ ) cin >> a[i][j];
        }
        int kt =0;
        output(a,n,m,0,0,kt);
        cout << kt;
        cout <<endl;
    }
    return 0;
}
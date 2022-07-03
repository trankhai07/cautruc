#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int b[n+1][n+1];
    for(int i = 0;i < n;i ++ ) b[1][i+1] = a[i];
    for(int i = 2;i <= n;i ++ ){
        for(int j = 1;j <= n-i+1; j ++ ){
            b[i][j] = b[i-1][j]+b[i-1][j+1];
        }
    }
    for(int i = 1;i <= n;i ++ ){
        cout <<"[";
        for(int j = 1;j <= n-i; j ++ ){
           cout << b[i][j]<<" ";
        }
        cout <<b[i][n-i+1]<<"]\n";
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        for(int i =0;i < n;i ++ ) cin >> a[i];
        output(a,n);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int kt = 0;
void output(int a[][15],int n,int i,int j,string s){
    if(i >= n || j >= n ) return ;
    if(i == n-1 && j == n-1 && a[i][j] == 1){
        cout << s <<" "; kt =1;
    }
    if(i < n && a[i][j] == 1){
        output(a,n,i+1,j,s+'D');
    }
    if(j < n && a[i][j] == 1) output(a,n,i,j+1,s+'R');
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1][15];
        for(int i = 0;i < n;i ++ ){
            for(int j = 0;j < n;j ++ ) cin >> a[i][j];
        }
        string s="";
        output(a,n,0,0,s);
        if(kt == 0) cout << "-1";
        cout <<endl;
        kt = 0;
    }
    return 0;
}
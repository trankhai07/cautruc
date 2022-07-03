#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void output(int a[][15],int b[][15],int n,int i,int j,string s){
    if( a[0][0] == 0 || a[n-1][n-1] == 0 || i < 0 || j < 0 || i >= n || j >= n) return ;
    if(i == n-1 && j == n-1 && a[i][j] == 1){
       v.push_back(s);
    }
    if(i < n && a[i][j] == 1 && b[i][j] != 1){
        b[i][j] = 1;
        output(a,b,n,i+1,j,s+'D');
        b[i][j] =0;
    }
    if(j < n && a[i][j] == 1 && b[i][j] != 1) {
        b[i][j] = 1;
        output(a,b,n,i,j+1,s+'R');
        b[i][j] =0;
    }
    if(i > 0 && a[i][j] == 1 && b[i][j] != 1 ){
        b[i][j] = 1;
        output(a,b,n,i-1,j,s+'U');
        b[i][j] =0;
    }
     if(j > 0 && a[i][j] == 1 && b[i][j] != 1 ){
        b[i][j] = 1;
        output(a,b,n,i,j-1,s+'L');
        b[i][j] = 0;
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1][15];
        int b[n+1][15];
        for(int i = 0;i < n;i ++ ){
            for(int j = 0;j < n;j ++ ){
               cin >> a[i][j]; 
               b[i][j] =0;
            } 
        }
        string s="";
        output(a,b,n,0,0,s);
        if(v.size() == 0) cout << "-1";
        sort(v.begin(),v.end());
      //  cout << v.size() <<" ";
        for(int i = 0;i < v.size();i++ ) cout << v[i] <<" ";
        v.clear();
        cout << endl;
    }
    return 0;
}
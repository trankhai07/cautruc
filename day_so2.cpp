#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
  vector<vector<int>>s;
    vector<int>c;
    int b[n+1][n+1];
    for(int i = 0;i < n;i ++ ){
        b[1][i+1] = a[i];
       c.push_back(a[i]);
    } 
    s.push_back(c);
    for(int i = 2;i <= n;i ++ ){
        vector<int>c2;
        for(int j = 1;j <= n-i+1; j ++ ){
            b[i][j] = b[i-1][j]+b[i-1][j+1];
           c2.push_back(b[i][j]);
        }
        s.push_back(c2);
    }
   for(int i = s.size()-1;i >= 0;i --){
       cout <<"[";
       for(int j = 0;j < s[i].size()-1 ; j ++ ){
           cout << s[i][j]<<" ";
       }
       cout << s[i][s[i].size()-1] <<"] ";
   }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        for(int i =0;i < n;i ++ ) cin >> a[i];
        output(a,n);
        cout <<endl;
    }
    return 0;
}
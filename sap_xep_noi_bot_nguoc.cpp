#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int kt,i ;
    vector<int>s[n+1];
    for( i = 0; i < n -1; i++ ){
        kt = 0;
        for(int j = 0;j < n-i-1;j ++ ){
           if(a[j] > a[j+1]){
               swap(a[j],a[j+1]);
               kt =1;
           }
        }
        if(kt == 0) break;
       for(int k = 0;k < n;k ++ ) s[i].push_back(a[k]);
    }
    int x = i;
    for(int t = i-1;t >= 0 ;t --){
          cout <<"Buoc "<<x--<<": ";
        for(int j = 0; j < n;j ++  ){
           cout << s[t][j] <<" ";
        }
        cout <<endl;
    }
   // cout << i ;
}
int main(){
    int x; cin >> x;
    while(x--){
    int n; cin >> n;
    int a[n+1];
    for(int i  = 0;i < n;i ++ ) cin >> a[i];
    output(a,n);
    }
    return 0;
}
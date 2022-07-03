#include<bits/stdc++.h>
using namespace std;
void output(int a[],int b[],int m,set<string>&v){
    string s ="";
    for(int i = 1;i <= m;i ++ ){
        char c = b[a[i]];
        s+=c;
    }
    v.insert(s);
}
void to_hop(int a[],int n,int m,int j,int b[],set<string>&v){
    for(int i = a[j-1]+1;i <= n-m+j;i ++ ){
        a[j] = i;
        if(j == m) {
          output(a,b,m,v);
        }
        else to_hop(a,n,m,j+1,b,v);
    }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
    cin >> n>> m;
    int a[n+1],b[n+1];
    a[0] =0;set<string>v;
    int x =65;
    for(int i = 1;i <= n;i ++ ) {
       a[i] = i;
       b[i] = x++;
    }
    to_hop(a,n,m,1,b,v);
    for(auto it : v) cout << it <<endl;
    }
    return 0;
}
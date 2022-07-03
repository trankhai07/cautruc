#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int b[],int m){
    for(int i = 1;i < m;i ++ ){
        if(a[b[i]] > a[b[i+1]]) return false;
    }
    return true;
}
int cn =0;
void to_hop_chapm(int a[],int b[],int n,int m,int j){
    for(int i = b[j-1] + 1;i <= n-m+j; i++){
        b[j] = i;
        if(j == m){
            if(check(a,b,m)) cn++;
        }
        else to_hop_chapm(a,b,n,m,j+1);
    }
}
int main(){
    int n,m; cin >> n >> m;
    int a[n+1],b[n+1];
    b[0] = 0;
    for(int i = 1;i <= n;i ++ ) {
        cin >> a[i];
        b[i] = i;
    }
    to_hop_chapm(a,b,n,m,1);
    cout << cn ;
    return 0;
}
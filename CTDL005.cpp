#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n;
    int a[n+1];
    for(int i = 0;i < n;i ++) cin >> a[i];
    cin >> m;
    for(int i = 0;i < n;i ++ ){
        if(m != a[i] ) cout <<a[i] <<" ";
    }
    return 0;
}
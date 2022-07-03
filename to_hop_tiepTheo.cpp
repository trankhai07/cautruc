#include<bits/stdc++.h>
using namespace std;
int sinh(int a[],int b[],int c[],int n,int m){
    int j = m;
    while(a[j] == n-m+j && j > 0) j--;
    if(j == 0) return m;
    a[j] ++;
    for(int i = j +1;i <= m; i ++ ) {
        a[i]= a[i-1] +1;
    }
    int cn =0;
    for(int i = 1;i <= m; i++ ) b[a[i]]++;
    for(int i = 1;i <= m; i++  ) {
        if(b[c[i]] != 0) cn ++;
    }
    return m-cn;
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m;
        cin >> n >> m;
        int a[n+1],b[45]={0},c[n+1];
        for(int i = 1;i <= m;i ++ ){
            cin >> a[i] ;
            c[i] = a[i];
        }
        cout << sinh(a,b,c,n,m) << endl;
    }
    return 0;
}
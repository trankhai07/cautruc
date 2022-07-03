#include <bits/stdc++.h>
using namespace std;
int quay_lui(int n,int x[]){
    if(n ==  1) return 0;
    if(x[n] != -1) return x[n];
   int  apart = quay_lui(n-1, x );
    if(n % 2 == 0) apart=min(quay_lui(n/2,x),apart);
    if(n % 3 == 0) apart =min(quay_lui(n/3,x),apart);
    x[n] = 1+apart;
    return apart + 1;
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >>n;
        int x[n+1];
        for(int i = 0;i <= n;i ++ ) x[i] =-1;
        cout << quay_lui(n,x)<<endl;
    }
}
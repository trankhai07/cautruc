#include<bits/stdc++.h>
using namespace std;
struct MaTran{
 long long c[2][2];
};
int mod = 1000000007;
MaTran operator*(MaTran a,MaTran b){
    MaTran res;
    for(int i = 0;i <= 1;i ++){
        for(int j =0;j <= 1;j ++){
            res.c[i][j] =0;
            for(int k =0; k <= 1;k ++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k]*b.c[k][j])%mod;
            }
        }
    }
    return res;
}
MaTran mu(MaTran a,int n){
    if(n == 1) return a;
    MaTran p = mu(a,n/2);
    if(n%2 == 0) return p*p;
     return a*p*p;
}
int main(){
    int n,x;
    cin >> x;
    while(x--){
        cin >> n;
        MaTran a;
        a.c[0][0] =1; a.c[0][1] =1; a.c[1][0] =1; a.c[1][1] =0;
        MaTran b= mu(a,n);
        cout << b.c[1][0] <<endl;
    }
}
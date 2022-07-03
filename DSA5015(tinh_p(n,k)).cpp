#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        long long  res = 1;
       if(m > n) res = 0;
        for(int i = n-m+1;i <= n;i ++){
            res = (res%mod*i%mod)%mod;
        }
        cout <<res <<endl;
    }
}
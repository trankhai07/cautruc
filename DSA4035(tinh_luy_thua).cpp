#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
long long tinh(long long a,long long  b){
    if(b == 0) return 1;
    if(b == 1) return a%mod;
    long long tmp = tinh(a,b/2);
    if(b % 2 != 0) return ((tmp*tmp)%mod*a)%mod;
    else return (tmp*tmp)%mod;
}
int main(){
    int n =20;
    while(n--){
        long long  a,b; 
        cin >> a >> b; 
        if(a == 0 && b == 0) break;
        else cout << tinh(a,b) <<endl;
    }
    return 0;
}
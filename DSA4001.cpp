#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
/*long long mul(long long a,long long b){
    if(b == 0) return 0;
    long long tmp = mul(a,b/2);
    if(b % 2 != 0) return (tmp*2+a)%mod;
    else return tmp*2%mod;
}
long long output(int n,int m){
    if(m  == 0) return 1;
    if(m == 1) return n%mod;
    long long tmp = output(n,m/2);
    long long x= mul (tmp,tmp);
    if(m % 2 == 0) return x%mod;
    else return n*x%mod;
}*/
long long output(long long m,long long n){
    if(n ==1 ) return m%mod;
    long long tmp = output(m,n/2);
    if(n%2 == 0) return (tmp*tmp)%mod;
    else return (((tmp*tmp)%mod)*m)%mod;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
       cout << output(n,m) <<endl;
    }
    return 0;
}
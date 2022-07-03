#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
/*long long mul(long long a,long long b){
    if(b == 0) return 0;
    long long tmp = mul(a,b/2);
    if(b % 2 != 0)  return (2*tmp+a)%mod;
    else return tmp*2%mod;
}
long long output(long long m,long long n ){
     if(n == 0) return 0;
    if(n == 1) return n%mod;
     long long tmp = output(m,n/2);
     long long x= mul(tmp,tmp);
     if(n % 2 != 0) return m*x%mod;
     else return x%mod;
}*/
long long output(long long m,long long n){
    if(n ==1 ) return m%mod;
    long long tmp = output(m,n/2);
    if(n%2 == 0) return (tmp*tmp)%mod;
    else return (((tmp*tmp)%mod)*m)%mod;
}
int main(){
    long long x,n;
    cin >> x;
    while(x--){
        cin >> n;
        long long m=0,t=n;
        while(t != 0){
            m=m*10+t%10;
            t/=10;
        }
       // cout << m << n  <<endl;
        cout << output(n,m) <<endl;
    }
}
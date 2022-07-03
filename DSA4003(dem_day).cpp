#include<bits/stdc++.h>
using namespace std;
int  mod = 123456789;          // áp dụng công thức 2^(n-1)
long long tinh(long long n,long long k){
    if(k == 0) return 1;
    if(k == 1) return n%mod;
    long long tmp = tinh(n,k/2);
    if(k % 2 == 0) return (tmp*tmp)%mod;
     return (tmp*tmp)%mod*n%mod;
}
int main(){
    long long  x,n;
    cin >> x;
    while(x--){
        cin >> n;
        cout << tinh(2,n-1)<<endl;
    }
    return 0;

}
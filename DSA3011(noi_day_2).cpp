#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
void output(long long  a[],int n){
    long long sum =0,money1,money2;
    priority_queue<long long ,vector<long long>,greater<long long>>q;
     for(int i = 1;i <= n;i ++ ){
         cin >> a[i];
         q.push(a[i]);
     } 
    while(1){
        money1 = q.top(); q.pop();
        money2 = q.top(); q.pop();
        q.push((money1%mod + money2%mod)%mod);
        sum = (sum%mod + money1%mod +money2%mod)%mod;
         if(q.size() == 1) break;
    }
    cout << sum <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        long long  a[n+1];
        
        output(a,n);
    }
    return 0;
}
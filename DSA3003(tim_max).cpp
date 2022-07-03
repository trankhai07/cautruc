#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        multiset<int>m;
        for(int i = 1;i <= n;i ++ ){
            cin >> a[i];
          m.insert(a[i]);
        }
        int j = 0;long long sum=0;
        for(auto it : m){
           sum+=(it*j)%mod;
           j++;
        }
        cout << sum%mod <<endl;
    }
}
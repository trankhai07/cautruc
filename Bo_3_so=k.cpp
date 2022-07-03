#include<bits/stdc++.h>
using namespace std;
bool output(long long a[],long long n,long long m){
    for(int i = 0;i < n-1;i ++ ){
        long long s1 = m - a[i];
        unordered_set<long long>s;
        for(int j = i + 1; j < n;j ++ ){
            long long s2 = s1-a[j];
            if(s.find(s2) != s.end()) {
                return true;
            }
          s.insert(a[j]);   
        }
       
    }
    return false;
}
int main(){
    int x; cin >>x;
    while(x--){
        long long n,m;
        cin >> n >> m;
        long long  a[n+1];
        for(int i = 0;i < n;i ++ ) cin >> a[i];
        if(output(a,n,m)) cout <<"YES\n";
       else cout <<"NO\n";
    }
    return 0;
}
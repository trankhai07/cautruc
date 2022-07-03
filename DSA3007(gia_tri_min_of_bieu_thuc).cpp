#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        priority_queue<long long,vector<long long>,greater<long long >> q1;
        long long  a[n+1],b[n+1];
        for(int i = 1;i <= n;i ++ ) cin >> a[i];
        for(int i = 1;i <= n;i ++ ) {
            cin >> b[i];
            q1.push(b[i]);
        }
        sort(a+1,a+n+1,greater<long long >());
        long long sum = 0;
        for(int i = 1;i <= n;i ++ ){
           sum+=(a[i]*q1.top()); q1.pop();
        }
        cout <<sum <<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        long long a[n+1];
        priority_queue<long long,vector<long>,greater<long long>>q;
        for(int i = 1;i <= n;i ++) {
            cin >> a[i];
            q.push(a[i]);
    }
    long long money1 ,money2 ,sum=0;
          while( 1){
             money1 = q.top(); q.pop();
             money2 = q.top();  q.pop();
            
               q.push(money1 + money2);
               sum+=(money1+money2);
               if(q.size() == 1) break;
        }
        cout <<sum <<endl;
    }
}
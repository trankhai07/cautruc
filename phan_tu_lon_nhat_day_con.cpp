#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        multiset<int>ml;
        int a[n+1];
        for(int i = 1;i <= n; i ++) cin >> a[i];
        for(int i = 1;i <= m;i ++) ml.insert(a[i]);
        for(int i = m+1;i <= n;i ++){
            cout <<*ml.rbegin() <<" ";
            ml.erase(ml.find(a[i-m]));
            ml.insert(a[i]);
        }
        cout << *ml.rbegin() <<endl;
    }

}
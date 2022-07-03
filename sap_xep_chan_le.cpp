#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n+1];
    vector<int>le,chan;
    for(int i = 1;i <= n; i++ ){
        cin >> a[i];
        if(i % 2 == 0) chan.push_back(a[i]);
        else le.push_back(a[i]);
    }
    sort(le.begin(),le.end());
    sort(chan.begin(),chan.end(),greater<int>());
    int x=0,y=0;
    for(int i = 1; i<= n;i ++ ){
        if(i % 2 == 0){
            cout << chan[x++]<<" ";
        }
        else cout << le[y++]<<" " ;
    }
    
    return 0;
}
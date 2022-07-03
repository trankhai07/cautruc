#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        set<int>se;
        for(int i = 1;i <= n;i ++){
            int a,b; char c;
            cin >> a >>  b >> c; 
            se.insert(a); se.insert(b);
        }
        for(auto it : se) cout  << it <<" ";
        cout << endl;
    }
    return 0;
}
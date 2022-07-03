#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    int n; cin >> n;
    for(int i = 0;i < n;i ++ ) {
        int x; cin >> x;
        s.insert(x);
    }
    for(auto it : s) cout << it <<" ";
}
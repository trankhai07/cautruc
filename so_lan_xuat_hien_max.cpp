#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        map<int,int>mp;
        for(int i = 0;i < x;i ++ ){
            int c; cin >> c;
            mp[c]++;
        }
        int Max = INT_MIN,t = -1;
        for(auto it : mp){
            if(it.second > Max && it.second > x/2) {
                Max = it.second;
                t = it.first;
            }
        }
        if(t != -1)
        cout << t <<endl;
        else cout << "NO\n";
    }
    return 0;
}
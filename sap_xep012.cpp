#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
        vector<int>s0,s1,s2;
        for(int i =0 ;i < x;i ++){
            cin >> a[i];
            if(a[i] == 0) s0.push_back(a[i]);
            else if(a[i] == 1) s1.push_back(a[i]);
            else if(a[i] == 2) s2.push_back(a[i]);
        }
        for(int i = 0;i < s0.size(); i++ ) cout << s0[i] <<" ";
        for(int i = 0;i < s1.size(); i++ ) cout << s1[i] <<" ";
        for(int i = 0;i < s2.size(); i++ ) cout << s2[i] <<" ";
        cout <<endl;
    }
    return 0;
}
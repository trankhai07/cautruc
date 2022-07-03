#include<bits/stdc++.h>
using namespace std;
void output(string s,int le,int n){
    map<char,int>mp;
    for(int i = 0;i < le;i ++ ){
        mp[s[i]]++;
    }
    int Max = INT_MIN;
    for(auto it : mp){
        if(it.second > Max) Max = it.second ;
    }
   int kc = (Max -1 )*(n-1);
   if(kc > le - Max) cout << "-1\n";
   else cout <<"1\n";
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        string s; cin >> s;
        int le = s.size();
        output(s,le,n);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        string s; 
        cin >> s;
        map<char,int>mp;
        for(int i = 0;i < s.size();i ++ ){
            mp[s[i]]++;
        }
        priority_queue<int,vector<int>,less<int>>q;
        for(auto it :mp){
            q.push(it.second);
        }
        while(n--){
            int k =q.top()-1; q.pop();
            q.push(k);
        }
        long long sum =0;
        while(q.empty() != 1){
            sum+=pow(q.top(),2);
            q.pop();
        }
        cout << sum <<endl;
    }
}
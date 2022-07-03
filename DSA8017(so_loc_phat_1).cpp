#include<bits/stdc++.h>
using namespace std;
long long creat(string s){
    long long sum =0;
    for(int i = 0;i < s.size(); i++) sum=sum*10+(s[i]-'0');
    return sum;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        long long len = 0;
        for(int i = 1;i <= n;i ++){
            len+=pow(2,i);
        }
        vector<long long>v;
        queue<string>q;
        q.push("6");
        q.push("8");
      while(len--){
          string s = q.front();
          q.pop();
          q.push(s+"6");
          q.push(s+"8");
          long long number = creat(s);
          v.push_back(number);
      }
      sort(v.begin(),v.end(),greater<long long>());
      for(int i = 0;i < v.size();i++) cout << v[i] <<" ";
      cout << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
long long  creater(string s){
    long long sum =0;
    for(int i = 0;i < s.size(); i++){
        sum = sum*10+ (s[i]-48);
    }
    return sum;
}
void output(int len){
    queue<string>q;
    q.push("6"); q.push("8");
    vector<long long>v;
    while(len--){
        string s = q.front(); q.pop();
        q.push(s+"6");
        q.push(s+"8");
        long long number = creater(s);
        v.push_back(number);
    }
    sort(v.begin(),v.end(),greater<long long >());
    for(int i = 0;i < v.size();i ++) cout << v[i] <<" ";
}
int main(){
    int x,n;
    cin >> x ;
    while(x--){
        cin >> n;
        int len =0;
        for(int i = 1;i <= n;i ++){     // cộng để tìm số lượng xâu ( công thức 2^n)
            long long s = 1;
             for(int j = 1;j <= i;j ++){
                 s*=2;
             }
             len+=s;
        }
        cout << len <<endl;
        output(len);
        cout << endl;
    }
    return 0;
}
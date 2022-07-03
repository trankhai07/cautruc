#include<bits/stdc++.h>
using namespace std;
void output(string s,long long  x){
    int f[15];
    f[0] = s[0]-'0';
    long long sum=f[0];
    for(int i = 1;i < x;i ++){
        f[i] = f[i-1]*10 + i*(s[i]-'0') + s[i]-'0'; // công thức f[i] = f[i-1]*10 + s[i] + i *s[i];
        sum+=f[i];
    }
    cout << sum <<endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        string s;
        cin >> s;
        long long  x=s.size();
        output(s,x);
    }
}
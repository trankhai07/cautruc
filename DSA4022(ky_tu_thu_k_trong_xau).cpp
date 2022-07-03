#include<bits/stdc++.h>
using namespace std;
long long output(long long n,long long m){
    long long x = pow(2,n-1);
    if(m == x) return n;
    if(m < x) return output(n-1,m);
    return output(n-1,m-x);
}
int main(){
    long long x,n,m;
    cin >> x;
    char s[27];
    int j =1;
    for(int i = 65;i < 91;i ++ ){
        s[j] = i;
        j++;
    }
    while(x--){
        cin >> n >> m;
        cout << s[output(n,m)] <<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int m){
    int sum1=0,sum2=0;
    for(int i = 1;i <= m;i ++ ) sum1+=a[i];
    for(int i = m+1; i <= n;i ++ ) sum2+=a[i];
    int sum = sum2-sum1;
    cout << sum <<endl;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int a[n+1];
        for(int i = 1;i <= n;i ++) cin >> a[i];
        sort(a+1,a+n+1);
        int x =min(m,n-m);
        output(a,n,x);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int cn = 0;
void output(int a[],int n,int mu){
    cn++;
    for(int i = 1;i <= n;i ++){
        if(a[i] ==0) cout << 'A';
        else cout << "B";
    }
    if(cn != mu)
    cout << ",";
}
void sinh(int n,int a[],int j,int mu){
    for(int i = 0;i <= 1;i ++){
        a[j]=i;
        if(j == n) output(a,n,mu);
        else sinh(n,a,j+1,mu);
    }
}
int main(){
    int x,n;
    cin >> x ;
    while(x--){
        cin >> n;
        int a[n+1];
        int mu =pow(2,n);
        sinh(n,a,1,mu);
        cn =0;
        cout << endl;
    }
}
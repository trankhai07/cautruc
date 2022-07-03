#include<bits/stdc++.h>
using namespace std;
void output(int a[],int b[],int n){
        for(int i = 1;i <= n;i ++ ) cout <<a[b[i]] <<" ";
        cout << endl;
}
void quay_lui(int a[],int b[],int n,int m,int j){
    for(int i = b[j-1] +1;i <= n-m+j;i ++){
        b[j]= i;
        if(j == m)output(a,b,m);
        else quay_lui(a,b,n,m,j+1);
    }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int a[n+1],b[n+1];
        b[0]=0;
        for(int i = 1;i <= n;i ++ ){
            b[i] =i;
            cin >> a[i]; 
        }
        sort(a+1,a+n+1);
        quay_lui(a,b,n,m,1);
    }
}
#include<bits/stdc++.h>
using namespace std;
int cn =0;
void quay_lui(int c[],int h[],int xuoi[],int nguoc[],int n,int j){
    for(int i = 1;i <= n; i++ ){
        if(c[i] != 1 && h[j] != 1 && xuoi[i+j-1] != 1&& nguoc[i-j+n] != 1 ){
            c[i] = h[j] = xuoi[i+j-1] = nguoc[i-j+n]  =1;
            if(j == n) cn++;
            else quay_lui(c,h,xuoi,nguoc,n,j+1);
            c[i] = h[j] =  xuoi[i+j-1] = nguoc[i-j+n] = 0;
        }
    }
}
int main(){
    int x; cin  >> x;
    while(x--){
        int n; cin >> n;
        int c[100],h[100],xuoi[100],nguoc[100];
        memset(c,0,100); memset(h,0,100);
        memset(xuoi,0,100); memset(nguoc,0,100);
        quay_lui(c,h,xuoi,nguoc,n,1);
        cout << cn <<endl;
        cn =0;
    }
    return 0;
}
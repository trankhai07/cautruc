#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,string s ){
    for(int i = 1;i <= n;i ++ ){
        cout << s[a[i]-1];
    }
    cout <<" ";
}
void sinh_hoanvi(int a[],int b[],int n,string s,int j){
    for(int i = 1;i <= n;i ++ ){
        if(b[i] == 1){
            a[j] = i;
            b[i]= 0;
            if(j == n) output(a,n,s);
            else sinh_hoanvi(a,b,n,s,j+1);
            b[i] = 1;
        }
    }
}
int main(){
    int n; cin >>n;
    while(n--){
        string s; cin >> s;
        int n = s.size();
        int a[n+1],b[n+1];
        for(int i = 1;i <= n;i ++ ){
              a[i] =i; b[i] =1;
        }
        sinh_hoanvi(a,b,n,s,1);
        cout <<endl;
    }
    return 0;
}
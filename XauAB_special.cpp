#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void creat(int a[],int n,int m){
    int t=0,h=0;
    string s="";
    for(int i = 1;i <= n;i ++ ){
        if(a[i] == 0 && a[i+1] == 0) t++;
        else if(t == m -1 && a[i] != a[i+1]){
            h++; t= 0;
        }
        else t =0;
    }
    if(h == 1){
        for(int i = 1;i <= n;i ++ )
         if(a[i] == 0) s+='A';
         else s+='B';
         v.push_back(s);
    }
}
void output(int a[],int n,int m,int j){
    for(int i = 0;i <= 1;i ++ ){
        a[j] = i;
        if(j == n){
            creat(a,n,m);
        }
        else output(a,n,m,j+1);
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    int a[n+1];
    output(a,n,m,1);
    cout << v.size()<<endl;
    for(int i = 0;i < v.size();i ++) cout << v[i]<<endl;
    return 0;
}
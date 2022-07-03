#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x,set<string>&v){
    string s="";
     if(a[1] == 0 && a[x] == 1){
        int kt= 0;
        for(int i = 1 ;i < x;i ++ ){
            if(a[i] == 0 && a[i+1] == 0){
                kt =1;
                break;
            }
        }
        if(kt == 0){ 
            for(int i = 1;i <= x;i ++ ){
                if(a[i] == 0) s+='H';
                else s+='A';
             }
             v.insert(s);
        }
    }
}
void creat(int a[],int x,int j,set<string>&v){
    for(int i = 0;i <= 1;i ++ ){
        a[j] = i;
        if(j == x) output(a,x,v);
        else creat(a,x,j+1,v);
    }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x ;
        int a[x+1]; set<string>v;
        for(int i = 1;i <= x; i++ ) a[i] =i;
        creat(a,x,1,v);
       for(auto it : v) cout << it <<endl;
    }
    return 0;
}
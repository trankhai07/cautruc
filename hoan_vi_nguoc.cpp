#include<bits/stdc++.h>
using namespace std;

void sinh_hoanvi(int a[],int n,vector<vector<int>>&s){
    int i,kt =0; 
    while(1){
        for(i = n;i >= 1;i--){
            if(i == 1) {
                kt = 1;
                break;
            }
            if(a[i] > a[i-1]) break;
        }
        if(kt == 1) break;
        for(int j = n; j >= i;j --){
            if(a[j] > a[i-1]){
                swap(a[j],a[i-1]);
                sort(a + i, a + n + i);
                vector<int>y;
                for(int l = 1;l <= n;l ++ ) y.push_back(a[l]);
                s.push_back(y);
                break;
            }
        }
    }
    for(int l= s.size()-1;l >= 0;l --){
        for(int j =0;j < n;j++) cout <<s[l][j];
        cout <<" ";
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        vector<vector<int>>s;
        vector<int>l;
        for(int i = 1;i <= n;i ++ ){
            a[i] = i;
            l.push_back(a[i]);
        } 
        s.push_back(l);
        sinh_hoanvi (a,n,s);
        cout <<endl;
    }
    return 0;
}
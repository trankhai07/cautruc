#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void output(int a[],string s,int n){
    string s1="";
    for(int i = 1; i <= n;i ++ ){
        if(a[i] == 1)s1+=s[i-1];
    }
    if( s1.size() != 0)
    v.push_back(s1);
}
void quay_lui(int a[],int n,string s,int j){
    for(int i =0;i <= 1;i ++ ){
        a[j] =i;
        if(j == n) output(a,s,n);
        else quay_lui(a,n,s,j+1);
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        string s;
        cin >> s;
        int a[n+1];
        quay_lui(a,n,s,1);
        sort(v.begin(),v.end());
        for(int i = 0;i < v.size();i ++ ){
            cout << v[i] <<" ";
        }
        v.clear();
        cout <<endl;
    }
}
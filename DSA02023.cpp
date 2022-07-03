#include<bits/stdc++.h>
using namespace std;
set<string>v;
void output(string s[],int n,int a[]){
    string k="";
    for(int i = 1;i <= n;i ++){
        k+= (s[a[i]-1] + ' ');
    }
    v.insert(k);
}
void dat_ten(string s[],int a[],int n,int m,int j){
   for(int i = a[j-1] +1 ;i <= n-m+j;i ++ ){
            a[j] = i;
            if(j == m) output(s,m,a);
            else dat_ten(s,a,n,m,j+1);
   }
}
int main(){
    int n,m;
    cin >> n >> m;
    string s[n+1];
    int a[n+1];
    a[0]=0; set<string>t;
    for(int i = 0;i < n;i ++ ){
        string k;
        cin >> k;
        t.insert(k);
    }
    int j =0;
    for(auto i : t) {
        s[j] = i;
        a[j+1] =j+1;
        j++;
    }
    dat_ten(s,a,j,m,1);
    for(auto it : v) cout << it<<endl; 
    return 0;
}
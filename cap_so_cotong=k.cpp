#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int m,map<int,int>mp){
    int cn = 0;
   for(int i =0;i < n;i ++ ){
    if(mp.find(m-a[i]) != mp.end()){
       
        cn+=mp[m-a[i]];
    } 
    mp[a[i]]++;
   }
   cout << cn;
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m;
        cin >> n >> m;
        int a[n+1]; map<int,int>mp;
        for(int i = 0;i < n; i ++ ) {
            cin >> a[i];
          //  mp[a[i]]++;
        }
        output(a,n,m,mp);
        cout << endl;
    }
    return 0;
}
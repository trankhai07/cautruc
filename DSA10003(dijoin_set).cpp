#include<bits/stdc++.h>
using namespace std;
int parent[1005],s[1005];
int kt =0;
void make_set(int n){    // không dùng cho đồ thị có hướng 
    for(int i = 1;i <= n;i ++){
        parent[i] =i;
        s[i] = 1;
    }
}
int Find(int x){
    if(x == parent[x]) return x;
    return parent[x] = Find(parent[x]);
}
void Union(int a,int b){
    a = Find(a);
    b = Find(b);
  if(a == b){
      kt = 1;
      return ;
  } 
  if(s[a] < s[b]) swap(a,b);
  parent[b] = a;
  s[a] += s[b];
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
      make_set(n);
       for(int i= 1;i <= m;i ++){
           int k,h; cin >> k >> h;
          Union(k,h);
       }
       if(kt == 0) cout <<"NO\n";
       else cout << "YES\n";kt =0;
    }
}
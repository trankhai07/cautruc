#include<bits/stdc++.h>
using namespace std;
struct edge{
 int a,b,t;
};
vector<edge>c;
int k = INT_MAX;
bool bellmanford(int source,int n){
    int b[n];
    for(int i = 1;i <= n;i ++){
       b[i] = k;
    }
    b[source] = 0;
    int h =n,u,v,w;
    int o=0;
    while (h--)
    {
         cout <<"lan: "<< o<<endl;
       for(int i = 0;i < c.size();i ++){
        u = c[i].a; v=c[i].b; w = c[i].t;
        if(b[u] != k && b[u]+w < b[v]){
            b[v] = w + b[u];
            cout << v<<":"<<w+b[u]<<endl;
        }
        }  o++;
    }
   
    for(edge p : c){
             u = p.a; v = p.b; w = p.t;
            if(b[u] != k && b[u]+w < b[v] ) return true;
        }
        return false;
}
bool check(int n,int m){
    for(int i = 1;i <= n;i ++){
        if(bellmanford(i,n)) return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 int x,n,m;
 cin >> x;
 while(x--){
     cin >> n >> m;
     for(int i =1;i <= m;i ++){
         int u,v,z; cin >> u >> v >> z;
         c.push_back({u,v,z});
       //  c.push_back({})
     }
     cout << check(n,m) <<endl;
     c.clear();
 }
}
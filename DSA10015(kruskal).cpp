#include<bits/stdc++.h>
using namespace std;
int n,m;
int parent[1005],sz[1005];
struct edge{
 int dinh,cuoi,trongso;
};
vector<edge>canh;
void make_set(){
    for(int i = 1;i <= n;i ++){
        parent[i] = i;
        sz[i] =1;
    }
}
int Find(int a){
    if(a == parent[a]) return a;
    return parent[a] = Find(parent[a]);
}
bool Union(int a,int b){
    a = Find(a); 
    b = Find(b);
    if(a == b) return false;
    if(sz[a] < sz[b]) swap(a,b);
    parent[b] = a;
    sz[a] +=sz[b];
    return true;
}
void kruskal(){
    int d=0;
    for(int i = 0;i < canh.size();i ++){
        edge e = canh[i];
        if(Union(e.dinh,e.cuoi)) d+=e.trongso;
    }
    cout << d <<endl;
}
bool cmp(edge a,edge b){
   if(a.trongso < b.trongso) return true;
   return false;
}
void input(){
    cin >> n >> m;
   edge e ; make_set();
   for(int i = 1;i <= m;i ++){
       int x,y,z;
       cin >> x >> y >> z;
       e.dinh = x; e.cuoi = y; e.trongso = z;
       canh.push_back(e);
   }
   sort(canh.begin(),canh.end(),cmp);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x; cin >> x;
    while(x--){
        input();
        kruskal();
        canh.clear();
    }
}
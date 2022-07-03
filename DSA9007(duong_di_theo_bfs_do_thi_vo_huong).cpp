#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>t[],int u,int v,int check[],int c[]){
   queue<int>q;
   q.push(u);
   check[u] = 1;
   while(q.empty() != 1){
       int d = q.front();
       q.pop();
       for(int i = 0;i < t[d].size();i ++){
           if(check[t[d][i]] == 0){
               c[t[d][i]] = d;
               check[t[d][i]] = 1;
               q.push(t[d][i]);
           }
       }
   }
}
void output(int c[],int u,int v){
     if(c[v] == 0) cout <<"-1\n";
     else {
         vector<int>re;
         while(u != v){
             re.push_back(v);
             v = c[v];
         }
         reverse(re.begin(),re.end());
         cout << u <<" ";
         for(int i =0;i < re.size();i ++) cout << re[i] <<" ";
         cout << endl;
     }
}
int main(){
    int x,n,m,u,v;
    cin >> x;
    while(x--){
        cin >> n >> m >> u >> v;
        vector<int>t[1005];
        int c[1005];
        int check[1005];memset(check,0,sizeof(check));
        memset(c,0,sizeof(c));
        for(int i = 1;i <= m;i ++){
            int k,h;
            cin >> k >> h;
            t[k].push_back(h);
            t[h].push_back(k);
        }
        bfs(t,u,v,check,c);
         output(c,u,v);
    }
}
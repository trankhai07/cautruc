#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>v[],int j,int t,int b[],int c[]){
    queue<int>q;
    q.push(j);
    //cout << j <<" ";
    b[j]=1;
    while(q.empty() != 1){
        int x = q.front();
        q.pop();
        if(x ==  t) return ;
        for(int i = 0;i < v[x].size();i ++){
            if(b[v[x][i]] == 0){
               c[v[x][i]] = x;
                b[v[x][i]] =1;
                q.push(v[x][i]);
            }
        }
    }
    
}
void output(int c[],int s,int t){
    vector<int>ct;
    if(c[t] == 0) cout <<"-1";
    else{
        while(s != t){
            ct.push_back(t);
            t = c[t];
        }
        ct.push_back(s);
        reverse(ct.begin(),ct.end());
        for(int i = 0;i < ct.size();i ++) cout << ct[i] <<" ";
    }
}
int main(){
    int x,n,m,s,t;
    cin >> x;
    while(x--){
        cin >> n >>m >> s >>t;
        vector<int>v[1005];
        int b[n+1],c[n+1];
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        for(int i = 1;i <= m;i ++ ){
            int k,y; cin >> k >> y;
           v[k].push_back(y);
        }
       bfs(v,s,t,b,c);
       output(c,s,t);
       cout << endl;
    }
    return 0;
}
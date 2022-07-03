#include<bits/stdc++.h>
using namespace std;
int a[100][100],b[100];
vector<int>s[100];
void dfs(int j){
    b[j]=1;
    stack<int>t;
    t.push(j);
    while(t.empty() != 1){
        int x = t.top();
        t.pop();
        for(int i = 0;i < s[x].size();i ++){
            if(b[s[x][i]] == 0){
                if(s[x][i] > x) cout << x <<" "<<s[x][i] <<endl;
                else cout << s[x][i] <<" "<<x <<endl;
                b[s[x][i]] = 1;
                t.push(x);
                t.push(s[x][i]);
                break;
             }
        }
    }
}
void bfs(int j){
    b[j]=1;
    queue<int>q;
    q.push(j);
    while(q.empty() != 1){
        int x = q.front();
        q.pop();
        for(int i = 0;i < s[x].size();i ++){
            if(b[s[x][i]] == 0){
                if(s[x][i] > x) cout << x <<" "<<s[x][i] <<endl;
                else cout << s[x][i] <<" "<<x<<endl;
                b[s[x][i]] = 1;
                //q.push(x);
                q.push(s[x][i]);
               // break;
            }
        }
    }
}
int main(){
    int x,n;
    cin >> x >> n;
    memset(b,0,sizeof(b));
    for(int i = 1;i <= x;i ++){
        for(int j = 1;j <= x;j ++ ){
            cin >> a[i][j];
            if(a[i][j] == 1){
                s[i].push_back(j);
                s[j].push_back(i);
            }
        }
    }
    cout <<"DFS tree\n";
    dfs(n);
    memset(b,0,sizeof(b));
    cout <<"BFS tree\n";
    bfs(n);
}
#include<bits/stdc++.h>
using namespace std;
int a[100][100],b[100];
vector<int>s[100];
vector<pair<int,int>>p;
void dfs(int j){
    b[j]=1;
    for(int i = 0;i < s[j].size();i ++){
        if(b[s[j][i]] == 0){
            if(s[j][i] > j) p.push_back({j,s[j][i]});
           else  p.push_back({s[j][i],j});
            dfs(s[j][i]);
        }
    }
}
int main(){
    int x,n;
    cin >> x >> n;
    memset(b,0,sizeof(b));
    for(int i = 1;i <= x;i ++){
        for(int j = 1;j <= x;j ++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                s[i].push_back(j);
                s[j].push_back(i);
            }
        }
    }
    dfs(n);
    cout<<"DFS tree\n";
    for(int i = 0;i < p.size();i ++){
        cout << p[i].first <<" "<<p[i].second <<endl;
    }
}
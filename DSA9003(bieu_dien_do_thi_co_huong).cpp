#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        vector<int>v[1005];
        for(int i = 1;i <= m;i ++ ){
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        for(int i = 1;i <= n;i ++ ){
            cout <<i<<": ";
            for(int j = 0;j < v[i].size();j ++) 
              cout << v[i][j] <<" ";
              cout << endl;
        }
    }
}
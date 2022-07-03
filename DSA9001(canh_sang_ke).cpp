#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >>m;
        vector<int>v[1005];
        for(int i = 1;i <= m;i ++ ){
            int k,y; cin >> k >> y;
           v[k].push_back(y);
           v[y].push_back(k);
        }
        for(int i = 1;i <= n;i ++){
            cout << i <<": ";
            for(int j = 0;j < v[i].size();j ++)
             cout << v[i][j] <<" ";
             cout <<endl;
        }
    }
    return 0;
}
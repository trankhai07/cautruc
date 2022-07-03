#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
vector<int>v[1005];
int main(){
    int x; cin >> x;
    for(int i = 1;i <= x;i ++){
        for(int j = 1;j <= x;j ++){
            cin >> a[i][j];
            if(a[i][j] == 1)
            v[i].push_back(j);
        }
    }
    for(int i = 1;i <= x; i ++ ){
        for(int j =0;j < v[i].size();j++) cout << v[i][j] <<" ";
        cout <<endl;
    }
}
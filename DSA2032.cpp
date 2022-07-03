#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v;
void output(int a[],vector<int> &v2,int n,int m,int k,int sum){
    for(int i = k;i <= m; i++){
        if(sum + a[i] <= n){
             v2.push_back(a[i]);
            sum+=a[i];
            if(sum == n){
                 v.push_back(v2);
            }
            else output(a,v2,n,m,i, sum );
            v2.pop_back();
            sum-=a[i];
        }
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m; cin >> n >> m;
        int a[n+1],sum=0;
        for(int i = 1;i <= n;i ++ ) cin >> a[i];
        vector<int>v2;
        output(a,v2,m,n,1,0);
        if(v.size() == 0) cout <<"-1\n";
        else {
            cout << v.size()<<" ";
        sort(v.begin(),v.end());
        for(int i = 0;i < v.size(); i++ ){
            cout << "{";
            for(int j = 0;j < v[i].size()-1;j ++ ){
                cout << v[i][j] <<" ";
            }
            cout << v[i][v[i].size()-1] <<"} ";
        }
        cout << endl; v.clear();
        }
    }
    return 0;
}
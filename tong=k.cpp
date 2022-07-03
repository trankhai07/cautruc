#include<bits/stdc++.h>
using namespace std;

void sum_equal_k(int n,int k,int a[],int b[],int j,vector<vector<int>>&s){
    for(int i = 0;i <=1 ;i ++ ){
        b[j] = i;
        if(j == n){
            int sum =0;
            for(int i = 1;i <= n;i ++ ){
                if(b[i] == 1) sum+=a[i];
            }
            if(sum == k){
               vector<int>k1;
                for(int i = 1;i <=n; i ++ )
                if(b[i] ==  1) k1.push_back(a[i]);
                s.push_back(k1);
            }
        }
        else sum_equal_k(n,k,a,b,j+1,s);
    }
}
int main(){
    int x; cin >> x;
    while(x--){
    int n,k; cin >> n >> k;
    int a[n+1],b[n+1];
    for(int i = 1;i <= n;i ++ ){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    vector<vector<int>>s;
    sum_equal_k(n,k,a,b,1,s);
    if(s.size() == 0) cout <<"-1";
    else
    sort(s.begin(),s.end());
    for(int i = 0;i < s.size();i ++ ){
        cout << "[";
        for(int j = 0;j < s[i].size()-1; j ++ ) {
            cout << s[i][j]<<" ";
        }
        cout << s[i][s[i].size()-1] <<"] ";
    }
    cout <<endl;
    }
    return 0;
}
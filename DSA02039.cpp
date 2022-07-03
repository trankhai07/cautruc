#include<bits/stdc++.h>
using namespace std;
void output(int a[],vector<vector<int>>&s,int n){
    vector<int>q;
    for(int i = 1;i <= n;i ++ ) q.push_back(a[i]);
    s.push_back(q);  
}
void try_try(int a[],int j,int sum_node,vector<vector<int>> &s,int k,int n){
    for(int i = k;i >= 1;i --){
        if(sum_node + i <= n){
            a[j]=i; sum_node+=i;
            if(sum_node == n) output(a,s,j);
            else try_try(a,j+1,sum_node,s,i,n);
            sum_node-=i;
        }
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        vector<vector<int>>s;
        try_try(a,1,0,s,n,n);
        cout << s.size()<<endl;
        for(int i = 0;i < s.size();i ++ ){
            cout <<"(";
            for(int j = 0; j < s[i].size()-1;j++){
              cout << s[i][j] <<" ";
            }
            cout << s[i][s[i].size()-1]<<") ";
        }
        cout << endl;
    }
    return 0;
}
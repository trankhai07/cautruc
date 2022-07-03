#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    cout <<"(";
    for(int i = 1;i < n;i ++ ) cout  << a[i] <<" ";
    cout << a[n]<<") ";
}
void try_try (int a[],int j,int n,int sum_node,int k){
     for(int i = k;i >= 1;i --){
         if(sum_node + i <= n){
         a[j] = i;  sum_node+=i;
         if(sum_node  == n) output(a,j);
         else try_try (a,j+1,n,sum_node,i);
           sum_node-=i;
         }
     }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >>n;
        int a[n+1];
        try_try(a,1,n,0,n);
        cout <<endl;
    }
    return 0;
}
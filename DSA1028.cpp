#include<bits/stdc++.h>
using namespace std;
void output(int b[],int n,int c[]){
    for(int i = 1;i <= n;i ++ ) cout << b[c[i]] <<" ";
    cout <<endl;
}
void quay_lui(int b[],int n,int k,int j,int c[]){
    for(int i = c[j-1] +1;i <= n-k+j; i ++ ){
        c[j] = i;
        if(j == k) output(b,k,c);
        else quay_lui(b,n,k,j+1,c);
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n+1];
    set<int>s;
    for(int i = 0;i < n;i ++ ){
        cin >> a[i];
        s.insert(a[i]);
    }
    int b[n+1]; 
    int j =1,c[n+1];c[0] =0;
    for(auto it : s){
      b[j] = it;
      c[j]=j;
      j++;
    }
    quay_lui(b,j-1,k,1,c);
    return 0;
}
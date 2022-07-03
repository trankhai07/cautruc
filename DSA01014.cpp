#include<bits/stdc++.h>
using namespace std;
int cn =0;
void to_hop(int a[],int n,int m,int s,int j){
    for(int i = a[j-1] + 1;i <= n-m+j;i ++){
        a[j] = i;
        if(j == m){
            int sum =0;
         for(int i = 1;i <= m;i ++) sum+=a[i];
         if(sum == s) cn ++;
        }
        else to_hop(a,n,m,s,j+1);
    }
}
void output(int n,int m,int z){
   int a[n+1];
   a[0] = 0;
   for (int i = 1;i <= n; i ++ ) a[i] = i;
   to_hop(a,n,m,z,1);
}
int main(){
    int x= 100;
    while(x--){
    int n,m,z;
    cin >> n >> m >> z;
    if(n == 0) cout << cn << endl;
    else{
     output(n,m,z);
     cout << cn <<endl;
    }
     cn =0;
    }
}
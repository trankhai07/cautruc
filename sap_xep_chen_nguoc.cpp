#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int key,i,j,t =0;
    vector<int>s[n+1];
    s[t].push_back(a[0]);
    for( i = 1; i < n ; i++ ){
         key = a[i];
         j =i-1;
         while(j >=0 && a[j] > key){
             a[j+1] = a[j];
             j = j-1;
         }
        a[j+1] =key; t++;
        for(int l = 0;l <= t;l ++ ) s[t].push_back(a[l]);
       
    }
         int x =t;
         for(int  l= t; l >= 0;l  -- ){
             cout << "Buoc "<<x--<<": ";
             for(int k = 0; k < s[l].size() ;k ++ ) cout << s[l][k] <<" ";
             cout <<endl;
         }

}
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i  = 0;i < n;i ++ ) cin >> a[i];
    output(a,n);
    return 0;
}
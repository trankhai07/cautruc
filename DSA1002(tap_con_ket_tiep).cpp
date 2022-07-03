#include<bits/stdc++.h>
using namespace std;
void to_hop(int x[],int n,int k){
  int j;
        j = k; 
       while(x[j] == n-k+j && j >0){
           j--;
       }
       if(j == 0){
           for(int i = 1;i <= k;i ++ ) cout << i <<" ";
       }
       else{
           x[j]++;
           for(int l = j +1; l <= k; l ++){
               x[l] = x[l-1] +1;
           }
           for(int i = 1;i <= k;i ++ ) cout << x[i] <<" ";
       }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
    cin >> n>> m;
    int a[n+1],b[n+1];
    for(int i = 1;i <= m;i ++ ) {
        cin >> b[i];
    }
    to_hop(b,n,m);
    cout << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int kt,i ,h =0;
    vector<int>s[n+1];
    for( i = 0; i < n -1; i++ ){
    kt = i;
        for(int j = i+1;j < n;j ++ ){
           if(a[kt] > a[j]){
               kt = j;
           }
        }
        swap(a[kt],a[i]);
       for(int k = 0;k < n;k ++ ) s[i].push_back(a[k]);
       h++;
    }
    int x = h;
    for(int t = h-1;t >= 0 ;t --){
          cout <<"Buoc "<<x--<<": ";
        for(int j = 0; j < n;j ++  ){
           cout << s[t][j] <<" ";
        }
        cout <<endl;
    }
}
int main(){
    int x; cin >> x;
    while(x--){
    int n; cin >> n;
    int a[n+1];
    for(int i  = 0;i < n;i ++ ) cin >> a[i];
    output(a,n);
    }
    return 0;
}
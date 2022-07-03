#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int key,i,j,t =0;
    cout <<"Buoc "<<t<<": "<<a[0]<<endl;
    for( i = 1; i < n ; i++ ){
         key = a[i];
         j =i-1;
         while(j >=0 && a[j] > key){
             a[j+1] = a[j];
             j = j-1;
         }
        a[j+1] =key; t++;
        cout <<"Buoc "<<t<<": ";
        for(int l = 0;l <= t;l ++ ) cout << a[l] << " ";
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
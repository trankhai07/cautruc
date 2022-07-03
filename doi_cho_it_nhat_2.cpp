#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
    int cn =0;
    int node;
    for(int i =0;i < x-1;i ++ ){
        node =i;
        for(int j = i+1; j < x;j ++ ){
            if(a[node] > a[j]){
                node =j; 
            }
        }
    if(node != i){
        swap(a[node],a[i]); cn++;
    }
    }
    cout << cn <<endl;
}
int main(){
    int k; cin >>k ;
    while(k--){
        int x; cin >> x;
        int a[x+1];
        for(int i = 0;i < x;i ++ ) cin >> a[i];
       output(a,x);
    }
    return 0;
}
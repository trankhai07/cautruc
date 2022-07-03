#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
   for(int i = 1;i <= x; i++ ) cout <<a[i];
   cout <<" ";
}
void sinh(int a[],int x,int y,int j){
    for(int i = a[j-1] +1 ;i <= x-y+j;i ++ ){
        a[j] = i;
        if(j == y)output(a,y);
        else sinh(a,x,y,j+1);
    }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y; cin >> x >> y;
        int a[x+1];
        a[0] = 0;
        for(int i = 1;i <= x; i++ ) a[i] = i;
        sinh(a,x,y,1);
        cout <<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n){
    for(int i = 0;i < n;i ++ ) cin >> a[i];
}
int MAX(int a[],int x){
    int Max = INT_MIN;
    for(int i = 0;i < x;i ++ ){
        if(Max < a[i]) Max = a[i];
    }
    return Max;
}
int MIN(int b[],int x){
    int Min = INT_MAX;
    for(int i = 0;i < x;i ++ ){
        if(Min > b[i]) Min = b[i];
    }
    return Min;
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y; cin >> x >> y;
        int a[x+1],b[y+1];
        input(a,x); input(b,y);
        int Max= MAX(a,x),Min = MIN(b,y);
        cout <<(long long) Max*Min<<endl;
    }
}
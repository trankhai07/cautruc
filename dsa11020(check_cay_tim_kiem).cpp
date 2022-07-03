#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n){
    for(int i =1;i < n;i ++){
        if(a[i] >= a[i+1]) return false;
    }
    return true;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i ++)cin >> a[i];
        cout << check(a,n)<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
    sort(a,a+x,greater<int>());
    int b[x+1],j =0,t;
    if(x % 2 == 0) t = x/2;
    else {
        t= x/2 +1;
    }
    for(int i = 0;i < t ;i ++ ){
        b[j]= a[i];
        j+=2;
    }
    j = 1;
    for(int i = x-1;i >= t ;i -- ){
        b[j] = a[i];
        j+=2;
    }
    for(int i = 0;i < x;i ++ ) cout << b[i] <<" ";
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
        for(int i = 0;i < x;i ++ ) cin >> a[i];
        output(a,x);
        cout <<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
void output(int a[],int l[],int n){
    int Max = 0;
    for(int i =1;i < n;i ++ ){
       for(int j = i+1;j <= n;j ++){
           if(a[i] <= a[j] && l[i] +1 > l[j])
             l[j] = l[i] +1;
             Max = max(Max , l[j]);
       }
    }
    cout << n-Max <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1],l[n+1];
        for(int i = 1;i <= n;i ++ ){
            cin >> a[i];
            l[i]=1;
        }
        output(a,l,n);
    }
}
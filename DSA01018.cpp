#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int m){
    int j=m;
    while(a[j] - a[j-1] == 1 && j != 1){
          j--;
    }
    a[j]--;
    if(a[j] != 0)
    for(int i = j +1;i <= m;i ++ ) a[i] = n-m+i;
    else {
        for(int i = 1;i <= m;i ++ ) a[i] = n-m+i;
    }

    for(int i = 1;i <= m;i ++ ) cout << a[i] <<" ";
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m;
        cin >> n >> m;
        int a[n+1];
        for(int i = 1;i <= m;i ++ ) cin >> a[i];
        output(a,n,m);
        cout << endl;
    }
    return 0;
}
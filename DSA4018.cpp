#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1],index=0;
        for(int i = 1;i <= n;i ++){
            cin >> a[i];
            if(a[i] == 0) index = i;
        }
         cout <<index<<endl;
    }
    return 0;
}
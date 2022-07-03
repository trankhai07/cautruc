#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    long a[105]; memset(a,0,sizeof(a));
        a[1]=1;a[2]=2;a[3]=4;
        for(int i= 4;i <= 100;i ++ ){
           a[i]=a[i-1]+a[i-2]+a[i-3];
        }
    while(x--){
        cin >> n;
        
        cout << a[n]<<endl;
    }
}
// Cách 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        long long a[105]; memset(a,0,sizeof(a));
        a[1]=1;a[2]=2;a[3]=4;
        for(int i= 4;i <= n;i ++ ){
           a[i]=a[i-1]+a[i-2]+a[i-3];
        }
        cout << a[n]<<endl;
    }
}
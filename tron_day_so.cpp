#include<bits/stdc++.h>
using namespace std;
void intput(int c[],int x){
    for(int i = 0;i < x; i ++ ) cin >> c[i];
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y; cin >> x >> y;
        int a[x+y+1];
        intput(a,x+y);
        sort(a,a+x+y);
        for(int i = 0;i < x + y;i ++) cout << a[i] <<" ";
        cout <<endl;
    }
    return 0;
}
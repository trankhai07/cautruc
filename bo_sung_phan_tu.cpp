#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >>x;
        int a[x+1],b[x+1];
        memset(b,0,x+1);
        for(int i = 0;i < x;i ++ ){
            cin >> a[i]; 
            b[a[i]] ++;
        }
       sort(a,a+x);
       int coun = 0;
       for(int i = a[0];i <= a[x-1];i ++ ){
           if(b[i] == 0) coun ++;
       }
       cout << coun  <<endl;
    }
}
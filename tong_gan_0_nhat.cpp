#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
    int min = INT_MAX,t ;
    for(int j = 0; j < x-1;j ++)
      for(int i = 0;i < x;i ++ ){
     if(min > abs(a[j] +a[i])){
         min = abs(a[j] + a[i]);
           t = a[j] + a[i];
     }
    }
    cout << t ;
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
        for(int i = 0;i < x; i++ ) cin >> a[i] ;
      
        output(a,x);
        cout << endl;
    }
    return 0;
}
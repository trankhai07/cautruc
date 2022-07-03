#include<iostream>
using namespace std;
void input(int a[],int n){
    for(int i = 0;i < n ;i ++ ){
        cin>>a[i];
    }
}
void output(int a[],int n){
   int res = -1;
   for(int i = 1; i < n;i ++){
       a[i]+=a[i-1];
   }
   for(int i = 1;i < n-1;i ++ ){
       if(a[i-1] + a[i] == a[n-1]){
           res = i+1;
           break;
       }
   }
   cout<<res;
}
int main(){
    int n,x;
    cin>>x;
    while(x--){
        cin>>n;
        int *a = new int[n];
        input(a,n);
        output(a,n);
        delete[]a;
        cout<<endl;
    }
    return 0;
}
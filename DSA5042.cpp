#include<iostream>
using namespace std;
void input(int a[],int n){
    for(int i = 0;i < n;i ++){
        cin>>a[i];
    }
}
bool output(int a[],int n,int k){
    int sum = 0;
    int ss = -10000000;
    for(int i = 0;i < n;i ++ ){
        sum = max(a[i],sum +  a[i]);
        ss = max(sum,ss); 
        if(ss == k) return true;
    }
   return false;
}
int main(){
    int n,x,k;
    cin>>x;
    while(x--){
        cin>>n  >> k;
        int *a = new int[n];
        input(a,n);
       cout <<  output(a,n,k) <<endl;
        delete []a;
    }
    return 0;
}
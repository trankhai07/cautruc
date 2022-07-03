#include<bits/stdc++.h>
using namespace std;
int d[]={1000,500,200,100,50,20,10,5,2,1};
void output(int n){
    int dem =0;
  for(int i = 0;i < 10;i ++ ){
     dem += n/d[i];
     n%=d[i];
  }
   cout <<dem <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
       output(n);
    }
    return 0;
}
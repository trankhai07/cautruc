#include<bits/stdc++.h>
using namespace std;
void output(long long  n,long long  m){
    long long a =0 ,b=0,c=0,d=0;
    int i =1,j=1;
  while(n != 0){
      long long  x = n%10;
     if(x == 5){
             a = a + 6*i;
     }
    else a=a + x*i;
      if(x == 6) {
        b = b + 5*i;
      }
      else b = b + x*i;
       i*=10;
       n/=10;
  }
  while(m != 0){
      long long x = m%10;
      
     if(x == 5){
             c = c + 6*j;
     }
    else a=a + x*j;
      if(x == 6) {
        d = d + 5*j;
      }
      else d = d + x*j;
       j*=10;
       m/=10;
  }
   long long Min = d+b; 
   long long Max = a+c; 
   cout << Min <<" "<<Max;
}
int main(){
   long long n,m;
    cin >> n >> m;
    output(n,m);
}
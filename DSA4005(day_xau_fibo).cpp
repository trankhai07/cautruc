#include<bits/stdc++.h>
using namespace std;
void output(long long n,long long m){
    long long a[n+1];
    long long s1=1,s2=1;
    long long s3;
    a[1]=1; a[2] =1;
    for(int i = 3;i <= n;i ++  ){
          s3 = s1+s2;
          s1=s2;
          s2=s3;
          a[i] =s3;
    }
    int index;
    char x[3];
    x[1]='A'; x[2] ='B';
    for(int i = n;i >= 1;i --){
        index = i;
        if(i == 2) break;
        if(m > a[i-2])  m=m-a[i-2];
        else i--;
    }
    cout << x[index] <<endl;
}
int main(){
    long long x,n,m;
    cin >> x;
    while(x--){
        cin >> n>> m;
        output(n,m);
    }
    return 0;
}
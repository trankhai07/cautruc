#include<bits/stdc++.h>
using namespace std;
void output(long long n,long long  m){
  long long s1 = 1,s2=1;
  long long a[n+1];
  a[1]= 1;a[2]=1;
  for (int i =3;i <= n;i ++ ){
    long long s = s1+s2;
    s1=s2;
    s2=s;
    a[i]=s;
  }
  int x[3];
  x[1] = 0; x[2]=1;
  int index;
  for(int i = n;i >= 1;i --){
     index = i;
     if(i == 2 || i ==1) break;        // vì chỉ có a[1] và a[2]
     if(m > a[i-2]) m = m- a[i-2];     // nếu m lớn hơn biến tiếp theo thì giảm m xuống
     else i--;              // ngược lại lớn hơn thì hạ xuống 2 lần
  }
  cout << x[index] << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--){
        long long n,m;
        cin >> n >> m;
        output(n,m);
    }
    return 0;
}
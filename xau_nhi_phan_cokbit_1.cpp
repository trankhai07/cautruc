#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x,int y){
    int t= 0;
  for(int i = 1; i <= x;i ++ ){
      if(a[i] == 1) t++;
  }
  if(t == y){
      for(int i = 1;i <= x;i ++ ) cout << a[i];
      cout << endl;
  }
}
void creat(int a[],int x,int y,int j){
    for(int i = 0;i <= 1;i ++ ){
        a[j] = i;
        if(j == x) output(a,x,y);
        else creat(a,x,y,j+1);
    }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y; cin >> x >> y;
        int a[x+1];
        for(int i = 1;i <= x; i++ ) a[i] =i;
        creat(a,x,y,1);
       
    }
    return 0;
}
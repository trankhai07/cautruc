#include<bits/stdc++.h>
using namespace std;
void output(int n,int m){
    int x = m,k = n,i = 0;
    stack<int>s;
    while(k > 0){
        x--;
       if(k >= 9){
           k-=9;
          s.push(9);
       }
       else {
           s.push(k);
           break;
       }
    }
       
       if(x < 0){
           cout <<"-1\n";
            return ;
       } 
       
       else if(x >0 ){
           int j =s.top(); s.pop();
           s.push(j-1);
           for(int i = 0;i < x-1;i ++){
             s.push(0);
           }
           s.push(1);
       }
      while(s.empty()!= 1){
          cout << s.top();
          s.pop();
      } 
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        output(n,m);
        cout << endl;
    }
    return 0;
}
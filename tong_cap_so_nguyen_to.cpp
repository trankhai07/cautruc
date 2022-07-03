#include<bits/stdc++.h>
using namespace std;
bool check(int x){
    if(x == 2 || x == 3) return 1;
    if(x < 2 || x % 2 ==0 || x % 3 == 0) return 0;
    else{
        int c= sqrt(x);
        for(int i = 5;i <= c;i +=6)
          if( x % i == 0 || x % (i + 2) == 0)
           return 0;
           return 1;
    }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,kt =0; cin >> x;
        for(int i = 2;i <= x/2; i ++ ){
            if(check(i) && check(x-i)){
                cout <<i<<" "<<x-i <<endl;
                kt =1;
                break;
            }
        }
        if(kt == 0)cout << "-1\n";
    }
    return 0;
}
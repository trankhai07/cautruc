#include<bits/stdc++.h>
using namespace std;
int main(){
    long x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        long k=1;
        while(m%2 == 0){     // nếu là chẵn thì là số lần chia hết cho 2
                            //  nếu là lẻ thì nó là 1 luôn 
            m/=2;
            k++;
        }
        cout << k <<endl;
    }
}
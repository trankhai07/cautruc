#include<bits/stdc++.h>
using namespace std;
void thap(int n,char nguon,char trunggian,char dich ){
    if(n == 1){
        cout <<nguon<<" -> "<<dich<<endl;
    }
    else{
        thap(n-1,nguon,dich,trunggian);
        thap(1,nguon,trunggian,dich);
        thap(n-1,trunggian,nguon,dich);
    }
}
int main(){
    int n;
    cin >> n;
    thap(n,'A','B','C');
    return 0;
}
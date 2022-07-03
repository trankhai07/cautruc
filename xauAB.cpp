#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
    for(int i = 1;i <= x; i++ ){
        if(a[i] == 0) cout << "A";
        else cout << "B";
    }
    cout << " ";
}
void creat(int a[],int x,int j){
    for(int i = 0;i <= 1; i++ ){
        a[j] = i;
        if(j == x) output(a,x);
        else creat(a,x,j+1);
    }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
        creat(a,x,1);
        cout <<endl;
    }
    return 0;
}
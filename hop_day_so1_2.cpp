#include<bits/stdc++.h>
using namespace std;
void input(int c[],int n){
    for(int i = 0;i < n;i ++ ) cin >> c[i];
}
void output(int a[],int b[],int x,int y){
    set<int>s;
    for(int i = 0;i < x;i ++ ){
        s.insert(a[i]);
    }
    for(int i = 0;i < y;i ++ ){
        s.insert(b[i]);
    }
   for(auto it : s) cout << it <<" ";
   cout <<endl;
   sort(a,a+x);
    for(int i = 0;i < y;i ++ ){
        int l =0,r = x-1;
        while(l <= r){
            int mid = (l+r) /2 ;
            if(b[i] == a[mid]){
                cout << b[i] <<" ";
                break;
            }
            else if(b[i] < a[mid] ) r = mid-1;
            else if(b[i] > a[mid] ) l = mid + 1;
        }
    }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        int a[x+1],b[y+1];
        input(a,x); input(b,y);
        output(a,b,x,y);
        cout <<endl;
    }
    return 0;
}
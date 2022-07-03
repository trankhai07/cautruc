#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x,int y){
    multiset<int>s;
    //vector<int>v;
    for(int i = 0; i < y;i ++ ){
       s.insert(a[i]);
    }
    for(int i = y;i < x;i ++ ){
        cout << *s.rbegin() <<" ";
        s.erase(s.find(a[i-y]));
        s.insert(a[i]); 
    }
    cout <<*s.rbegin();
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y;cin >> x >> y;
        int a[x+1];
        for(int i = 0;i < x;i ++) cin >> a[i];
        output(a,x,y);
        cout <<endl;
    }
    return 0;
}
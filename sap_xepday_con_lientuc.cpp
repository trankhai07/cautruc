#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
    vector<int>s;
    for(int i = 0;i < x- 1; i++ ){
        for(int j = i+1; j < x;j ++){
             if(a[i] >a[j]){
                 swap(a[i],a[j]);
                 s.push_back(i); s.push_back(j);
             }
        }
    }
    cout << s[0]+1 <<" " <<s[s.size() -1]+1 <<endl;
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
        for(int i = 0;i < x;i ++ ) cin >> a[i];
        output(a,x);    
    }
}
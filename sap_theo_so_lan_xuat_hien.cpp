#include<bits/stdc++.h>
using namespace std;
void output(int b[],int c[],int v,int t){
    for(int i = 0;i < v-1;i ++){
        for(int j = i+1; j < v;j ++ ){
            if(c[i] < c[j]){
                swap(c[i],c[j]);
                swap(b[i],b[j]);
            }
            else if(c[i] == c[j]){
                if(b[i] > b[j]) swap(b[i],b[j]);
            }
        }
    }
    for(int i = 0;i < t;i ++ ){
        for(int j = 0; j < c[i];j ++ ) cout << b[i] <<" ";
    }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        map<int,int>s;
        int b[x+1],c[x+1];
        for(int i = 0;i < x;i ++ ){
           int a; cin >> a;
           s[a]++;
        }
        int v=0,t= 0;
        for(auto it : s ){
             b[v++] = it.first;
             c[t++] = it.second;
        }
         output(b,c,v,t);
        cout <<endl;
    }
    return 0;
}
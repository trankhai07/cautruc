#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int l[]){
    int cn =0;
    for(int i = 0;i < n-1;i ++ ){
        for(int j = i+1; j < n;j ++){
            if(a[i] <a[j] && l[j] < l[i] +1)
              l[j] = l[i] +1;
              if(cn < l[j]) cn =l[j];
        }
    }
    cout << cn <<endl;
}
int main(){
    int x; cin >> x;
    int a[x+1],l[x+1];
    for(int i = 0;i < x;i ++ ){
        cin >> a[i];
        l[i] = 1;
    } 
    output(a,x,l);
}
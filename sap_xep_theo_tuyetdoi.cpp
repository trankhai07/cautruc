#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x,int y){
    int b[x+1];
    for(int i = 0;i < x; i++ ) b[i] = abs(y-a[i]);
    for(int i = 0;i < x-1;i ++){
        for(int j = i + 1;j < x; j ++ ){
            if(b[i] > b[j]){
                swap(b[i],b[j]);
                swap(a[i],a[j]);
            }
            else if(b[i] == b[j]){
                if(a[i] > a[j]) swap(a[i],a[j]);
            }
        }
    }
    for(int i = 0;i < x;i ++ ) cout << a[i] <<" ";
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        int a[x+1];
        for(int i = 0;i < x;i ++ ) cin >> a[i];
        output(a,x,y);
        cout <<endl;
    }
    return 0;
}
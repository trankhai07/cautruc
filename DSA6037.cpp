#include<bits/stdc++.h>
using namespace std;
void  output(int a[],int n,multiset<int>ms){
    int b[n+1],j =0;
    int Max = a[0];
    for(int i =0 ;i < n-1;i ++ ){
        ms.erase(ms.find(a[i]));
        Max = max(Max,a[i]);
        if(Max <= *ms.begin()) b[j++] =i+1;
    }
    cout << j <<endl;
    for(int i = 0;i < j;i ++ ) cout << b[i] <<" ";
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        multiset<int>ms;
        for(int i = 0;i < n;i ++){
            cin >> a[i];
            ms.insert(a[i]);
        } 
        output(a,n,ms);
        cout << endl;
    }
    return 0;
}
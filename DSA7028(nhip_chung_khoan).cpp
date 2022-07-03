#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    stack<pair<int,int>>st;
    int b[n+1];
    for(int i = 1;i <= n;i ++){
        int x =1;
        if(st.empty()) st.push({x,a[i]});
        else{
            while(st.empty() != 1 && st.top().second <= a[i]){
                x+=st.top().first;
                st.pop();
            }
            st.push({x,a[i]});
        }
        b[i] = x;
    }
    for(int i =1;i <= n;i++) cout << b[i] <<" ";
    cout << endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i =1;i <= n; i++) cin >> a[i];
        output(a,n);
    }
    return 0;
}
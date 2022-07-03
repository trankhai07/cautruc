#include<bits/stdc++.h>
using namespace std;
int check(int x){
    if(x == 2 || x ==3) return 1;
    if( x < 2 || x % 2 == 0 || x % 3 == 0) return 0;
    else{
        int c= sqrt(x);
        for(int i = 5;i <= c;i +=6){
            if(x % i == 0 || x %  (i+2) == 0) return 0;
        }
        return 1;
    }
}
vector<vector<int>>v;
void quay_lui(int a[],int b[],int n,int j){
    for(int i = 0;i <= 1;i ++){
        b[j] = i;
        if(j == n){
            int sum=0; vector<int>s;
            for(int l =1;l <= n;l ++){
                if(b[l] == 1){
                    sum+=a[l];
                    s.push_back(a[l]);
                }
            }
            if(check(sum)){
             v.push_back(s);
            }
        }
        else quay_lui(a,b,n,j+1);
    }
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        for(int i = 1;i <= n; i++ ) cin >> a[i];
        sort(a+1,a+n+1,greater<int>());
        int b[n+1];
        quay_lui(a,b,n,1);
        sort(v.begin(),v.end());
        for(int i = 0;i < v.size();i++ ){
           for(int j = 0; j < v[i].size();j ++ ) cout << v[i][j] <<" ";
           cout << endl;
        }
        v.clear();
    }
    return 0;
}
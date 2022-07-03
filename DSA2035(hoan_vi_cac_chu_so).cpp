#include<bits/stdc++.h>
using namespace std;
string s[100];
int a[100],b[100];
 
long long  Min = INT_MAX;
void output(int n,int x){
    set<long long >se;
    for(int i = 1;i <= x;i ++){
        long long k =0;
        for(int j = 1;j <= n;j ++){
            k = k*10+(s[i][a[j]-1]-48);
        }
         se.insert(k);
    }
    long long st = *se.begin();
    long long ed = *se.rbegin();
    Min = min(Min,ed-st);
    /*for(auto it : se ) cout << it << " ";
    cout << endl;*/
}
void hoan_vi(int n,int j,int x){
    for(int i = 1;i <= n;i ++){
        if(b[i] == 0){
            b[i]=1;
            a[j]=i;
            if(j == n) output(n,x);
            else hoan_vi(n,j+1,x);
            b[i]=0;
        }
    }
}
int main(){
    int x,n;
    cin >> x >> n ;
    for(int i = 1;i <= x;i ++){
        string s1;
        cin >> s1; s[i] = s1;
    } 
    memset(b,0,sizeof(b));
    for(int i = 1;i <= n;i ++) a[i]=i;
    hoan_vi(n,1,x);
    cout << Min <<endl;
}
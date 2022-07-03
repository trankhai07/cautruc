#include<bits/stdc++.h>
using namespace std;
int Min = INT_MAX;
int c[15][15];
void quay_lui(int a[],int b[],int n,int j,int sum){
    if(j == n){
        Min = sum;
        return ;
    }
    for(int i = 1;i <= n;i ++ ){
        if(b[i] == 0 && sum+c[a[j]][i] < Min){
            b[i]=1;
            a[j+1]=i;
     quay_lui(a,b,n,j+1,sum+c[a[j]][i]);
            b[i]=0;
        }
    }
}
 int dem(string s1,string s2){
    int k =0;
    char d[200];
    memset(d,0,200);
    for(int i = 0;i < s1.size();i ++ ){
       d[s1[i]]++;
    }
    for(int i= 0;i < s2.size();i ++ ){
        if(d[s2[i]] == 1) k++;
    }
    return k;
}
int main(){
    int n; cin >> n;
    string s[100];
    int a[n+1],b[n+1]; a[0]=0;
    for(int i = 1;i <= n;i ++ ){
        string k; cin >> k;
        s[i] =k;
        a[i] =i;
        b[i] = 0;
        c[0][i] = c[i][0]= 0;
    }
    for(int i = 1;i < n;i ++){
        for(int j = i+1; j <= n;j ++ ){
            c[i][j] = c[j][i] = dem(s[i],s[j]);
        }
    }
   quay_lui(a,b,n,0,0);
   cout << Min<<endl;
   return 0;
}
#include<bits/stdc++.h>
using namespace std;
void input(int d[],int n){
    for(int i = 0;i < n;i ++ ) cin >> d[i];
}
void output(int a[],int b[],int c[],int n,int m,int z){
    vector<int>v;
    int i =0,j=0,h=0;
    while(i < n && j < m  && h < z ){
        if(a[i] == b[j] && b[j] == c[h]) {
            v.push_back(a[i]);
            i++; j++; h++;
        }
        else if(a[i] <= b[j] && a[i] <= c[h])i++;
        else if( b[j] <= a[i] && b[j] <= c[h]) j++;
         else h++;
    }
    if(v.size() == 0) cout << "NO";
    else {
        for(int l =0;l < v.size() ;l ++) cout << v[l] <<" ";
    }
}
int main(){
    int x,n,m,z;
    cin >> x;
    while(x--){
        cin >> n >> m >> z;
        int a[n+1],b[m+1],c[z+1];
        input(a,n);input(b,m); input(c,z);
        output(a,b,c,n,m,z);
        cout <<endl;
    }
    return 0;
}
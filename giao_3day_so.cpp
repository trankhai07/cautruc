#include<bits/stdc++.h>
using namespace std;
void intput(long long  d[],int n){
    for(int i = 0;i < n;i ++ ) cin >> d[i];
}
void output(long long a[],long long b[],long long c[],int x,int y,int z){
    int i = 0,j =0,t= 0,kt =0;
    while(i <= x && j <= y && t <= z){
        if(a[i] == b[j] && b[j] == c[t]){
            cout << a[i] <<" ";
            kt = 1;
            i++; j++; t ++;
        }
        else if(a[i] <= b[j] && a[i] <= c[t]){
            i++;
        }
        else if(b[j] <= a[i] && b[j] <= c[t]){
            j++;
        }
        else if(c[t] <= b[j] && c[t] <= a[i]){
            t++;
        }
    }
    if(kt == 0) cout << "-1";
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        long long a[x+1],b[y+1],c[z+1];
        intput(a,x); intput(b,y); intput(c,z);
        output(a,b,c,x,y,z);
        cout <<endl;
    }
    return 0;
}
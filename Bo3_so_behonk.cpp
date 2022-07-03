#include<bits/stdc++.h>
using namespace std;
void output(long long a[],int x,int y){
    sort(a,a+x);
    long long cn =0;
    for(int i = 0;i < x-1;i ++ ){
       long long s1= y-a[i];
       for(int j = i +1;j < x;j ++ ){
           long long s2 = s1-a[j];
           auto it = lower_bound(a+j,a+x,s2) -a;
           int t = it - j-1;
           if(t >= 1) cn+=t;
       }
    }
    cout <<cn;
}
int main(){
    int n; cin >> n;
    while(n--){
        int x,y ;
        cin >> x >> y;
        long long a[x+1];
        for(int i = 0;i < x;i ++ ) cin >>a[i];
        output(a,x,y);
        cout <<endl;
    }
    return 0;
}
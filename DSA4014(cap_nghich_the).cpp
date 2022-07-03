#include<bits/stdc++.h>
using namespace std;
long long two_mersort(long long a[],int l,int h,int m){
    long long T[m+1],P[m+1];
    int x=l,y=h+1;
    for(int i = 0;i < h-l+1;i++) T[i] = a[x++];
    for(int i = 0;i < m-h;i ++)P[i] =a[y++];
    int i0=0,j0=0,k=l;
    long long cn =0;
    while(i0 < h-l +1&& j0 < m-h){
       if(T[i0] <= P[j0]) a[k++] = T[i0++];
       else{
           a[k++] = P[j0++];
           cn+=(h-l+1-i0);
       }
    }
   while(i0 < h-l+1) a[k++] = T[i0++];
   while(j0 < m-h) a[k++] = P[j0++];
   return cn;
}
long long mersort(long long  a[],int l,int m){
    long long cn =0;
    if(l < m){
        int h = (l+m)/2; 
        cn+=mersort(a,l,h);     // lấy nửa trái
        cn+=mersort(a,h+1,m);  //lấy nửa phải
        cn+= two_mersort(a,l,h,m);    // cộng hai nửa vào nhau
    }
    return cn;

}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
       long long  a[n+1];
        for(int i = 0;i < n;i ++ ) cin >> a[i];
       cout << mersort(a,0,n-1) <<endl;
    }
    return 0;
}
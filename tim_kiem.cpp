#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x,int y){
    int t = -1;
    int left = 0,right = x-1;
    while(left <= right){
      int  mid = (left +right )/2;
       if(y == a[mid]) {
           t= 1;
           break;
       }
       else if(y > a[mid]) {
           left = mid +1;
       }
       else if(y < a[mid]){
           right = mid -1;
       }
    }
    cout <<t <<endl;
}
int main(){
    int n; cin >> n;
    while (n--){
        int x,y;
        cin >> x >> y;
        int a[x+1];
        for(int i = 0; i< x; i ++ ) cin >> a[i];
        output(a,x,y);

    }
    return 0;
}
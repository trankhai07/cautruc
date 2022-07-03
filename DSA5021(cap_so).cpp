#include<bits/stdc++.h>
using namespace std;
struct data{
  int start,end;
};
int cmp(data x,data y){
    if(x.end < y.end) return 1;   // sắp xếp tăng dần cặp số theo số đằng sau 
     return 0;
}
void output(data s[],int k){
    int cn ;
    int Max = INT_MIN;
    for(int i = 1;i < k;i ++){
        int x = s[i].end; cn =1;
        for(int j =i+1;j <= k; j++){
             if(x < s[j].start){
                 cn ++;
                 x = s[j].end;
             }
        }
       if(cn > Max) Max = cn;
    }
    cout <<Max <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int k = n*2;
        int a[k+1]; data s[n+1];
        for(int i = 1;i <= k;i ++) cin >> a[i];
        int j =1;
        for(int i = 1;i <= k;i +=2){   // tạo các cặp số 
          s[j].start = a[i];
          s[j].end = a[i+1]; j++;
        }
        sort(s+1,s+n+1,cmp);  // sắp xếp tăng dần theo số thứ 2 của cặp số 
        /*for(int i = 1;i < j;i ++) cout << s[i].start <<" "<<s[i].end <<endl;*/
        output(s,j-1);
    }
}
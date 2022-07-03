#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
void output(string s1,string s2,int len1,int len2){
    
    for(int i = 1;i <= len1; i++){
        for(int j =1;j <= len2;j ++){
           if(s1[i-1] != s2[j-1]) a[i][j] = max(a[i][j-1],a[i-1][j]);
           else a[i][j] = a[i-1][j-1]+1;
        }
    }
    cout << a[len1][len2] <<endl;
}
int main(){
    int x;
    cin >> x;
    while(x--){
        string s1,s2;
        cin >> s1 >>s2;
        int len1 =s1.size(),len2 = s2.size();
        memset(a,0,sizeof(a));
        output(s1,s2,len1,len2);
    }
}
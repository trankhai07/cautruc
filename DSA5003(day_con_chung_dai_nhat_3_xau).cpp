#include<bits/stdc++.h>
using namespace std;
long long  l[105][105][105];
void output(string s1,string s2,string s3,int len1,int len2,int len3){
    memset(l,0,sizeof(l));
    for(int i = 1;i <= len1; i ++){
        for(int j = 1;j <= len2;j ++){
            for(int k = 1;k <= len3 ;k ++){
                if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]) l[i][j][k] = l[i-1][j-1][k-1] +1;
                else l[i][j][k] = max(l[i-1][j][k],max(l[i][j-1][k],l[i][j][k-1]));
            }
        }
    }
    cout << l[len1][len2][len3] <<endl;
}
int main(){
    int x,n,m,z;
    cin >> x;
    while(x--){
       cin >> n >> m >>z;
       string s1,s2,s3;
       cin >> s1 >>s2 >>s3;
     output(s1,s2,s3,n,m,z);
    }
}
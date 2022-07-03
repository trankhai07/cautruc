#include<bits/stdc++.h>
using namespace std;
void output(string s1,string s2){
    int l1 = s1.size(),l2 =s2.size();
    int c[105][105];
    for(int i = 0;i <= l1; i++) c[i][0] = i;
    for(int i = 0;i <= l2 ;i ++) c[0][i] = i;
    for(int i = 1;i <= l1;i ++){
        for(int j =1;j <= l2;j ++){
            if(s1[i-1] == s2[j-1]) c[i][j] = c[i-1][j-1];
            else c[i][j] = min(c[i-1][j-1],min(c[i-1][j],c[i][j-1])) +1; 
        }
    }
    cout << c[l1][l2] <<endl;
}
int main(){
    int x;
    cin >> x;
    while(x--){
        string s1,s2;
        cin >> s1 >> s2;
        output(s1,s2);
    }
}
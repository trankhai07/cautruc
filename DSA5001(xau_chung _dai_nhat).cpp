#include<bits/stdc++.h>
using namespace std;
int l[1005][1005];     //gợi ý https://duongdinh24.com/xau-con-chung-dai-nhat/
void output(int len1,int len2,string s1,string s2){
     for(int i =1;i <= len2;i ++ ){
        for(int j =1;j <= len1;j ++){
            if(s1[j-1]==s2[i-1]) l[i][j] = l[i-1][j-1]+1;  // cộng cột chéo  ( thông báo bắt đầu từ vị trí bằng nhau là có bao nhiêu chữ cái = nhau)
            else l[i][j] = max(l[i-1][j],l[i][j-1]);    // so sánh 2 cột chéo 
        }
     }
     cout << l[len2][len1] <<endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        string s1,s2;
        cin >> s1 >> s2;
        int len1 = s1.size(),len2 = s2.size();
        memset(l,0,sizeof(l));
        output(len1,len2,s1,s2);
      
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
   int x;
   cin >> x;
   while (x--)
   {
       string s;
       cin >> s;
      if(s[0] == '0'){   // nếu số đầu tiên bằng 0 thì dừng luôn vì ko mã hóa đc 0
          cout <<0<<endl;
      }
      else {   // trương hợp ngược lại
       int len = s.size();
      int a[len+1];   // tạo mảng chứa số cách 
      a[0]=1; a[1]=1;
      for(int i = 2;i <= len ;i ++){
          a[i]=0;
          if(s[i-1] >'0') a[i]=a[i-1];   // xét tại vị trí cách số đầu 2 khoảng 
          // Nếu 1 đứng đầu thì có thể gắn bất kì số nào vào sau
          // Nếu 2 đứng đầu thì số đằng sau chỉ có thể <= 6 
          if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6')) a[i]+=a[i-2];
      }
      cout << a[len] <<endl; // đưa ra số cần tìm 
      }
       
   }
   
}
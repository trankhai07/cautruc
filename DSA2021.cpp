#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
  
    while(x--){
        long long k ,n;
        string s;
        cin >> s >> k;
        n = s.size();
        while(n < k) n*=2;    // nhân đôi tìm n lớn hơn k
        while(n > s.size()){     
            if(k > n/2){
                k-=n/2;             // tương ứng với nửa mảng phía sau VD 123 456( thì 4 5 6 tương đương 1 2 3 )
              if(k > 1) k-=1;           // vì đảo kí tự cuối lên đầu thì vị trí của mảng ksi tự ban đầu bị dịch xuống 1 đơn vị nên ta cộng cho trở về vị trí ban đầu 
                else k=n/2;    // nếu mà bằng 1 thì lùi xuống vị trí ngay sau nó ( vì vị trí cuối manrgg đầu là vị trí đầu tiên mảng sau)
            }
            n/=2;                   // chia đôi liên tục 
        }
        
          cout <<s[k-1]  <<endl;  
   }
    return 0;
}
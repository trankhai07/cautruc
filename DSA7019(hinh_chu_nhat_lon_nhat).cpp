#include<bits/stdc++.h>   //    https://youtu.be/MQZ1TH0l7sk
using namespace std;
void output(long long  a[],int x){
    stack<long long >st;
    st.push(0); // thêm vị trí 0 
    //set<long long >s;
    long long Max = INT_MIN; 
    for(int i = 1;i < x;i ++){  // chạy từ vị trí 1
       if( a[i] >= a[st.top()]){   //  nếu giá trị tại i lớn hơn giá trị tại st.top() thì thực hiện thêm vào stack 
           st.push(i); 
       }
       else  {                // khi gặp giá trị tại i bé hơn giá trị st.top() thì chạy hàm dưới 
           while(st.empty()!= 1 && a[i] < a[st.top()]){       // từ vị trí i đó thì tìm giá trị đầu tiên trong stack bé hơn thì dừng 

               int k = a[st.top()]; st.pop();//  lấy giá trị đầu tiên và xóa đi 
               if(st.empty() != 1){   // nếu stack không rỗng thì tại ví trí i đó trừ đi ngay vị trí trong stack 
                  long long h = (i-st.top()-1)*k;
                Max =max(Max,h);
               }
               else{           // nếu rỗng thì chính tại ví trí i đó luôn 
                 long long  h = k*i;
                 Max =max(Max,h);
               }
           }
           st.push(i);  // thêm giá trị i vào tiếp 
       }
    }
    while(st.empty() != 1){ // trường hợp chạy đến = x
        int k = a[st.top()]; st.pop();  
        if(st.empty() != 1){
            long long  h = (x-st.top()-1)*k;  Max =max(Max,h);
        }
        else {
           long long  h = x*k;
         Max =max(Max,h);
        }     
    }
    cout << Max<<endl;   // in ra giá trị max 
}
int main(){
    int n,x;
    cin >> n;
    while(n--){
        cin >> x;
        long long a[x +5];
         for(int i = 0;i < x;i ++){
             cin >> a[i];
         }
         output(a,x);
    }
}
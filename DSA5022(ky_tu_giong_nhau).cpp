#include<bits/stdc++.h>
using namespace std;   // ý tưởng đơn giản chỉ là xâu chẵn thì in một nửa rồi nhân đôi lên
                    // còn nếu xâu lẻ thì cộng thêm 1 và in một nửa rồi nhân đôi lên và xóa đi kí tự cuối 
void output(int insert,int dele,int copy,int n){
    int d[105]; memset(d,0,sizeof(d));
    d[1]=insert;  // trường hợp 1 thì luôn có time là insert 
    for(int i = 2;i <=n ;i ++ ){      // ko thể chạy từ 1 vì thời gian insert có thể lớn hơn thời gian copy và dele
        if(i % 2 != 0) d[i] = min(d[i-1]+insert,d[(i+1)/2] + copy +  dele); // trường hợp lẻ 
        else d[i]=min(d[i-1]+insert,d[i/2]+copy); //  trường hợp chẵn 
    }
   // cout << d[2] <<endl;
    cout << d[n]<<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n; 
        int insert,dele,copy;
        cin >> insert >> dele >> copy;
        output(insert,dele,copy,n);
    }
}
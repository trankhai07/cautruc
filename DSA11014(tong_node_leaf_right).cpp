#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
    struct node *left;
    struct node *right;
};
typedef struct node Node;
void khoi_tao(Node *&t,int d){
    Node *p = new Node;
    p->data = d;
    p->left = NULL;
    p->right = NULL;
    t = p;
}
void creat_branch(Node *&p,int k,int h,char t){
    if(p == NULL) return ;
    if(p->data == k ){
        if(t == 'L') khoi_tao(p->left,h);
        else khoi_tao(p->right,h);
    }
    else{
        creat_branch(p->left,k,h,t);
        creat_branch(p->right,k,h,t);
    }
}
int sum=0;
void duyet(Node *t,bool check){
    if(t == NULL) return ;
          if(t->right == NULL && t->left == NULL && check == true ) sum+=t->data;
        duyet(t->left,false);
        duyet(t->right,true);
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        Node *l = NULL;   // phần tạo cây sai (vì có thể có những số giống nhau)
        for(int i = 1;i <= n;i ++){
            int k,h; char t;
            cin >> k >> h >> t;
            if(l == NULL){
                khoi_tao(l,k);
                if(t == 'L') khoi_tao(l->left,h);
                else khoi_tao(l->right,h);
            }
            else creat_branch(l,k,h,t);
        }
        duyet(l,true);
        cout << sum <<endl; sum =0;
    }
}
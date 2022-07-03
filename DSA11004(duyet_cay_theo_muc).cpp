#include<bits/stdc++.h>
using namespace std;
struct node{
  int data; 
  struct node *left;
  struct node *right;
};
typedef struct node Node;
void khoi_tao(Node *&p,int t){ // hàm tạo một node mới 
    Node *h = new Node;
    h ->data = t;
    h->left = NULL;
    h->right = NULL;
    p = h;
}
void creat_node(int n,int m,char t,Node *&p){   // hàm tạo nhánh của trái phải của node 
    if(p == NULL) return;           // nếu node NULL thì dừng 
    else if(p ->data == n){
        if(t == 'L') khoi_tao(p->left,m);    
        else khoi_tao(p->right,m);
    }
    else {
        creat_node(n,m,t,p->left);  // đệ quy sang nhánh trái và từ stack trả về giá trị ban đầu 
        creat_node(n,m,t,p->right);   // đệ quy sang nhánh phải và từ stack trả về  giá trị ban đầu 
    }
}
/*void duyet(Node *p){
    if(p != NULL){
        cout << p ->data <<" ";
        duyet(p->left);
        duyet(p->right);
    }
}*/
void in (Node *p){
  queue<Node*>q;
  q.push(p);
 cout << q.front()->data <<" ";
 while(q.empty() != 1){
     Node *t = q.front(); q.pop();
     Node *t2 = t;
     t = t->left;
     if(t  != NULL){
         q.push(t);
         cout << t->data <<" ";
     }
     t2 = t2->right ; 
     if(t2 != NULL){
         q.push(t2);
          cout << t2->data <<" ";
     }
 }
 cout <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        Node*p = NULL;
        for(int i = 1;i <= n;i ++){
            int n,m; char t;
            cin >>n >> m >>t;
            if(p == NULL){    // nếu node đầu tiên NULL thì khởi tạo node 
                khoi_tao(p,n);
                if(t == 'L') khoi_tao(p->left,m);  // tạo một node trái 
                else khoi_tao(p->right,m);    // tạo một node phải
            }
          else  creat_node(n,m,t,p);  // trường hợp ngược lại thì tạo nhánh trái ,phải 
        }
        in(p);
   //  duyet(p);cout << endl;
    }
}
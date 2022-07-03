#include<bits/stdc++.h>
using namespace std;
struct node{
    char data; 
    struct node *left;
    struct node *right;
    struct node *next = NULL;
};
typedef struct node Node;
struct Head{
  Node *head ;
};
typedef struct Head head;
void tao_danh_sach(head &l){
    l.head = NULL;
}
void khoi_tao(Node *&t,char x){
    Node *p = new Node;
    p->data = x;
    p->left = NULL;
    p->right = NULL;
 //   p->next= NULL;
    t = p;
}
void push(head &l,Node *x ){
    if(l.head == NULL){
        l.head = x; 
    }
    else {
        x->next = l.head;
        l.head = x;
    }
}
Node *pop(head &l){
    Node *p = l.head;
    l.head = l.head->next;
    return p;
}
void duyet(Node *p){
    if(p != NULL){
        duyet(p->left);
        cout <<p->data;
        duyet(p->right);
    }
}
int main(){
  int n; cin >> n;
  while(n--){
      string s;
      cin >> s;
      Node *l = NULL;
      head e;tao_danh_sach(e);
      for(int i = 0;i < s.size();i ++){
          if(s[i] >= 'a' && s[i] <= 'z'){
              Node *t;
              khoi_tao(t,s[i]);
             push(e,t);
          }
          else {
              khoi_tao(l,s[i]);
              Node *b1 = pop(e);
              Node *b2 = pop(e);
              l->left = b2;
              l->right = b1;
              push(e,l);
          }
      }
      duyet(l); cout <<endl;
  }
}
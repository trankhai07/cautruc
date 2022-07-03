#include<bits/stdc++.h>
using namespace std;
struct Node{
    int sm; int hs;
    Node *next;
};
struct List {
    Node *head , *tail;
};
void init(List &l){
    l.head = l.tail = NULL;
}
Node *creat(int h,int s){
    Node *p = new Node;
    if( p == NULL) exit(1);
    p->sm = s;
    p->hs = h;
    p->next = NULL;
    return p;
}
void addnode(List &l,Node *p){
    if(l.head == NULL) l.head = l.tail = p;
    else{
        l.tail->next = p;
        l.tail = p;
    }
}
void tach(char s[],char h[][100],int &i){ // hàm tách bỏ dấu cộng 

  char * t =  strtok(s," + ");
  while(t != NULL){
      strcpy(h[i++],t); // tại vì sau khi tách chuỗi luôn xuất hiện \0 vậy phải copy mảng mới dùng được
      t= strtok(NULL," + ");
  }
  
}
void nhap(char s[],List &l){    // hàm tách bỏ *x^
   char *t = strtok(s,"*x^");
   int h ,m;
   while(t != NULL){
      h = atoi(t); t = strtok(NULL,"*x^");
      m = atoi(t); t = strtok(NULL,"*x^");
   }
   Node*p = creat(h,m);
   addnode(l,p);
}
void cong(List &l,List l1,List l2){
   
    while(l1.head != NULL && l2.head != NULL){
        if(l1.head->sm > l2.head->sm){
          addnode(l,l1.head);
          l1.head=l1.head->next;
        }
        else if(l1.head->sm < l2.head->sm){
            addnode(l,l2.head);
            l2.head= l2.head->next;
        }
        else{
             Node *p = creat(l1.head->hs+l2.head->hs,l1.head->sm);
            addnode(l,p);
            l1.head=l1.head->next;
            l2.head=l2.head->next;
        }
    }
    while(l1.head != NULL){
        addnode(l,l1.head);
           l1.head=l1.head->next;
    }
     while(l2.head != NULL){
        addnode(l,l2.head);
           l2.head=l2.head->next;
    }
}
void xuat(List l){
    Node *p = l.head;
    while(p != l.tail){
        cout << p->hs <<"*x^"<<p->sm; 
        p=p->next ;
        cout << " + ";
    }
    cout << p->hs<<"*x^"<<p->sm;
}
int main(){
 int x; cin >> x;
 cin.ignore();
 while(x--){
   List l,l1,l2;
  init(l); init(l1); init(l2);
  char s1[125],s2[125];
  cin.getline(s1,125); cin.getline(s2,125);

  char h1[100][100],h2[100][100]; int i =0;
  tach(s1,h1,i); 
  for(int j =0;j < i;j ++ ){
      nhap(h1[j],l1);
  }i =0;
  tach(s2,h2,i);
  for(int j =0;j < i;j ++ ){
      nhap(h2[j],l2);
  }
  cong(l,l1,l2);
  xuat(l); cout << endl;
 }
  return 0;
}
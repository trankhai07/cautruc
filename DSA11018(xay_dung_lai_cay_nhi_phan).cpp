#include<bits/stdc++.h>
using namespace std;
int a[1005];
struct Node{
   int data;
   struct Node *left;
   struct Node *right;
};
Node* start_node(int d){ //  initialization a new node 
    Node *r = new Node ;
    r->data = d;
    r->left = r->right = NULL;
    return r;
}
Node *creat_tree(Node *root,int data){   // initialization a new tree
    if(root == NULL){     //  if null initialization a new node 
        root = start_node(data);
        return root;
    }
    if(root->data > data) root->left = creat_tree(root->left,data);  // branch left
    else root->right = creat_tree(root->right,data);   // branch right
     return root;
}
void duyet_cay(Node *root){
    if(root == NULL) return;
    cout << root->data <<" ";
    duyet_cay(root->left);
    duyet_cay(root->right);
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        Node *root = NULL;
        for(int i = 1;i <= n;i ++){
            cin >> a[i];
            root=creat_tree(root,a[i]);
        }
        duyet_cay(root);
        cout <<endl;
    }
}
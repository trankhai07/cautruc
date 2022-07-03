#include<bits/stdc++.h>
using namespace std;
struct Node{
 int data;
 struct Node *left;
 struct Node *right;
};
Node *start_node(int d){
    Node *r = new Node;
    r->data = d;
    r->left =r->right = NULL;
    return r;
}
Node *creat_branch(int a[],int start,int end){
    if(start > end) return NULL;
    int mid = (start+end)/2;
    Node *root = start_node(a[mid]);
     root->left = creat_branch(a,start,mid-1);
     root->right = creat_branch(a,mid+1,end);
     return root;
}
Node *creat_tree(int a[],int n){
    return creat_branch(a,1,n);
}
void duyet(Node *root){
    if(root == NULL) return;
    cout << root->data <<" ";
    duyet(root->left);
    duyet(root->right);
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i ++) cin >> a[i];
        sort(a+1,a+n+1);
        Node *root = creat_tree(a,n);
        duyet(root);
        cout <<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;   // thuật toán đơn giản chỉ là duyệt cây theo mức (khác tìm mức của từng node )
struct Node{
 int data; int le=0;
 struct Node *left;
 struct Node *right;
};
vector<int>v[1005];   // tạo một mảng vector để lưu số node theo mức (mức chẵn thì đảo ngược chiều in, mức lẻ thì giữ nguyên )
Node *start_node(int d){  // tạo một node mới
    Node *r = new Node;
    r -> data = d;
    r -> left = r -> right = NULL;
    return r;
}
void creat_branch(Node *&root,int a,int b,char c){   // tạo nhánh của cây
    if(root == NULL) return ;     // nếu node == NULL thì dừng 
    if(root->data == a){     // nếu bằng ngay node đó thì tạo node
        if(c == 'R') root->right = start_node(b);
        else root->left = start_node(b);
    }
   else {           // nếu ko bằng thì quay lui tìm gốc của nó
       creat_branch(root->left,a,b,c);
       creat_branch(root->right,a,b,c);
   }
}
void Level(Node *root,int level){   // hàm duyệt tìm mức của các node 
    if(root == NULL) return ;
     root->le = level;
   Level(root->left,level+1);
   Level(root->right,level+1);
}
void duyet_cay(Node *root){       // hàm duyệt cây theo mức và lưu vào vector đã chuẩn bị 
    queue<Node*>qe;
    qe.push(root); int Max =INT_MIN;
    while(!qe.empty()){
        Node *t = qe.front(); qe.pop();
        v[t->le].push_back(t->data); 
        Max = max(Max,t->le);
        if(t->left != NULL) qe.push(t->left);
        if(t->right != NULL) qe.push(t->right);
    }
   for(int i = 0;i <= Max;i ++){
       if(i % 2 != 0)   // hàm lẻ thì dữ nguyên 
       for(int j =0;j < v[i].size();j ++){
           cout <<v[i][j] <<" ";
       }
       else{         // hàm lẻ thì thực hiện đảo ngược và in ra 
           reverse(v[i].begin(),v[i].end());
           for(int j = 0;j < v[i].size();j ++) cout <<v[i][j] <<" ";
       }
   }
   for(int i = 0;i <= Max ;i ++) v[i].clear();  // hàm xóa vector
}
// void duyet_cay(Node *root){
//     if(root == NULL) return;
//     cout << root->le <<" "<<root->data<<endl;
//    // cout << root->data <<" ";
//     duyet_cay(root->left);
//     duyet_cay(root->right);
// }
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        Node *root = NULL;
        for(int i = 1;i <= n;i ++){
            int a,b; char c;
            cin >> a >> b >> c; 
           if(i == 1){
               root = start_node(a);
               if(c == 'R') root->right =start_node(b);
               else root->left = start_node(b);
           }
           else creat_branch(root,a,b,c);
        }
       Level(root,0); // hàm duyệt 
        duyet_cay(root); // hàm tạo cây 
        cout <<endl;
    }
}
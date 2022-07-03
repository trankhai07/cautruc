#include <bits/stdc++.h>
using namespace std;
struct Nope{
    int data;
    Nope *left, *right;
};
typedef Nope *Tree;
Tree createNope(int x) {
    Tree p = new Nope ;
    p->data = x;
    p->left = p->right = NULL;
    return p;
}
void createTree (Tree &Root) {
    Root = NULL;
}
void insertNope(Tree &T, int u, int v, char c) {
    if (T!= NULL) {
        if (T->data == u ) {
           if (c == 'L') {
               T->left = createNope(v); 
           } else T->right = createNope(v);
        } 
        insertNope(T->left,u,v,c);
        insertNope(T->right,u,v,c);
    }
}
int sum =0;
void duyet(Tree t,bool check){
    if(t == NULL) return ;
          if(t->right == NULL && t->left == NULL && check == true ) sum+=t->data;
        duyet(t->left,false);
        duyet(t->right,true);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        Tree T;
        createTree(T);
        int n;
        cin >> n;
        unordered_map<int,Tree> m;
        for (int i = 0 ; i< n ;i++) {
            int u ,v;
            char c;
            cin >> u >> v >> c;
            if ( i == 0) {
                T = createNope(u);
                m[u] = T;
            }
            if (c == 'L') {
                 m[u]->left = createNope(v);
                 m[v] = m[u]->left;
            } 
            else {
                m[u]->right = createNope(v);
                m[v] = m[u]->right;
            }
        }
        duyet(T,true);
        cout <<sum << endl; sum=0;
        // free(T);
    }
}
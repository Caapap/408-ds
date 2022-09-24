void inorder (TreeNode* root)
    if(root==null) return;
    inorder(root->left);
    cout<<root->val;
    inorder(root->right);

    bool flag=true;
    int k=0;
    void inorder( Sqlist tree, int i) {
        if(i>tree.size||tree.data[i]=-1||!flag) return;
        inorder(tree, i*2+1);
        if(k>tree.data[i*2+1]){
            flag=false;
            return;
        }
        k=tree.data[i*2+1];
        inorder(tree, i*2+2);
    }

//solution1
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

//solution2
class Solution{
    public:
        vector<int> getLeastNumbers(vector<int>& arr, int k) {
            vector<int>vec(k, 0);
            if (k == 0) return vec;
            priority_queue<int>Q;
            for (int i = 0; i < k; ++i)
            Q.push(arr[i]);
            for (int i = k; i < (int)arr.size(); ++i) {
                if (Q.top() > arr[i]) {
                    Q.pop();
                    Q.push(arr[i]);
                }
            }
            for (int i = 0; i < k; ++i) {
                vec[i] = Q.top();
                Q.pop();
            }
            return vec;
        }
};

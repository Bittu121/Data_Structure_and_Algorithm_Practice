#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
template <typename T> class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*>children;
    TreeNode(T data){
        this->data = data;
    }
};
// void printTree( TreeNode<int>*root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<":";
//     for(int i=0;i<root->children.size();i++){
//         cout<<root->children[i]->data<<",";
//     }
//     cout<<endl;
//     for(int i=0;i<root->children.size();i++){
//         printTree(root->children[i]);
//     }
// }
void printTreeLevelWise(TreeNode<int>*root){
    if(root==NULL){
        return;
    }
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<" ";
        int i = 0;
        for(int i=0;i<front->children.size();i++){
            if(front->children.size()-1){
                cout<<front->children[i]->data<<",";
                pendingNodes.push(front->children[i]);
            }
            else{
                front->children[i]->data;
                 TreeNode<int>*node = front->children[i];
                 pendingNodes.push(node);
            }
        }
        cout<<endl;
    }
}
// TreeNode<int>*takeInput(){
//     int rootData;
//     cout<<"Enter data:"<<endl;
//     cin>>rootData;
//     TreeNode<int>*root = new TreeNode<int>(rootData);
//     int n;
//     cout<<"Enter number of children"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         TreeNode<int>*child=takeInput();
//         root->children.push_back(child);
//     }
//     return root;
// }

//take input LavelWise
TreeNode<int>*takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data:"<<endl;
    cin>>rootData;
    TreeNode<int>*root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>*front = pendingNodes.front();//front se data ko bahar nikalna
    pendingNodes.pop();//data ko hatana
    cout<<"Enter no of children  of "<<front->data<<endl; 
    int numChild;
    cin>>numChild;
    for(int i=0;i<numChild;i++){
        int childData;
        cout<<"Enter"<<i<<"th child of "<<front->data<<endl;
        cin>>childData;
        TreeNode<int>*child = new TreeNode<int>(childData);
        front->children.push_back(child);
        pendingNodes.push(child);
    }
    }
    return root;
}
int main(){
    // TreeNode<int>*root = new TreeNode<int>(1);
    // TreeNode<int>*node1 = new TreeNode<int>(2);
    // TreeNode<int>*node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    //Take Input from user
    TreeNode<int>*root =takeInputLevelWise();
    //TreeNode<int>*root =takeInput();
    //printTree(root);
    printTreeLevelWise(root);
    return 0;
}
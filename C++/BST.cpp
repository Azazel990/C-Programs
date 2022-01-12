#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node *left,*right;
            
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
}*root,*last;
 

struct Node* InsertNode(struct Node *temp,int num)
{
        if(root==NULL)
        {
            root = new Node(num);
            return root;
        }
        else if(temp==NULL)
        {
            return new Node(num);
        }
    
    if(temp->data > num) temp->left = InsertNode(temp->left,num);
    else temp->right = InsertNode(temp->right,num);

     return temp;
}

void Inorder(struct Node *root)
{
    if(root==NULL) return;
    
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(struct Node* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    
    Preorder(root->left);
    
    Preorder(root->right);
}

void Postorder(struct Node *root)
{
    if(root==NULL) return;
    
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

struct Node* SearchBST(struct Node* root,int num){
    if(root==NULL || root->data == num)
    return root;

    if(root->data > num) return SearchBST(root->left,num);

    return SearchBST(root->right,num);
}

struct Node* MinValue(struct Node *root)
{
    Node *temp = root;

    while(temp&&temp->left!=NULL) temp = temp->left;

    return temp;
}

struct Node* MaxValue(struct Node* root){
    Node *temp = root;

    while(temp&&temp->right!=NULL) temp = temp->right;

    return temp;
}

struct Node* Delete(struct Node* root,int num)
{
   if(root==NULL) return root;

    if(root->data > num) root->left = Delete(root->left,num);

    else if (root->data < num) root->right = Delete(root->right,num);

    else{
        if(root->left==NULL&&root->right==NULL) return NULL;

        else if (root->left==NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right==NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }

        Node *temp = MinValue(root->right);

        root->data= temp->data;

        root->right = Delete(root->right,temp->data);

    }
    return root ;
}
int main()
 {
    root = NULL;
    int choice = 0,num=0;
    
    while(1){
        cout<<"Please Enter Yout Choice :\n1.Insert in BST\n2.Delete Node\n3.Inorder Traversal\n4.Preorder Traversal\n5.Postorder Traversal\n6.Serch a Node\n7.Minimum Node\n8.Maximum Node\n";
        cin>>choice;
        
        switch(choice)
        {
            case 1 : cout<<"Please Enter the Number : ";
                     cin>>num;
                     InsertNode(root,num);
                     cout<<endl;
                     break;
            case 2 : cout<<"Please Enter the node to be deleted : ";
                     cin>>num;
                     Delete(root,num);
                     cout<<endl;
                     break;
            case 3 : Inorder(root);
                     cout<<endl;
                     break;
            case 4 : Preorder(root);
                     cout<<endl;
                     break;
            case 5 : Postorder(root);
                     cout<<endl;
                     break;
            case 6 : cout<<"Please Enter the number : ";
                     cin>>num;
                     cout<<SearchBST(root,num)<<"\n";
                     break;
            case 7 : cout<<MinValue(root)->data<<"\n";
                     break;
            case 8 : cout<<MaxValue(root)->data<<"\n";
                     break;
            default : exit(0);
        }
    }
     return 0;
 }

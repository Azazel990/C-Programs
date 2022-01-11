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


int main()
 {
    root = NULL;
    int choice = 0,num=0;
    
    while(1){
        cout<<"Please Enter Yout Choice :\n1.Insert in BST\n2.Inorder Traversal\n";
        cin>>choice;
        
        switch(choice)
        {
            case 1 : cout<<"Please Enter the Number : ";
                     cin>>num;
                     InsertNode(root,num);
                     cout<<endl;
                     break;
            case 2 : Inorder(root);
                     cout<<endl;
                     break;
            default : exit(0);
        }
    }
     return 0;
 }
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
}*root;
 

void InsertNode(int num)
{
    if(root==NULL)
    {
       root = new Node(num);
    }
    else
    {
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty())
        {
            Node *temp  = q.front();
            
            if(temp->left==NULL)
            {
               temp->left =  new Node(num);
                return;
            }
            else q.push(temp->left);
            if(temp->right==NULL)
            {
                temp->right = new Node(num);
                return;
            }
            else q.push(temp->right);
            q.pop();
        }
    }
}
       
void Preorder(struct Node* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    
    Preorder(root->left);
    
    Preorder(root->right);
}

void Inorder(struct Node *root)
{
    if(root==NULL) return;
    
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(struct Node *root)
{
    if(root==NULL) return;
    
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
  root = NULL;
    int choice = 0,num=0;
    
    while(1)
    {
        cout<<"Please Enter Your Choice... \n1.Insert new node\n2.Preorder Traversal\n3.Inorder Traversal\n4.Postorder Traversal\n";
        cin>>choice;
        switch(choice)
        {
            case 1 : cout<<"Please Enter the data: ";
                     cin>>num;
                     InsertNode(num);
                     break;
            case 2 : Preorder(root);
                      cout<<endl;
                      break;
            case 3 : Inorder(root);
                     cout<<endl;
                     break;
            case 4 : Postorder(root);
                     cout<<endl;
                     break;
            default : exit(0);
        }
    }
  
  return 0;
}
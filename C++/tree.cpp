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
 

void InsertNode(int num)
{
    if(root==NULL)
    {
       root = new Node(num);
       last = root;
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
               last = temp->left;
                return;
            }
            else q.push(temp->left);
            if(temp->right==NULL)
            {
                temp->right = new Node(num);
                last = temp->right;
                return;
            }
            else q.push(temp->right);
            q.pop();
        }
    }
}
       
void Delete(int num)
{
    queue<Node *> q;
    q.push(root);
    
    while(!q.empty())
    {
        Node *temp = q.front();
        
        if(temp->data==num)
        {
            if(temp->left==NULL&&temp->right==NULL) 
            {
                temp==NULL;
                return;
            }
            else
            {
                temp->data = last->data;
                while(!q.empty()) q.pop();
                
                q.push(root);
                while(!q.empty())
                {
                    Node *temp1 = q.front();
                    if(temp1->left!=NULL) 
                    {
                        if(temp1->left==last)
                        {
                            last = NULL;
                            last = temp1->left;
                            return;
                        }
                        else q.push(temp1->left);
                    }
                    if(temp1->right!=NULL)
                    {
                        if(temp1->right==last)
                        {
                            last = NULL;
                            last = temp1->right;
                            return;
                        }
                        else q.push(temp1->right);
                    }
                    q.pop();
                }
            }
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
int LevelOrder(struct Node *root,int flag)
{
    int count = 0;
    if(root==NULL) return count;
    
    queue<Node *> q;
    q.push(root);
    count++;
    while(!q.empty())
    {
        Node *temp = q.front();
        if(flag==1) cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left!=NULL) 
        {
            q.push(temp->left);
            count++;
        }
        if(temp->right!=NULL){
            q.push(temp->right);
            count++;
        }
        
    }
    return count;
}

int LeafNodes(struct Node* root)
{
    if(root==NULL) return 0;
    
    if(root->left==NULL&&root->right==NULL) return 1;
    
    return LeafNodes(root->left) + LeafNodes(root->right);
}

int Height(struct Node * root)
{
    if(root==NULL) return 0;
    
    if(root->left==NULL&&root->right==NULL) return 0;
    
    int l = Height(root->left);
    int r = Height(root->right);
    
    return 1 + max(l,r);
}

int main()
{
  root = NULL;
    int choice = 0,num=0;
    
    while(1)
    {
        cout<<"Please Enter Your Choice... \n1.Insert new node\n2.Delete Node\n3.Preorder Traversal\n4.Inorder Traversal\n5.Postorder Traversal\n6.Levelorder Traversal\n7.Count Nodes\n8.Count Leaf Nodes\n9.Count Non-Leaf Nodes\n10.Height of the tree\n";
        cin>>choice;
        switch(choice)
        {
            case 1 : cout<<"Please Enter the data: ";
                     cin>>num;
                     InsertNode(num);
                     break;
            case 2 : cout<<"Please Enter the data to be deleted : ";
                     cin>>num;
                     Delete(num);
                     break;
            case 3 : Preorder(root);
                      cout<<endl;
                      break;
            case 4 : Inorder(root);
                     cout<<endl;
                     break;
            case 5 : Postorder(root);
                     cout<<endl;
                     break;
            case 6 : LevelOrder(root,1);
                     cout<<endl;
                     break;
            case 7 : cout<<LevelOrder(root,0)<<"\n";
                     break;
            case 8 : cout<<LeafNodes(root)<<"\n";
                     break;
            case 9 : cout<<LevelOrder(root,0) - LeafNodes(root)<<"\n";
                     break;
            case 10 : cout<<Height(root)<<"\n";
                      break;
            default : exit(0);
        }
    }
  
  return 0;
}

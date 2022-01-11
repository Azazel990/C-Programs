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
 
int LevelOrder(struct Node *root,int flag)
{
    int count = 0,c=0;
    if(root==NULL) return count;
    
    queue<Node *> q;
    q.push(root);
    count++;
    while(!q.empty())
    {
        Node *temp = q.front();
        if(flag==1) cout<<temp->data<<" ";
        q.pop();
        if(flag==3)
        {
            if(temp->left==last) temp->left = NULL;
            else if(temp->right==last) temp->right = NULL;

            if(q.size()==0&&temp!=root)
            {
                last = temp;
                return 0;
            }
        }
      
        
        if(temp->left!=NULL) 
        {
            q.push(temp->left);
            count++;
        }
        if(temp->right!=NULL){
            q.push(temp->right);
            count++;
        }
        if(temp->left&&temp->right) c++;
    }
    if(flag==0) return count;
    else if(flag==3) return last->data;
    return c;
}

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
    int flag = 0;
    if(last->data==num) flag = 2;
    Node *temp = q.front();
    while(!q.empty()&&!flag)
    {
        if(temp->data==num) break;

        if(temp->left->data==num)
        {
            if(temp->left->left==NULL&&temp->right->right==NULL)
            { 
                temp->left = NULL;
                return ; 
            }  
            flag = 1;
            temp = temp->left;
            break;
        }
        else if(temp->right->data==num)
        {
            if(temp->right->left==NULL&&temp->right->right==NULL) 
            {
                temp->right = NULL;
                return ;
            }
            flag = 1;
            temp = temp->right;
            break;
        }
        else
        {
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        q.pop();        
        temp = q.front();
    }

    if(flag==1)
    {
         temp->data = last->data;
         LevelOrder(root,3);
    }
    else if(flag==2) LevelOrder(root,3);
    
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

void LeftView(struct Node* root)
{
    if(root==NULL) return ;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        
        if(temp) 
        {
            cout<<temp->data<<" ";
            while(q.front()!=NULL)
            {
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

                q.pop();
                temp = q.front();
            }
            q.push(NULL);
        }
        q.pop();       
    }  
}

void RightView(struct Node* root)
{
    if(root==NULL) return ;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node *temp = q.front();

        if(temp)
        {
            while(q.front()!=NULL)
            {
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

                q.pop();

                if(q.front()==NULL) cout<<temp->data<<" ";

                temp = q.front();
            }
            q.push(NULL);
        }
        q.pop();
    }
}

string check(struct Node *root){
    return ((LevelOrder(root,0) -  LevelOrder(root,2) - LeafNodes(root)) ? "NO" : "YES" );
}

void SpiralForm(struct Node *root){
    queue<Node*> q;
    stack<Node *> s;
    s.push(NULL);
    s.push(root);
    int i = 0;
    while(!q.empty()||!s.empty())
    {
        if(i%2==0)
        {
            Node *temp = s.top();
            if(temp)
            {
                while(s.top()!=NULL){
                    cout<<temp->data<<" ";
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                    s.pop();
                    temp = s.top();
                }
                if(!q.empty()) q.push(NULL);
                s.pop();
            }
        }
             else
            {
                Node *temp = q.front();
               if(temp)
               {
                    s.push(NULL);
                while(q.front()!=NULL){
                    cout<<temp->data<<" ";
                    if(temp->left) s.push(temp->left);
                    if(temp->right) s.push(temp->right);
                    q.pop();
                    temp = q.front();
                }
                q.pop();
               }
              if(s.top()==NULL) s.pop();
            }
           i++;
        }
       
}

void MirrorTree(struct Node* root)
{
    if(root==NULL) return ;
    
    struct Node *temp ;

    MirrorTree(root->left);
    MirrorTree(root->right);

    temp = root->left;
    root->left = root->right;
    root->right = temp;
}

int main()
{
  root = NULL;
    int choice = 0,num=0;
    
    while(1)
    {
        cout<<"Please Enter Your Choice... \n1.Insert new node\n2.Delete Node\n3.Preorder Traversal\n4.Inorder Traversal\n5.Postorder Traversal\n6.Levelorder Traversal\n7.Count Nodes\n8.Count Leaf Nodes\n9.Count Non-Leaf Nodes\n10.Height of the tree\n11.Count Full Nodes\n12.Left View\n13.Right View\n14.Check if Complete Binary Tree\n15.Spiral Form\n16.Mirror Tree\n";
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
                     cout<<endl;
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
            case 11 : cout<<LevelOrder(root,2)<<"\n";
                     break;
            case 12 : LeftView(root);
                      cout<<endl;
                      break;
            case 13 : RightView(root);
                      cout<<endl;
                      break;
            case 14 : cout<<check(root)<<"\n";
                      break;
            case 15 : SpiralForm(root);
                      cout<<endl;
                      break;
            case 16 : MirrorTree(root);
                      cout<<endl;
                       break;
            default : exit(0);
        }
    }
  
  return 0;
}

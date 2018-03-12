#include<iostream>
#include<queue>
using namespace std;

class node{
     public:
     	int data;
     	node *right;
     	node *left;

     	node(int x){

     		data=x;
     		right=NULL;
     		left=NULL;
     	}
}; 

node* levelorder(int n){

    if(n==1)
    {
        node *root=NULL; 
        int x;
        cin>>x;
        root=new node(x);
        return root;
    }

    node *root=NULL; 
        int x;
        cin>>x;
        root=new node(x);
    if(x==-1){
        return NULL;
    }
   //create this new mehod() to 
    queue<node *> lrqueue;

    lrqueue.push(root);
    int count=n;
    while(!lrqueue.empty()||count){

        node *temp=lrqueue.front();
        lrqueue.pop();

        cin>>x;
        if(x!=-1&&count!=0){
            temp->left=new node(x);
            lrqueue.push(temp->left);
            --count;
        }
        cin>>x;
        if(x!=-1&&count){
            temp->right=new node(x);
            lrqueue.push(temp->right);
            --count;
        }

    }



    return root;

}

void inorder(node *root){

    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


int main(){
    void inorder(node *);
    int n;
    cin>>n;    
    node *root=NULL;

    root=levelorder(n);
    inorder(root);
	return 0;
}
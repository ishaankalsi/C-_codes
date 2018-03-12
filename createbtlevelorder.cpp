#include<iostream>
#include<queue>
using namespace std;


class node{

public:
	int data;
	node *left;
	node *right;

	node(int x){
       
       data=x;
       left=NULL;
       right=NULL;
	}
};

node * createbtlevel(){
	int x;
	cin>>x;
	if(x==-1){
		return NULL;
	}
	node *root=new node(x);

	queue<node*> q;
	q.push(root);
      
	while(q.empty()==false){
		node *cur=q.front();
		q.pop();
		cin>>x;
		if(x!=-1){
          cur->left=new node(x);
          q.push(cur->left);  
		} 
		cin>>x;
		if(x!=-1){
          cur->right=new node(x);
          q.push(cur->right);
		}
	}

	return root;
}

void printbt(node* root){
    
    if(root==NULL){
    	return;
    }
    
    printbt(root->left);
    cout<<root->data;
    printbt(root->right);

}

int main(){
    node * createbtlevel();
    void printbt(node*);
    node *root=NULL;

    root=createbtlevel();
    printbt(root);

	return 0;
}
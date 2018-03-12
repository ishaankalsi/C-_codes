#include<iostream>


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
}

node* createbt(){

    int x;
    cin>>x;

    if(x==-1){
    	return NULL;
    }

    node *root=new node(x);

    root->left=createbt();
    root->right=createbt();

    return root;
}


node* createlevelbt(){
    
    node *root=NULL;

    int x;
    cin>>x;

    root=new node(x);

    queue<node*> q;

    q.push(root);

    while(!q.empty()){

    node *cur=q.front();

    q.pop();

    cin>>x;
    if(x!=-1){
       cur->left=new node(x);
    }        
    cin>>x;
    if(x!=-1){
    	cur->right=new node(x);
    }


    }

    return root;

}


int main(){

    
    node *root=NULL;
    node *root2=NULL;
    node* createbt();
    node* createlevelbt();
    root=createbt();
    root2=createlevelbt();

	return 0;
}
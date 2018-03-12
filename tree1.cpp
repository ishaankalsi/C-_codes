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

};


node* createbt(){
    
    int x;
    cin>>x;
    if(x==-1){
    	return NULL;
    }

    node* newnode=new node(x);
    cout<<"enter the left child of\n"<<newnode->data<<"\n";
    newnode->left=createbt();
    cout<<"enter the right childof \n"<<newnode->data<<"\n";
    newnode->right=createbt();
    
    return newnode;

}


void printbt(node* root){
    
    if(root==NULL){
    	return;
    }
	
	printbt(root->left);
	cout<<root->data<<" ";
	printbt(root->right);
    


}

/*
void inputlevel(node* root){
       
       //this prints the level order
       
       if(root==NULL){
       	return NULL;
       }

       queue<node*> level;
       level.push(root);
       level.push(NULL);
       
       while(!q.empty()){

       	node *cur=q.front();
       	cout<<cur->data<<" ";
       	q.pop();


       	if(cur->left){
       		q.push(cur);
       	}
       	if(cur->right){
       		q.push(cur);
       	}


       }
 


}
*/

int countnodes(node* root,int count){
       
       if(root==NULL){
        count=count-1;
       	return count;
       }

       countnodes(root->left,count);
       
       countnodes(root->right,count);
       count+=2;
       
       return count;


}



int main(){
    
    node *root=NULL;
    node* createbt();
    void printbt(node*);
    root=createbt();

    printbt(root);

    int count=countnodes(root,1);
    cout<<count;

	return 0;
}



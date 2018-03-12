#include<iostream>
#include<map>

using namespace std;


class node {
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

node * createbt(){

	node *root=NULL;
    int x;cin>>x;
	if(x==-1){
		return NULL;
	}
	root=new node(x);
    
    root->left=createbt();
    root->right=createbt();

    return root;
}

void printbt(node *root){

	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	printbt(root->left);
	printbt(root->right);

}
int distance=-1;
map<int,int> distancenode;
void verticalsum(node *root){
    
    if(root==NULL){
    	return ;
    }
    ++distance;
    distancenode[distance]=root->data;
    verticalsum(root->left);
    verticalsum(root->right);
    
}


int main(){
  
   node * root=NULL;
   void printbt(node *);

   root=createbt();
   printbt(root);
   void=verticalsum(root);
   map<int,int>::iterator i;
   
   return 0;
}
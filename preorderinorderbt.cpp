#include<iostream>

using namespace std;

class node{
public:
	int data;
	node* right;
	node* left;

	node(int x){
      
      data=x;
      right=NULL;
      left=NULL;
	}
};

int findrootpos(int pre_ele,int *inorder,int n){

	for(int i=0;i<=n-1;i++){
       
       if(pre_ele==inorder[i]){
       	return i;
       } 
	}
	return -1;

}

int index=0;

void createbt(node* btroot,int *preorder,int *inorder,int n){
      
      int findrootpos(int,int *,int);
      if(btroot==NULL){
      	if(preorder[index]){
         btroot=new node(preorder[index]);
         return;
         }
      }

      int mid=findrootpos(preorder[index],inorder,n);
      if(mid==-1){
      	return;
      }
     
      int beg1=0,beg2=mid+1,end1=mid-1,end2=n-1;

      int i=beg1,j=beg2;
      
      //left arr
      while(i!=end1+1){
      	if(inorder[i]==preorder[++index]){
      		createbt(btroot->left,preorder,inorder,n);
      	}
      	++i;
      }
      //right arr
      while(j!=end2+1){
      	if(inorder[j]==preorder[++index]){
      		createbt(btroot->right,preorder,inorder,n);
      	}
      	++j;
      }

      
}

void printbt(node *root){
    
    if(root==NULL){
    	return;
    }

    cout<<(root->left)?cout<<(root->left->data):cout<<"END"<<"=>"<<root->data<<"<="<<(root->right)?cout<<root->right->data:cout<<"END"<<endl;
    printbt(root->left);
    printbt(root->right);

    
}

int main(){
	void createbt(node*,int *,int *,int);
	void printbt(node*);
	node* root=NULL;

	int n;
	cin>>n;

	int *preod=new int[n];
	for(int i=0;i<=n-1;i++){
		cin>>preod[i];
	}

	cin>>n;

	int *inod=new int[n];
	for(int i=0;i<=n-1;i++){
		cin>>inod[i];
	}
	
	createbt(root,preod,inod,n);
	printbt(root);
    return 0;
}
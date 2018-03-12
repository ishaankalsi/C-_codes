#include<iostream>
#include<queue>
#include<stack>

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


node * levelbt(){
   
    //node *root=NULL;
    int x; cin>>x;
    
    if(x==-1){return NULL;}
    
    node *root=new node(x);
    queue<node*> q;
    q.push(root);
    // node *cur=root;
    while(q.empty()==false){
       node *cur=q.front();
       q.pop();
       int x;cin>>x;
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

void printbt(node *root){

	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	printbt(root->left);
	printbt(root->right);
}

void nonrecurpre(node *root){

	if(root==NULL){
		return;
	}

    stack<node*> stackrl;

    stackrl.push(root);

    while(stackrl.empty()==false){
    	node *cur=stackrl.top();
    	cout<<cur->data<<" ";
        stackrl.pop();

        if(cur->right){
        	stackrl.push(cur->right);
        }
        if(cur->left){
        	stackrl.push(cur->left);
        }

    }


}


void printlevel(node * root) {      //O(N)
    if (root == NULL) {
        return;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (q.empty() == false) {
        node * cur = q.front();
        q.pop();

        if (cur == NULL) {
            cout << endl;
            if (!q.empty()) q.push(NULL);
            continue;
        }

        cout << cur->data << " ";
        if (cur->left)  q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }

}


int main(){
   node * levelbt();
   void printbt(node *);
   void nonrecurpre(node*);
   void printlevel(node*);
   node *root=NULL;

   root=levelbt();
   //printbt(root);
   nonrecurpre(root);
   cout<<endl;
   printlevel(root);
}

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
	public:
	int data;
	node *right;
	node *left;
    
    
	node (int x){
		data=x;
		right=NULL;
		left=NULL;
	}
};

node* createnode(int x){

	node * temp=new node (x);

	temp->right=NULL;
	temp->left=NULL;

	return temp; 
}


node* create_BT(){
    
    node *root=NULL;
    
    int x;
    cin>>x;

    if (x==-1){
    	return NULL;
    }

    root=createnode(x);
    
    while(1){
        //insert left node 
    	
    	root->left=create_BT();
    	//insert right node 
    	
    	root->right=create_BT();

    	break;
    }

    
    return root;       

}

void print_bt(node *root){
    
    if(root==NULL){
    	return;
    }

    cout<<root->data<<" ";
    print_bt(root->left);
    print_bt(root->right);
}


void zig_zac(node *root){

	if (root==NULL){
		return;
	}
    cout<<endl<<"print Zig_Zac"<<endl;

	queue<node *> zig_zac_level;
    int flag=1;
	zig_zac_level.push(root);
    
    stack<node *> flagged_level_store;
    
    while(zig_zac_level.empty()!=true){
    	if(flag==-1){
    		
    		while(zig_zac_level.empty()!=true){
    			node *temp=zig_zac_level.front();
				zig_zac_level.pop();
				flagged_level_store.push(temp);	
    		}

			while(flagged_level_store.empty()!=true){
				node *temp=flagged_level_store.top();
				//pass children in queue of temp.
				if(temp->left){
					zig_zac_level.push(temp->left);
				}
				if(temp->right){
					zig_zac_level.push(temp->right);
				}
                cout<<temp->data<<" ";
				flagged_level_store.pop();
			}

			flag==1;
    	}
        
        else{

        	node *temp2=zig_zac_level.front();
        	cout<<temp2->data<<" ";
            zig_zac_level.pop();
        	if(temp2->left){
        		zig_zac_level.push(temp2->left);
        	}
        	if(temp2->right){
        		zig_zac_level.push(temp2->right);
        	}

        	flag==-1;

        }


    }
    cout<<endl;

}

int main(){

    // create your binary tree here
    node *root=NULL;

    root=create_BT();
    print_bt(root);
    //2 4 1 -1 -1 2 -1 -1 6 7 -1 -1 8 -1 -1 

    zig_zac(root);
	return 0;
}

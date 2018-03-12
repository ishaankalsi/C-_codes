#include<iostream>

using namespace std;


class node{
    
    private:

	int data;
	node *right;
	node *left;

    node(int d){

    	data=d;
    	right=NULL;
    	left=NULL;

    }
      	
};

node * levelorder(){

	node *root=NULL;
}




int main(){
	
    int n;
    cin>>n;//enter number of tree elelemenets
    node *root=NULL;
    root=levelorder();

    return 0;
}
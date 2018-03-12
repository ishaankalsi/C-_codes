#include<iostream>


using namespace std;

class node {
    int val;
    node *next;
    public:

    node(int x){
    	val=x;
    	next=NULL;
    } 

    void print_val(){
    	cout<<val;
    }

};


int main(){
   /*
    //node *table;
    node *object=new node(5);
    node **table=new node*[7];
    for(int i=0;i<7;i++){
        int x;
    	cin>>x;
    	node *temp=new node(x);
    	table[i]=temp;
    }
    for (int i=0;i<7;++i){
    	table[i]->print_val();
    }
    object->print_val();*/
    int size=sizeof("hello")/sizeof(char);
    cout<<size;
    //table=new node[7];

	return 0;
}
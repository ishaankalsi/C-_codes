#include<iostream>

using namespace std;

class node{
 
    public:
    	int data;
    	node *next;

    node(int x){
    	data=x;
    	next=NULL;
    }

};

node* createlist(int n){

	node *head=NULL;
	node *tail=NULL;
    int x;
    while(n!=0){

    	cin>>x;

    	node *temp=new node(x);

    	if(head==NULL){
    		head=temp;
    		tail=temp;
    	}

    	else{
    		tail->next=temp;
    		tail=temp;

    	} 
    	--n;        


   }

   return head;
    	

}


void printlist(node *head)
{
    
    while(head){

    	cout<<head->data<<" ";
    	head=head->next;
    }
}

void deletenode(node *head,int q)
{   
	int x;
    
    void printlist(node*);

    while(q){
    	cin>>x;

        node *cur=head;

        node *prev=NULL;
        //prev->next=head;

    	if(head==NULL){
    		break;
    	}

    	int pos=0;
        
        while(pos!=x && cur)
        {   
        	prev=cur;
        	cur=cur->next;
        	++pos;
        }



        if(pos==x){
        	//cout<<"reached1";

        if(pos==0){
        	if(cur->next!=NULL){
        		prev=cur;
        		//cout<<"reached2reahced1";
        		head=cur->next;
        		prev->next=cur->next;
        		//cout<<"reached1reahced1";
        		delete cur;
        		cur=NULL;
        		cout<<"reached";
        		printlist(head);
                
        	}
        	else{

        		delete cur ;
        		cur=NULL;
        		head=NULL;
        	}
        }
    	else if(cur->next){
    			prev->next=cur->next;
    			cur->next=NULL;
    			delete cur;
    			printlist(head);


    		}
    	else{
    			prev->next=NULL;
    			cur->next=NULL;
    			delete cur;
    			printlist(head);
    		}
    	}


    	--q;

    	/*while(cur->data!=x && cur){
            prev=cur;
            cur=cur->next;

    	}

    	if(cur->data==x){
    		if(cur->next){
    			prev=cur->next;
    			cur=NULL;
    			delete(cur);


    		}
    		else{
    			prev=NULL;
    			cur=NULL;
    			delete(cur);
    		}
    	}
    	else
    	{
    		return;
    	}*/


    }



}

int main(){
	node* createlist(int);
	void deletenode(node*,int);
	void printlist(node*);
    int n;
    int q;
	cin>>n;


	cin>>q;

	node *head=NULL;

	head=createlist(n);
    //printlist(head);
    
    deletenode(head,q);

    

    

return 0;
}
#include<iostream>

using namespace std;


class node{
public:
	int data;
	node *next;
    
    node (int x){
    	data=x;
    	next=NULL;

    }
};

node *createlist(int n){
    
    if(n==0){
    	return NULL;
    }
	node * head=NULL;
	node *tail=NULL;
    
    int x;
    cin>>x;
    node *firstele=new node(x);
    head=firstele;
    tail=firstele;

    int nofele=1;
    while(nofele!=n){
       cin>>x;
       node *temp=new node(x);
       tail->next=temp;
       tail=temp;
       ++nofele;
    } 

    return head;
}

void printlist(node *head){
    
    if(head==NULL){
    	return ;
    }

    cout<<head->data<<" ";
    printlist(head->next);
}

node* insertionsort(node *head){
    
    if(head==NULL){
    	return NULL;
    } 

    if(head->next==NULL){
    	return NULL;
    }

    node *cur=head;
    node *prev=NULL;
    node *cur_i=head;
    node *prev_i=NULL;

    if(cur->next){
    	prev=cur;
    	prev_i=cur_i;
    	cur=cur->next;
    	cur_i=cur_i->next;
        prev->next=cur;
        prev_i->next=cur_i; 
    }

    while(cur){
        
        if(cur->data<prev->data){
        	
        	if(cur->next)prev->next=cur->next;//prev maintained
        	else prev->next=NULL;
        	
        	if(cur->data<head->data){//if insert at head
        		node *temp=cur;
        		if(cur->next)cur=cur->next;//cur maintained
        		else cur=NULL;
        		temp->next=head;
        		head=temp;

        		break;
        	}

        	while(cur_i!=prev){//if insert cur in between
                
                if(cur->data<cur_i->data){
                  node *temp=cur;
                  if(cur->next)cur=cur->next;//cur maintained
        		  else cur=NULL;
                  temp->next=cur_i;
                  prev_i->next=temp;
                  prev_i=temp;//cur_iand prev_i maintained   
                }
        	}

        }
    }

    return head;    

}

node * tryf(node *head){

	node *prev=NULL,*cur=head;
    
    //prev->next=cur;
    //cout<<cur->data;
    while(cur){

    	prev=cur;
    	cout<<prev->data<<" ";
    	cur=cur->next;
    	prev->next=cur;

    }
     
}

// node * insertionsort2(node *head){
    
//     if(head==NULL){
//     	return NULL;
//     } 

//     if(head->next==NULL){
//     	return head;
//     }

//     node *prev=head,*cur=head->next;
//     node *cur_i=head,prev_i=NULL;
//     while(cur){

//     	if(cur->data<prev->data){
//     		node * temp=cur;
    		
//     		if(temp->data<head->data){
//                	temp->next=head;
//                	head=temp;
               	
//                	prev_i=cur_i;
//                	cur_i=cur_i->next;
//                	cur=cur->next;
//                	prev->next=cur;
//             }
//             else{

//                 while(cur_i!=prev){
               
//                   if(cur_i->data>temp->data){
//                   	temp->next=cur_i;
//                   	prev_i->next=temp;
//                   	break;

//                   }
//                   prev_i=cur_i;
//                   cur_i=cur_i->next;     

//                 }
//                 cur_
//             }
//     	}

//     	prev=cur;
//     	cur=cur>next;
//     	prev->next=cur;
//     }
    



// }


node* insertionsort3(node *head){
   
    if(head==NULL){
    	return NULL;
    }
    if(head->next==NULL){
        return head;
    }

    node *cur=head->next,*cur_i=head->next,*prev=head,*prev_i=head;
    prev->next=cur;
    prev_i->next=cur_i;

    while(cur){

    	if(cur->data<head->data){
    		cur->next=head;
    		head=cur;
    		cur_i=head->next;
    		prev_i=head;
    	}

    	if(cur->data<prev->data){

    		while(cur_i!=prev||cur_i){
    			
    			node *temp=cur;//delete cur after assigning temp
    			
    			if(temp->data<cur_i->data){//cur set at right position
    				temp->next=cur_i;
    				prev=cur;
    				cur=cur->next;
    				prev->next=cur;
    				prev_i->next=temp;
    				cur_i=head->next;
    				prev_i=head;
                    break;

    			}

    			prev_i=cur_i;
    			cur_i=cur_i->next;


    		}
    	}

    	else{
    		prev=cur;
    		cur=cur->next;
    	}

    }

    return head;


}


int main(){
    
    node * createlist(int n);
    void printlist(node *);
    node *insertionsort(node *);
    node *tryf(node *);
    node *insertionsort3(node *);
    int n;
    cin>>n;

    node *head;
    head=createlist(n);
    //printlist(head);
    //node *head2;
    //head=insertionsort(head);
    //head=tryf(head);
    printlist(head);
	head=insertionsort3(head);
	printlist(head);
	return 0;
}



//gsoc
//linux eliminate linux
//beginner linux mint
//ssvbu8 

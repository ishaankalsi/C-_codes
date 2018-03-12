#include<iostream>
#include<utility>

using namespace std;



class node{

public:
	int data;
	node *next;
	node(int d){
		data=d;
		next=NULL;

	}
};

 node* createlist(){
    
    node *head=NULL;
    node *tail=NULL;
    
    while(1){
    int data;
    cin>>data;

        if(data==-1){

        	break;
        }
    node *var=new node(data);

    if(head==NULL){
    	head=var;
    	tail=var;
    } 
    else{

    	tail->next=var;
    	tail=var;
    }   
    
    }


    return head;
}


void printlist(node *head){
    
    if(head==NULL){
    	return;
    }

    while(head){
    	cout<<head->data<<"->";
    	head=head->next;
    }
    


}


node* circlelist(){

    
    node *head=NULL;
    node *tail=NULL;
    
    while(1){
    int x;
    cin>>x;

    if(x==-1){
    	break;
    }

    node *temp=new node(x);

    if(head==NULL){
    	head=temp;
    	tail=temp;
    }
    else{
    	tail->next=temp;
    	temp->next=head;
    	tail=temp;
    }

}

return head;
}


pair<node*,node*> divclist(node* head){

     node* head2=NULL;
     node* ptr1=head;
     int count=1;
     node* ptr2;
     if(head->next){
     ptr2=head->next;
     }

     while(ptr2!=ptr1){
     	if(ptr2->next){
     	ptr2=ptr2->next;
     	++count;
     }
     }

     int count2=1;

     while(count2!=count){
     	ptr2=ptr2->next;
     	++count2;
     }

     ptr2->next=NULL;


     int mid=count/2;

     int i=1;

     while(i!=mid){

      ptr1=ptr1->next;
      ++i;    	
     }
     
     if(ptr1->next){
     head2=ptr1->next;
     }
     // node *temp=head2;
     // while(temp->next){
     // 	temp=temp->next;
     // }


     ptr1->next=NULL;
      
     pair<node*,node*> heads;
     heads.first=head;
     heads.second=head2;

     return heads;


}


void printclist(pair<node*,node*> div){

    node * head1=NULL;
    node * head2=NULL;

    head1=div.first;
    head2=div.second;

    while(head1){
    	cout<<head1->data<<"->";
    	head1=head1->next;
    }

    cout<<endl;

    while(head2){
    	cout<<head2->data<<"->";
    	head2=head2->next;
    }

}




int main(){

	node *head=NULL;
    node *head2=NULL;
    //node* createlist();
    node* circlelist();
    void printclist(pair<node*,node*>);
    pair<node*,node*> divclist(node*);    
    //head=createlist();
    head2=circlelist();
    pair<node*,node*> div;
    div=divclist(head2);
    printclist(div);
    
    //printlist(head);

	return 0;
}



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

node* createlist()
{

        node *head=NULL;
        node *tail=NULL;
        int x;
        int flag=0;
        while(1)
        {
        
        cin>>x;
        if(x==-1)
        {
        	return head;
        }
        node *temp=new node(x);

        if(head==NULL)
        {
        	head=temp;
        	tail=temp;
        }
        // if(flag==1)
        // {
        //     continue;
        // }
        else{
        	
        	while(temp->next!=NULL)
        	{
            
            if(temp->data==x)
            {
            flag=1;
            cout<<"reached";
            }
            cout<<"reached2";
            temp=temp->next;


        	}

            if(flag==1){
            // 	temp->next=pos;
            continue;
            }
            else{
            
            tail->next=temp;
            tail=temp;
            }

        }

        }

}

void printlist(node *head){
        
        while(head!=NULL){
        	cout<<head->data<<" ";
        	head=head->next;
        }
}

int main(){
        
        node *head=NULL;
        node* createlist();
        void printlist(node*);
        head=createlist();
        printlist(head);

return 0;
}
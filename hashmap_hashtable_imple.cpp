

#include<iostream>


class hashnode{
    string key;
    int value;
	hashnode *next=NULL;

	public:

		hashnode(string key,int value){
			this.key=key;
			this.value=value;
			this.next=NULL;
		}

};
class hashmap{

	    hashnode **table;
        int table_size;
        
        int hash_func(string key){
             
            int num = 0;
        	int mul = 1;
        	for (int i = 0; i < key.size(); ++i) {
            num += (key[i] % table_size) * mul;
            mul = mul * 31;
            mul %= table_size;
            num %= table_size;
        }
        return num;                
 
        }

        void rehash(){
            
            //hashnode **old_table=new hashnode*[table_size];
            hashnode **old_table=table;
            int new_table_size=table_size*2;
            hashnode **new_table=new hashnode*[new_table_size];

            for(int index=0;i<table_size;++i){
            	hashnode *head=old_table[index];

            	while(head){
            		hashnode *new_node=new hashnode(head->key,head->value);
            		new_node->next=new_table[index];
            		new_table[index]=newnode;
            		head=head->next;
            	}
            }

            delete old_table;
            table=new_table;
            table_size=new_table_size;


        }
        double loadfactor(){
        	return  double(no_of_ele_sze)/table_size;
        }

    public:
    	hashmap(){
    		table=new hashnode*[7];
    		table_size=7;
    		no_of_ele_sze=0;
    	}


    	void insert(string key,int value){
    		hashnode *newnode=new hashnode(key,value);

    	 	int index=hash_func(key);
    	 	newnode->next=table[index];
    	 	table[index]=newnode;
    	 	++no_of_ele_sze;
            
            if(loadfactor()>0.7){rehash();}
    	}

    	int find(string key){
            
            int index=hash_func(key);

            hashnode *head=table[index];

            while(head){
            	if(head->key==key){
            		return head->value;
            	}
       
            }



            return -1;

    	}
         

};

int main(){
    
    hashmap first;
    first.insert("key1",123);
    first.insert("key2",456);
    first.insert("key3",789);
    int value=first.find("key1");
    cout<<value<<" ";

	return 0;
}
#include<iostream>
using namespace std;

class hashnode{
    public:
    string key;
    int value;
    hashnode *next;

    hashnode(string k,int v){
        
        key=k;
        value=v;
        next=NULL;
    }
};

class hashmap{
    private:
    hashnode **table;

    public:
    	hashmap(int size){

    		table=new hashnode*[size];
    	}

    	void insert(string k,int v){
    		hashnode temp(k,v);
    	}
};


int main(){
    hashmap h(5);

    h.insert("abc",1);  
	return 0;
}
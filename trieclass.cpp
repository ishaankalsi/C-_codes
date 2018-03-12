#include<iostream>
#include<unordered_map>
using namespace std;

#define hashmap unordered_map<char,node*>;

class node{

char data;
bool isterminal;
hashmap map;


public:
	node(char d){
		data=d;
		isterminal=false;
	}
}

class trie{
    node *root;

public:
	trie(){
		root=new node('\0');
	}
	void addword(char *word){
		node *temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];

			
			if(temp->m.count(ch)==0){
				node *child=new node (ch);
				temp->m[ch]=child;
				temp=child;
			}
			else{
				temp=temp->m[ch]
			}
		}
		temp->isterminal=true;
	}

	bool search(char *word){
		node *temp=root;

		for(int i=0;word[i]!='\0';i++){
			char      ch=word[i];

			if(temp->m.count(ch)==0){
				return false;
			}
			else{
				temp=temp->m[ch];
			}
		}
		return temp->isterminal;
	}

}

int main(){
    
    char words[100][5]={"apple","ape","code","coder","coding"};
    
    trie t;

    for(int i=0;i<5;i++){
         
    }
	return 0;
}
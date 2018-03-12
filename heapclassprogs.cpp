#include<iostream>
#include<queue>
using namespace std;

bool comparator()(int a,int b){
	if(a<b){
		return true;
	}
	else{
		return false;
	}
}


class compare{
    public:
    	bool operator()(const int &a,const int &b){
    		if(a>b){
    			return true;
    		}
    		else{
    			return false;
    		}
    	}
};

int main(){
    
    priority_queue<int> mx;//maxheap
    priority_queue<int,vector<int>,compare > mn;
    int x;
    if(x!=-1){
    cin>>x;
    mx.push_back(x);
    if(x!=-1){
    cin>>x;
    mn.push_back(x);
    }
}
    while(1){

    	if(x!=-1){
          
          
    	}

    }

	return 0;
}
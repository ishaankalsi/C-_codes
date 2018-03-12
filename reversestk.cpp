#include<iostream>
#include<stack>
#include<queue>


using namespace std;



stack<int> reverse(stack<int> stk,int n){
    
    queue<int> q;

    while(!stk.empty()){

    	q.push(stk.top());
    	stk.pop();
    } 

    while(!q.empty()){

    	stk.push(q.front());
    	q.pop();
    }

    return stk;

}




void reverse2(stack<int> &stk,stack<int> &rev,int n){

    

    if(stk.empty()){
    	return ;
    }

    rev.push(stk.top());
    stk.pop();

    reverse2(stk,rev,n);
}

stack<int> reverse3(stack<int> stk,int n){

    stack<int> rev;

    if(stk.empty()){
    	return rev;
    }

    rev.push(stk.top());
    stk.pop();

    reverse3(stk,n);
}


int main(){
    
    //void reverse(stack<int> &,int)
    stack<int> stk;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	stk.push(x);
    }

    //stk=reverse(stk,n);
    stack<int> rev;
    //reverse2(stk,rev,n);
    //for(int i=0;i<stk;i++){
    rev=reverse3(stk,n);
    while(!rev.empty()){
    	cout<<rev.top()<<endl;
    	rev.pop();
    }
    

	return 0;
}
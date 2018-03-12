#include<iostream>
#include<stack>
#include<queue>


using namespace std;




int main(){
   
queue<int> q1;

queue<int> q2;
int flag=1;
//q1 push and pop q2 tp 
//enter 1 push enter 2 pop
while(flag){
int ch;
cin>>ch;


	//push
	if(ch==1){
	int x;
	cin>>x;
	q1.push(x);
    }

	//pop
    if(ch==2){
	if(q1.empty()){
		break;
	}

	int i=0;
	while(i!=q1.size()-2){
		int x=q1.front();
		q1.pop();		
		q2.push(x);
	}
	while(!q2.empty()){
		int y=q2.front();
		q2.pop();
		q1.push(y);
	}
    
    }

    if(ch==3){
    //print q1
    for(int i=0;i<q1.size();i++){
    	cout<<q1.front();
    	q1.pop();
    }

    }
    if(ch==4){
    	//print q2
    	for(int i=0;i<q2.size();i++){
    		cout<<q2.front()<<"->";
    		q2.pop();
    	}
    }
	
	



cin>>flag;

}
    


return 0;
    
}
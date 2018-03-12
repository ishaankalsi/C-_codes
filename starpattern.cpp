#include<iostream>

using namespace std;


int main(){
    
    int n;
    cin>>n;
    
    n=n-1;
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=n;j++){
    		
    		if(i<=n/2){
    		if(j>=(n/2)-i&&j<=(n/2)+i)
    		{cout<<"*"<<" ";}
    	    else{
    	    	cout<<" "<<" ";
    	    }
    	    }
    	    if(i>n/2){
    		if(j>=(n/2)-(n-i)&&j<=(n/2)+(n-i))
    		{cout<<"*"<<" ";}
    	    else{
    	    	cout<<" "<<" ";
    	    }
    	    }






    	}
    	cout<<"\n";
    }   
	

	return 0;
}
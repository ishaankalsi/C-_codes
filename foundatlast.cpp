#include<iostream>

using namespace std;
int set=0,idx=0;
int found(int *a,int n,int ele,int i){
        
    if(i>n){
        if(set==1){
    	    return idx;
        }
        else{
        	return -1;
        }
    }
    //cout<<"a[n]"<<a[n]<<"ele"<<ele<<" ";
    
    if(a[i]==ele){
        idx=i;
        set=1;	
    }
    //cout<<"idx"<<idx<<"set"<<set; 
    
    found(a,n,ele,++i);    

}

int main(){
    int found(int*,int,int,int);
    int n;
    cin>>n;
    if(n>0){
    int *a=new int[n];

    for(int i=0;i<n;i++){
    	cin>>a[i];
    }    

    int ele;
    cin>>ele;
    int idx;
    idx=found(a,n-1,ele,0);

    cout<<idx;
    }
	return 0;
}
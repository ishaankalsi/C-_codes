#include<iostream>

using namespace std;

int main(){
    int lastindex(int *,int,int,int);
    int n;
    cin>>n;

    

    if(n>0){
    int *a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }	

    int ele;
    cin>>ele;
    int pos;
    pos=lastindex(a,n,ele,0);
    cout<<"\n "<<pos;

    }
    else{
    	cout<<-1;
    }
    
	return 0;
}


int lastindex(int a[],int n,int ele,int i){
    int index,flag;
    //cout<<a[i];

    if(a[i]==ele){
     index=i;
     flag=1;
     cout<<"\n"<<flag;
    }

    if(i>n-1){
     if(flag==1){
     	return index;
     }
     else{
     	//cout<<"\n";
     	return -1;
     }
    }
    
    lastindex(a,n,ele,++i);
}
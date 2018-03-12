#include<iostream>

using namespace std;

int main(){
    int lsearch(int *,int ,int,int);
    int n;
    //int flag=-1;
    cin>>n;
    int pos;
    int *a;
    if(n>0){
    a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int ele;
    cin>>ele;
    pos=lsearch(a,ele,0,n);
    cout<<pos;
    }
    else
    {cout<<-1;}
    //cout<<pos;
	return 0;
}



int lsearch(int *a,int ele,int i,int n){

     if(i>n-1){
     	return -1;
     }
     if(a[i]==ele){
     	return i;
     }
     //cout<<i;
     lsearch(a,ele,++i,n);
     



}
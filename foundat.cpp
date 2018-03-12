#include<iostream>

using namespace std;

int main(){
   int foundat(int [],int,int,int);
   int n;
   cin>>n;

   if(n<=1||n>=1000){
   	cout<<-1;
   }
   else{
    int *a;
    a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int ele;
    cin>>ele;
    
    int pos=foundat(a,n,ele,0);
    cout<<pos;
   }
	return 0;
}

int foundat(int a[],int n,int ele,int i){

if(i>(n-1)){
	return -1;
}
if(a[i]==ele){
	return i;
}
foundat(a,n,ele,++i);


}



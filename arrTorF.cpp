#include<iostream>

using namespace std;

int main(){
   bool arrTorF(int [],int,int);
   int n;
   bool b;
   cin>>n;
   if(n<=1||n>=1000){
	b=false;
}
else{
   int *a;
   a=new int[n];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
  
   b=arrTorF(a,n,0);
}
   if(b==1){
   	cout<<"true";
   }
   else cout<<"false";
   
   return 0;
}

bool arrTorF(int a[],int n,int i){

if(n<=1||n>=1000){
	return false;
}
if(i+1>n-1)
{
	return true;
}
if(a[i]>a[i+1])
{
	return false;
}
arrTorF(a,n,++i);
}




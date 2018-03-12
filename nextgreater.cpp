#include<iostream>

using namespace std;

void nextgreater(int *a,int n){
    
    int *b=new int[n];

    int greatest;
    for(int i=0;i<n;i++){

    	for(int j=i+1;j<n;j++){
            
            if(a[j]>a[i]){
             b[i]=a[j];
             break;
            }
    	}
    }

    for(int i=0;i<n;i++){
    	cout<<b[i]<<" ";
    }
}



int main(){
   void nextgreater(int *,int);
   int n;
   cin>>n;
    
   int *a=new int[n];

   for(int i=0;i<n;i++){
   	cin>>a[i];
   }

   nextgreater(a,n);
return 0;
}
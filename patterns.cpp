#include<iostream>
using namespace std;

int main(){


int r,c;
cin>>r;
r=r-1;
cin>>c;
c=c-1;

for(int i=0;i<=r;i++){

	for(int j=0;j<=c;j++){
         
         if(i<=c/2){

         	if(j>=i&&j<=c-i){
         		cout<<"*"<<" ";
         	}
         	else{
         		cout<<" "<<" ";
         	}
         }
         
	}
	cout<<"\n";
}
return 0;
}
#include<iostream>
#include<stdio.h>

using namespace std;

void replacepi(char a[][1000],int n){
	int k;

   for(int i=0;i<=n-1;i++){
      
      for(int j=0;a[i][j]!='\0';j++){
 
      	if(a[i][j]=='3'){
      		if(a[i][j+1]=='.'&&a[i][j+2]=='1'&&a[i][j+3]=='4'){
      			a[i][j]='p';
      			a[i][j+1]='i';
      			//lets remove a[i][j+4] exists statement 
      			
      				k=j+2;
      				while(a[i][k+2]){
      					a[i][k]=a[i][k+2];
      					++k;
      				}
      				a[i][k]='\0';
      				a[i][k+1]='\0';
      			
      		}
      	}
      }
   }

   for(int i=0;i<=n-1;i++){
   	for(int j=0;a[i][j]!='\0';j++){
    cout<<a[i][j];
   	}
   	cout<<endl;
   }


}
int main(){
void replacepi(char [][1000],int);
int n;
cin>>n;

char a[n][1000];

if(n>0){
  
   for(int i=0;i<=n;i++){
     
     gets(a[i]);

    
    }

   replacepi(a,n+1);

}

return 0;
}



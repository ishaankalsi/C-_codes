#include<iostream>

using namespace std;

int* merger(int *a,int *b,int n){
   
   int *c=new int[2*n];

   int i=0,j=0,k=0;

   while(i<n-1||j<n-1){
   	if(a[i]<=b[j]){
   		c[k]=a[i];
   		++k;
   		++i;
   	}
   	else{
   		c[k]=b[j];
   		++k;
   		++j;
   	}
   }

   if(i>n-1){
   	while(j<n-1){
   		c[k]=b[j];
   		++k;
   		++j;
   	}
   }
   if(j>n-1){
   	while(i<n-1){
   		c[k]=a[i];
   		++k;
   		++i;
   	}
   }

   return c;

}
int median(int *a,int *b,int n){
   int* merger(int*,int*,int);
   int *c=new int[2*n];
   c=merger(a,b,n);
   int med=(c[n-1]+c[n])/2;
   return med;
}
int main(){
   int median(int *,int *,int);
   int n;
   cin>>n;
   if(n>0){
   int *a=new int[n];
   int *b=new int[n];

   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   for(int i=0;i<n;i++){
   	cin>>b[i];
   }   
   int med=median(a,b,n);	
   cout<<med;
}
   return 0;
}



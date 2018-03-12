#include<iostream>
using namespace std;


int main(){
void unique(int *a,int,int,int );
int n;
cin>>n;
int n2=n;
int *a=new int[n];
int i=0;

if(n>0){
do{
cin>>a[i];
i++;

}while(--n2);

unique(a,n,0,0);
}
// i=0;
// while(i!=n){
// 	cout<<a[i]<<" ";
//     i++;
// }

}


void unique(int *a,int n,int i,int j){
 
// if(i>n-1){
// 	cout<<j;
// 	return;
// }

// j=a[i]^a[++i];

// cout<<j<<" ";
if(i>n-1){
	cout<<j;
	return ;
}
j=j^a[i];
//cout<<j<<" ";
unique(a,n,++i,j);

}
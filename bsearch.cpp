#include<iostream>
//#include "createarr.h"
using namespace std;

int mid; 

int main(){
int bsearch(int *,int,int,int);
//cout<<"enter array size\n";
int size;
cin>>size;
if(size<0){
	cout<<-1;
}
else{
int *b;
b=new int[size];
for(int i=0;i<size;i++){
	cin>>b[i];
}

int beg=0,end=size-1;
int pos;
int ele;
//cout<<"enter element";
cin>>ele;
pos=bsearch(b,0,size-1,ele);
cout<<pos;
}
return 0;
}


int bsearch(int *a,int beg,int end,int ele){

mid=(beg+end)/2;
if(beg>end){
	return -1;
}
if(a[mid]==ele){
return mid;
}
if(a[mid]>ele){
	bsearch(a,beg,mid-1,ele);
}
if(a[mid]<ele){
	bsearch(a,mid+1,end,ele);
}


}


#include<iostream>
using namespace std;


void intarr(int *a ,int size){

//int a[size];
cout<<"\n enter array elements";
for(int i=0;i<=size-1;i++){
cin>>a[i];


}

//cout<<"array created";
}

void int2d(int a[][20],int r,int c)
{

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void printarr(int a[],int n){

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

}

void print2darr(int a[][20],int r,int c){

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

}

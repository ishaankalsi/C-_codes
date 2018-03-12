#include<iostream>
#include "createarr.h"
using namespace std;

int main(){

	int n;
	cin>>n;
	void quicksort(int [],int,int);

	int a[20];

	intarr(a,n);

	//qs(a,0,n-1);

	quicksort(a,0,n-1);
    
	printarr(a,n); 
	return 0;
}

/*qs(int a[],int beg,int end){

	pivot=end;

	quicksort(a,beg,pivot);
	quicksort(a,pivot+1,end);

}*/


void quicksort(int *a,int beg,int end){
    
    if(beg>end){
    	return;
    }


    int pivot=end;
    


    int temp;

    for(int i=0;i<pivot-1;){
    	if(a[i]>=a[pivot]){
    		temp=a[i];
    		//cout<<i<<" ";
    		for(int j=i;j<pivot;j++){
    			a[j]=a[j+1];
    		}
    		a[pivot]=temp;
    		pivot=pivot-1;
    	}
    	else{
    		++i;
    	}
    }

    quicksort(a,beg,pivot-1);
    quicksort(a,pivot+1,end);

}


#include<iostream>

using namespace std;

void merger(int *a,int beg,int end,int mid){
    
    if(beg>=end){
    	return ;
    }

    int *left=new int[(mid-beg)+1];
    int *right=new int[end-mid];
    
    for(int i=0;i<=mid;i++){
    	left[i]=a[i];
    }

    for(int j=mid+1;j<=end;j++){
    	right[j-(mid+1)]=a[j];
    }
    
    int i=0,j=0,k=0;

    while(i<=mid||j<=end){
        
        if(left[i]>=right[i]){
        	a[k]=left[i];
        	++i;
        	++k;
        } 
        else{
        	a[k]=right[j];
        	++k;
        	++j;
        }
    }

    if(i>mid&&j<=end){
         
         while(left[i]){
         	a[k]=left[i];
         	++i;
         	++k;
         }
    }
    if(j>end&&i<=mid){
    	while(right[j]){
    		a[k]=right[j];
    		++k;
    		++j;
    	}
    }
}

void mergesort(int *a,int beg,int end){
    void merger(int *,int,int,int);
    if(beg>=end){
    	return;
    }
    
    int mid=(beg+end)/2;
    mergesort(a,beg,mid);
    mergesort(a,mid+1,end);
    merger(a,beg,mid,end);
}
int main(){
	void mergesort(int *,int,int);
    int n;
    cin>>n;

    int *a=new int[n];
    for(int i=0;i<=n-1;i++){

    	cin>>a[i];
    }

    mergesort(a,0,n-1);

	return 0;	
}



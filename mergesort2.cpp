#include<iostream>

using namespace std;


void mergesort(int *arr,int size,int beg,int end){
    void merge(int *,int,int,int);
    if(beg>=end)return;
    int mid=(beg+end)/2;
    //cout<<"mergesort reached";
    mergesort(arr,size,beg,mid); 
    mergesort(arr,size,mid+1,end);
    //cout<<"merge reached";
    merge(arr,size,beg,end);
}

void merge(int *arr,int size,int beg,int end){
    
    if(beg>=end){
    	return;
    }
   
    int mid=(beg+end)/2;

    //int *left=new int[(mid-beg)+1];
    //int *right=new int[(end-mid)+1];
    
    int left[20];
    int right[20];
    for(int i=beg;i<=mid;i++){
    	left[i]=arr[i];
    }
    for(int i=mid+1;i<=end;i++){
    	right[(mid+1)-i]=arr[i];
    }

    for(int i=beg;i<=mid;i++){
    	cout<<left[i]<<"l";
    }
    cout<<endl;
    for(int i=mid+1;i<=end;i++){
    	cout<<right[i]<<"r";
    }
    cout<<endl;


    
    int i=0,j=0,k=0;
    while(i<=mid&&j<=(end-mid)+1){

    	if(left[i]>=right[j]){
    		arr[k]=right[j];
    		++k;
    		++j;
    	}
    	else{
    		arr[k]=left[i];
    		++i;
    		++k;
    	}
    }

    if(i<mid){
    	while(i<=mid){
    		arr[k]=left[i];
    		++i;++k;
    	}
    }
    else{
    	while(j<=(end-mid)+1){
    		arr[k]=arr[j];
    		++k;++j;
    	}
    }
}

int main(){
    void mergesort(int *,int,int,int);
	int n;cin>>n;

	int *a=new int[n];

	for(int i=0;i<n;i++)cin>>a[i];
    //cout<<"mergesort reached";
	mergesort(a,n,0,n-1);
    
    for(int i=0;i<n;i++){
    	//cout<<a[i]<<" ";
    } 
    return 0;
}
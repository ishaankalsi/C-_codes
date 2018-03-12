#include<iostream>

using namespace std;


void merge(int *array,int beg,int end){
     
    int mid=(beg+end)/2;
    //cout<<"b"<<beg<<"m"<<mid<<"e"<<end<<" ";
    int leftarr[10];
    int rightarr[10];
    //int *leftarr=new int[(mid-beg)+1];
    //int *rightarr=new int[end-mid];

    for(int i=beg;i<=end;i++){
    	if(i<=mid){
    		leftarr[i]=array[i];
    	}
    	else{
    		rightarr[i-(mid+1)]=array[i];
    	}
    }

    // for(int i=beg;i<=mid;i++){
    // 	cout<<leftarr[i]<<" ";
    // }
    // cout<<endl;
    // for(int j=0;j<end-mid;j++){
    // 	cout<<rightarr[j]<<" ";
    // }
    int lcounter=0,rcounter=0,arrcounter=0;
    int rlen=end-mid;
    while(lcounter<=mid&&rcounter<=rlen){

    	if(leftarr[lcounter]<=rightarr[rcounter]){
    		array[arrcounter]=leftarr[lcounter];
    		++arrcounter;
    		++lcounter;
    	}
    	else{
    		array[arrcounter]=rightarr[rcounter];
    		++arrcounter;
    		++rcounter;
    	}
    }

    if(lcounter<=mid){
    	while(lcounter<=mid){
    		array[arrcounter]=leftarr[lcounter];
    		++arrcounter;
    		++lcounter;
    	}
    }
    else{
    	while(rcounter<=rlen){
    		array[arrcounter]=rightarr[rcounter];
    		++arrcounter;
    		++rcounter;

    	}
    }


}

void mergesort(int *array,int beg,int end){
    void merge(int *,int,int);

    if(beg>=end){
    	return ;
    }
    //inclusive end

    int mid=(beg+end)/2;

    mergesort(array,beg,mid);
    mergesort(array,mid+1,end);
    
    merge(array,beg,end);
}




int main(){

    int n;
    cin>>n;

    int *a=new int[n];

    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    mergesort(a,0,n-1);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }
	return 0;
}
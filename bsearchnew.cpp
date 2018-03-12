#include<iostream>

using namespace std;

int main(){

int n;
cin>>n;


if(n>0){

	int *a=new int[n];
    int bsearch(int *,int,int);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ele;
    int pos;
    cin>>ele;
	pos=bsearch(a,n,ele);
    cout<<pos;
}
else{
	cout<<-1;
}

}


bsearch(int *a,int n,int ele){
    int beg=0,end=n-1;
    int mid;
    //cout<<beg<<" "<<end;
    while(beg<=end){
    mid=(beg+end)/2;

    if(a[mid]==ele){
    	return mid;
    }
    if(a[mid]>ele){
        end=mid-1;
    }
    if(a[mid]<ele){
    	beg=mid+1;
    }
    } 

    return -1;


}
#include<iostream>


using namespace std;

int * reverse(int * arr,int n){
    
    int * rev=new int[n];

    for(int i=n-1;i>=0;--i){
    	rev[(n-1)-i]=arr[i];
    } 
    
    return rev;
}

void reverse2(int *arr,int n){
    
    int *beg, *end;
    beg=&arr[0];
    end=&arr[n-1];
    int temp;
    while(beg<=end){
       
       temp=*beg;
       *beg=*end;
       *end=temp;
       ++beg;
       --end;

    }

}

int main(){

    int n;
    cin>>n;
    
    int *arr=new int[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
     
    int *rev;
    //rev=reverse(arr,n);
    reverse2(arr,n);
    
    for(int i=0;i<=n-1;i++){
    	cout<<arr[i]<<" ";
    }
	return 0;
}
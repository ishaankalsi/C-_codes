#include<iostream>
using namespace std; 

int main() {
    void bsort(int [],int,int,int);
    int n;
    cin>>n;
    int *a;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    bsort(a,0,1,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}


void bsort(int a[],int i,int j,int n){
    
    int temp;
    if(n==0){
        return;
    }
    if(j>n-1){
        
        i=0;
        j=1;
        n=n-1;
        return bsort(a,i,j,n);
    }
    
    
    if(a[i]>a[j]){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    return bsort(a,++i,++j,n);
    }
    
    return bsort(a,++i,++j,n);
    
    
}
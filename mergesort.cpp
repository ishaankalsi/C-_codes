#include<iostream>
//#include "createarr.h"

using namespace std;

void merger(int *a,int *lftarr,int *rgtarr,int len1,int len2){
    
    //int len1=sizeof(lftarr)/sizeof(int);
    //int len2=sizeof(rgtarr)/sizeof(int);
    //int *res=new int[len1+len2];
    
    int i=0,j=0,k=0;

    while(i!=len1-1||j!=len2-1){
        if(lftarr[i]>rgtarr[j]){
            a[k]=lftarr[i];
            ++i;
            ++k;
        }
        else{
            a[k]=rgtarr[j];
            ++k;
            ++j;
        }
    }
    if(i==len1-1){
        while(j!=len2-1){
            a[k]=rgtarr[j];
            ++k;
            ++j;

        }
    }
    if(j==len2-1){
        while(i!=len1-1){
            a[k]=rgtarr[i];
            ++k;
            ++i;

        }
    }
    cout<<"reach 1";
    // int len=sizeof(a)/sizeof(int);
    // cout<<" "<<len<<" ";
    // for(int i=0;i<len-1;++i){
    //     cout<<a[i]<<" ";
    // }

}


void mergesort(int a[],int beg,int end){
     
    void merger(int*,int*,int*,int,int);
    if(beg>=end){
        return ;
    }
    int mid=(beg+end)/2;
    // //cout<<"beg:"<<beg<<"mid:"<<mid<<"end:"<<end;
    // int lf=(mid-beg)+1;
    // int rh=end-mid;
    int *lftarr=new int[(mid-beg)+1];
    int *rgtarr=new int[end-mid];
    int len1=(mid-beg)+1;
    int len2=end-mid;
    //int len1=sizeof(lftarr)/sizeof(lftarr[0]);
    //int len2=sizeof(rgtarr)/sizeof(rgtarr[0]);//wy size not allocated?
    //cout<<"len1:"<<len1<<"len2:"<<len2;
    for(int i=beg;i<=end;++i){
        if(i<mid){
        lftarr[i]=a[i];
    }
        else if(i>mid){
            rgtarr[(mid+1)-i]=a[i];
        }
    }

    for(int i=beg;i<=mid;++i){
        lftarr[i]=a[i];
    }
    for(int j=mid+1;j<=end;++j){
        rgtarr[(mid+1)-j]=a[j];
    }

    mergesort(lftarr,beg,mid);
    //cout<<"reach1";
    mergesort(rgtarr,mid+1,end);
    merger(a,lftarr,rgtarr,len1,len2);

     
}
int main(){
    void mergesort(int*,int,int);
    int n;
    cin>>n;

    int *a=new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    mergesort(a,0,n-1);
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
	return 0;

}



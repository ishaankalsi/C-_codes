#include<iostream>

using namespace std;
/*
int findpoint(int *a,int n,int ele){
     
     for(int i=0;i<n-1;i++){
     	if(a[i]>a[i+1]){
     		return i;
     	}
     }
}

findele(int *a,int n,int ele){
     int findpoint(int *,int,int);
     int pos=findpoint(a,n,ele);

     int beg1,end1,beg2,end2;

     beg1=0;
     end1=pos;
     beg2=pos+1;
     end2=n-1;   
     	if(a[mid1]==ele){
     		return mid1;
     	}
     	if(a[mid1]<ele){
     		beg1=mid1+1;
     	}
     	else{
     		end1=mid1-1;
     	}
     }

     while(beg2<=end2){
     	int mid2=(beg2+end2)/2;
     	if(a[mid2]==ele){
     		return mid2;
     	}
     	if(a[mid2]<ele){
     		beg2=mid2+1;
     	}
     	else{
     		end2=mid2-1;
     	}
     }

     return -1;
}
*/

int findele(int *arr,int n,int ele,int beg,int end){
    

    if(beg>end){
        return -1;
    }

    int mid=(beg+end)/2;

    if(arr[mid]==ele){
        return mid;
    }

    int indexl=findele(arr,n,ele,beg,mid-1);
    int indexr=findele(arr,n,ele,mid+1,end);
    
    if(indexl>indexr)return indexl;
    else return indexr;

}


int main(){
    int findele(int *,int,int,int,int);
    int n;
    cin>>n;

    int *a=new int[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int ele;
    cin>>ele;
    int pos;


    pos=findele(a,n,ele,0,n-1);
    cout<<pos; 
	return 0;
}




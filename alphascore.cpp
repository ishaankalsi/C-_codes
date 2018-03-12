#include<iostream>

using namespace std;

int alphascore(int *a,int n){//
    int sum=0;
    for(int i=1;i<n;i++){
    	for(int j=0;j<i;j++){
    		if(a[i]<a[j]){
    			sum+=a[j];
    		}
    	}
    } 

    return sum;
}


int main(){
    

    long n;
    cin>>n;

    long *a=new long[n];
    for(long i=0;i<n;i++){
        cin>>a[i];
    }

    long sum=alphascore(a,n);
    //sum=sum%1000000007;
    cout<<sum;

	return 0;
}
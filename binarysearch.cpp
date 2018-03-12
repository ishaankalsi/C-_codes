#include<iostream>

using namespace std;

bool bsearch(int *a,int n,int ele,int i){
     
    if(i>n-1){
    	return false;

    }
    if(a[i]==ele){
    	return true;
    }
    bsearch(a,n,ele,i+1);


}
int main(){
    
    int n;
    cin>>n;

    int *a=new int[n];

    for(int i=0;i<=n-1;i++){

    	cin>>a[i];
    }
    int ele;
    cin>>ele;
    
    bool st;

    st=bsearch(a,n,ele,0);
    (st==1)?cout<<"true":cout<<"false";
	return 0;
}
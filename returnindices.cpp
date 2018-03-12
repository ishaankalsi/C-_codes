#include<iostream>


using namespace std;

int main(){
    void indices(int *,int *,int,int,int,int);
    int n;
    cin>>n;

    if(n>0){
    	int *a=new int[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int ele;
    	cin>>ele;
        //int *len;
        int b[n];
    	indices(a,b,n,ele,0,0);
        /*cout<<"entry";
        int i;
        //int len=sizeof(b)/sizeof(int);*/
        /*while(i!=len-1){
        	cout<<b[i];
        	i++;
        }*/
        /*
        for(int i=0;b[i]!='/0';i++){
        cout<<b[i]<<" ";
        }*/

    }


	return 0;

}
//int sum=0;


void indices(int *a,int *b,int n,int ele,int i,int j){
//cout<<a[i]<<" ";
//len=&sum;
if(i>n-1){
    
	return ;
}

if(a[i]==ele)
{
b[j]=i;
cout<<b[j]<<" ";

}

indices(a,b,n,ele,++i,j);
}
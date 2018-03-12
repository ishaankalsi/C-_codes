#include<iostream>

using namespace std;

void pascal(int **a,int n){

	a[0][0]=1;

	for(int i=1;i<=n-1;i++){
		for(int j=0;j<=i;j++){
           if(j==0||j==i){
           	a[i][j]=1;
           }
           else{
           	a[i][j]=a[i-1][j]+a[i-1][j-1];
           }

		}
	}
	
    int count=0;
	for(int i=0;i<=n-1;i++){
		    while(count!=(n-1)-i){
		    	cout<<" ";
		    	++count;
		    }
		for(int j=0;j<=i;j++){
            
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		count=0;
	}
	
	/*
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=i;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	*/
}

int main(){
    void pascal(int**,int);
    int n;
    cin>>n;

    if(n>0&&n<=10){
    
    int **a=new int*[n];
    for(int i=0;i<=n-1;i++){
     
     a[i]=new int[n+1];
    } 
    

    pascal(a,n);
    }
	return 0;

}
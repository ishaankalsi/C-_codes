#include<iostream>

using namespace std;

int main(){
    void odd(int);
    void eve(int,int);
    int n;
    cin>>n;

    odd(n);
    eve(2,n);
	return 0;
}

void eve(int a,int n){

	if(n<=1||n>1000){
		return;
	}
	if(a>n){
		return;
	}

	cout<<a<<"\n";
	eve(a+2,n);




}


void odd(int n){

    if(n<1||n>1000){
    	return;
    }
    
    if(n%2==0){
    	n=n-1;
    	cout<<n<<"\n";
    	odd(n-2);
    }
    else{
    	cout<<n<<"\n";
    	odd(n-2);
    }

}
#include<iostream>

using namespace std;

int main(){
    int countbits(int n,int *);
	int n;
	cin>>n;
    int a[10];
	int count=countbits(n,a);
	cout<<count;
    return 0;
}


int countbits(int n,int *a){
int count=1,q=n/2,r;
while(q<=1){
	q=n/2;
	
    ++count;

}	

return count;
}


#include<iostream>
using namespace std;

long convert(long bin){

    
    long binary, dec = 0, rem, num, base = 1;
 
    //cout << "Enter the binary number(1s and 0s) : ";
    //cin >> num;
    binary = bin;
    while (bin > 0)
    {
        rem = bin % 10;
        dec = dec + rem * base;
        base = base * 2;
        bin = bin / 10;
    }
    //cout << "The decimal equivalent of " << bin << " : " << dec << endl;
    return dec;
}
int main(){
    long convert(long);
    int n;
	cin>>n;
    long *a=new long[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int i=0;
    long *d=new long[n];
    
    while(i<n){

    	
    	d[i]=convert(a[i]);
    	//cout<<dec<<endl;
    	++i;
    }

    for(int i=0;i<n;i++){
    	cout<<d[i]<<endl;
    }

    return 0;
}
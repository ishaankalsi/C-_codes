#include<iostream>
#include<cstring>

using namespace std;

int sizes(int *a){
    
    int *b=a;
    int count=0;
    while(b!='\0'){
       b++;
       ++count;
    } 
    return count;
}

int main(){
   
    int n;
    cin>>n;

    int *a;

    a=new int[n];

     
    for(int i=0;i<n;++i){
    	cin>>a[i];
    }
    int len=sizeof(a)/sizeof(int);
    cout<<len; 
    int len2=sizes(a);
    cout<<"len"<<len2;
   
	return 0;
}
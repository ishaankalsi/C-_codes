#include<utility>
#include<iostream>
using namespace std;

//#define pair<int,int> pii;

int XOR(int *a,int n){
    int ans=0;
	for(int i=0;i<n;i++){
       ans=ans ^ a[i];
	}

	return ans;

}

//why unique values are not printed?
pair<int,int> uniquetwice(int *a,int n){
    
    int XOR(int *,int);
    int xored=XOR(a,n);

    int lastsetbit=xored & (-xored);
    int no1=0;
    int no2;

    for(int i=0;i<n;i++){
    	if((a[i] & lastsetbit)!=0)no1=no1 ^ a[i];
    }
  
    no2=no1 ^ xored;

    pair<int,int> unique;
    unique.first=no1;
    unique.second=no2;

    return unique;

}

int main(){
    pair<int,int> uniquetwice(int *,int);   
	int n;
    
	cin>>n;

	int *a=new int[n];

	for(int i=0;i<n;i++){

		cin>>a[n];
	}
    
	pair<int,int> unique=uniquetwice(a,n);

	cout<<unique.first<<" "<<unique.second;

	return 0;
}
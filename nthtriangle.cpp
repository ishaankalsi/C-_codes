#include<iostream>
using namespace std;

int main(){
  int nth(int,int,int);
  int n;
  cin>>n;
  
  if(n>=1&&n<=100){ 
  int sum=nth(n,1,0);
  cout<<sum;
  }
  return 0; 
}

int nth(int n,int tn,int sum){
  
  if(tn==n+1){
  	return sum;
  }
  sum=sum+tn;
  tn++;
  nth(n,tn,sum);


}

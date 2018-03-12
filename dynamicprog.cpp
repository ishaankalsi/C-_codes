 #include<iostream>

using namespace std;

int fib(int n,int *dp){

	if(n==0||n==1){
		return n;
	}

	if(dp[n]!=-1){
		return dp[n];
	}
	dp[n]=fib(n-1,dp) +fib(n-2,dp);
	return dp[n];
}
int main(){
    int fib(int,int*);  
    int dp[100];
   
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
    	dp[i]=-1;
    }

    fib(n,dp);

	return 0;
}
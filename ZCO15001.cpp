#include<iostream>

using namespace std;


int least_palin_seq(int *a,int n){
    int *cur,*search;

    cur=a;
    search=a;
    maxpalin_size=0

    while(cur!=NULL){
       if(*search==*cur){
       	check_palin(a,n,cur,search);//we need indexes and max-palinsize
       	//on;ly search pointer return computer rest
       	//this funtion will give me the max sizepalindrome
       }
    }
    



//this soluion will not work:<


}


int main(){
    
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int least_palin=least_palin_seq(a,n);
    
    cout<<least_palin;
	return 0;
}
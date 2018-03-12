#include<iostream>
#include<math.h>
using namespace std;

int main(){
void pascal(int,int);
int n;
cin>>n;

//cout<<"enter the term number for pascal triangle";
//int terms=1;
if(n>-1&&n<=8){
pascal(n,1);
}



return 0;
}


void pascal(int n,int term){
void printmat(int *,int,int);
int reverse(int);
int i=0;
int sz=0;
int r;
for(int i=0;i<=n;i++){
	sz=sz+(i+1);
}

int *a=new int[sz];
int index=sz;
int var;
//cout<<index;
while(i!=n+1){
//cout<<term<<" ";

//cout<<term<<" ";
var=reverse(term);
//cout<<var<<" ";
//cout<<var<<" ";
while(var!=0){

r=var%10;

var=var/10;

a[index]=r;
//cout<<a[index]<<" ";
--index;
}
term=term+(term*10);

i++;
}

 // for(int i=0;i<=sz;i++){
 // 	cout<<a[i]<< " ";
 // }

printmat(a,sz,n);

}


printmat(int *a,int sz,int n){

int k=sz;
//int odd=1;
for(int i=0;i<=n;++i){

	for(int j=0;j<=2*n;++j){
     
     if(j>=((2*n/2)-i)&&j<=((2*n/2)+i))
     {
     cout<<a[k];
     --k;
     ++j;
     cout<<" ";
     }
       else{
     
       	cout<<" ";
       }
     
	}
	cout<<"\n";
}

}

int reverse(int term){

	int r,a=0;
	int q=term;
	int revterm=0;
    int count=-1;
	while(q!=0){
    q=q/10;     
    count++;
	}
    //cout<<count<<"c ";
	q=term;
    //cout<<q<<"q ";
	while(q!=0){
		r=q%10;
		if(count==0){
			a=1;
		    revterm=revterm + (r*a);	
		}
		else{
		a=0.5+pow(10,count);
		//cout<<a<<"a ";
		
		revterm=revterm + (r*a);
	    }
        //cout<<a<<"a ";
		q=q/10;
		count--;
	}
	//cout<<count<<" ";
    //cout<<revterm<<"r ";
	return revterm;

}
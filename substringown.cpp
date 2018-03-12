#include<iostream>
#include <cstring>
using namespace std;

int main(){
    void subst(char *,int,int);
    char a[100];
    cin>>a;
    subst(a,0,0);
	return 0;
}


void subst(char *a,int i,int j){
if(i>(strlen(a)-1)){
	return;
}
if(j>(strlen(a)-1)){
	j=i;
	subst(a,++i,++j);
	return;
}
if(i>j){
	//cout<<a[i];
	return;
	//
}

int k =i;
while(k<=j){

cout<<a[k];
k++;
}

 cout<<"\n";
subst(a,i,++j);
}
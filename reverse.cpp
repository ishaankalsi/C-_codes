#include<iostream>
#include<cstring>

using namespace std;

int main(){
    bool reverse(char [],char [],int,int,int,int);
    char a[20];
    char b[20];
    cin>>a;
    cin>>b;
    int la=strlen(a);
    int lb=strlen(b);
    bool k;

     k=reverse(a,b,la,lb,0,lb-1);
     (k==0)?cout<<"false":cout<<"true";
	//cout<<k; 
	return 0;
}


bool reverse(char a[],char b[],int la,int lb,int ba,int endb){
   
   if(la!=lb){
    return false;
   }
   if(a[ba]!=b[endb]){
   	return false;
   }
   if(ba>la-1||endb<0){
   	return true;
   }
   reverse(a,b,la,lb,++ba,--endb);

   

}


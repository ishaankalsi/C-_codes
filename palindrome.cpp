#include<iostream>
#include<cstring>


using namespace std;

int main(){
    bool palin(char *,int,int,int);
    char a[20];
    cin>>a;
    int len=strlen(a);
    //cout<<len;
    
    bool k;
    k=palin(a,len,0,len-1);
    (k==0)?cout<<"false":cout<<"true";
	return 0;
}


bool palin(char *a,int len,int beg,int end){

	if(beg>len-1){
		return true;
	}
	if(a[beg]!=a[end]){
		return false;
	}
	palin(a,len,++beg,--end);

}




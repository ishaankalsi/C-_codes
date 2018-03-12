#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main(){
    void subseq(string,int,int);
    string str;
    cin>>str;
    int len=str.size();
    //cout<<len;
    subseq(str,len-1,0);
	return 0;
}


void subseq(string str,int len,int beg){

    
    string a;
    
    while(beg!=len+1){
    

    	a=str.substr(beg+1,len+1);
    	cout<<a<<" ";

    
    ++beg;
}

    
    

}



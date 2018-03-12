#include<iostream>

using namespace std;


void moveX(string input,int inputlen){
    
    int templen=inputlen;
    int j;
    for(int i=0;i<templen;i++){

    	if(input[i]=='x'||input[i]=='X'){
           
           for(j=i;j<templen-1;j++){
           	input[j]=input[j+1];
           }
           input[j]='x';
           --templen; 
    	}
    }

    cout<<input;


}
int main(){
    void moveX(string,int);
    string input;

    cin>>input;
    int len=input.length();
    moveX(input,len);

	return 0;
}
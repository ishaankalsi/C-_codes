#include<iostream>
#include<cstring>
using namespace std;

string output="-1";
int outputlen;

void construct(string str,int curstrlen,int inputlen){
    
    if(output=="-1"){
    	output=str;
    	outputlen=curstrlen;
    	return;
    }
    int prevoutlen=outputlen;
    outputlen=outputlen*curstrlen*inputlen;
    // for(int i=0;i<slen;i++){

    // 	for(int j=0;j<prevoutlen;j++){

    // 		for(int k=0;k<outputlen;k++){
    // 			output[k]=output
    // 		}
    // 	}
    // }    
    string prevoutput=output;
    int i=0,j=0,k=0;
    while(j<prevoutlen){
    	output[i]=prevoutput[j];
    	output[i+1]=str[k];
    	i+=2;
    	++k;
    	if(k>=curstrlen){           
           ++j; 
           k=0;
    	}
    }


}


void smartkey(string *table,string str,int slen,int tlen){
    void construct(string,int,int);

    // string m_table[]={"0","1","2","3","4","5","6","7","8","9"};
    // string **match_table=new string*[tlen];

    // for(int i=0;i<tlen;i++){
        
    //     *match_table[i]=m_table[i];
    // }
    // for(int i=0;i<tlen;i++){
        
    //     match_table[i]=&table[i];
    // }
    // for(int i=0;i<tlen;i++){
        
    //     cout<<*match_table[i];
    //}

    for(int i=0;i<slen;i++){
        
      for(int j=0;j<tlen;j++){
        
        // stringstream convert=str[i];
        // int x=0;
        // convert>>x;
        //string int_tostring=to_string(j);
        //char temp=j;
        int convert=str[i]-'0';
      	if(convert==j){
      		
      		if(slen==1){
      		  cout<<table[j];
              return;
            }
            int curstrlen=table[j].length();
      		construct(table[j],curstrlen,slen);
      	}
      }
    }

}


int main(){
    
    string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
    
    string str;
    cin>>str;
    int slen,tlen;
    slen=str.length();
    //cout<<slen<<endl;
    tlen=sizeof(table)/sizeof(string);
    //cout<<tlen<<endl;
    smartkey(table,str,slen,tlen);
    int k=0;
    string temp="";
    for(int i=0;i<outputlen;i++){
    	while(k<slen){
    		temp= temp + output[i];
    		++i;
    		++k;
    	}
    	k=0;
    	cout<<temp<<endl;
    }
	return 0;
}
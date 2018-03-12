#include<iostream>


using namespace std;

int freq(int **studarr,int qarr_val,int tcounter,int found_idx){
   
    int *countr=&studarr[tcounter][found_idx];
    int rightc=0;
    while(*countr==qarr_val){
      ++rightc;
      if(++countr)++countr;
      else{break;}
      
    }

    int leftc=0;
    int *countl=&studarr[tcounter][found_idx];
    if(--countl)--countl;
    while(*countl==qarr_val){
      ++leftc;
      if(--countl)--countl;
      else{break;} 
    }

    return rightc+leftc;

}


void numbertheory(int **studarr,int *qarr,int tcounter,int sarr_sz,int beg,int end){
    
    
    if(beg>=end){
    	return;
    }

    int mid=(beg+end)/2;

    if(studarr[tcounter][mid]==qarr[tcounter]){
    	int count=freq(studarr,qarr[tcounter],tcounter,mid);
    	//int countl=freq(studarr,qarr[tcounter],tcounter,mid);
    	cout<<count;
    }

    if(qarr[tcounter]>studarr[tcounter][mid]){
    	numbertheory(studarr,qarr,tcounter,sarr_sz,mid+1,end);
    }
    else{
        numbertheory(studarr,qarr,tcounter,sarr_sz,beg,mid-1); 	
    }

}
int main(){
   
   int tcase;
   cin>>tcase;

   int **studarr=new int*[tcase];
   int *qarr=new int[tcase];
   int tcounter=0;
   int tempcase=tcase;
   while(tempcase){

   	  int no_stud,no_q;
   	  cin>>no_stud;cin>>no_q;

   	  for(int i=0;i<no_stud;i++){
   	  	cin>>studarr[tcounter][i];
   	  }
       
      for(int i=0;i<no_q;i++){
   	  	cin>>qarr[i];
   	  }

   	  ++tcounter;

   	  --tempcase;
   }

   int tempcase2=tcase;
   int tcounter2=0;
   while(tempcase2){
      
      int sarr_sz=sizeof(studarr[tempcase2])/sizeof(int);
      numbertheory(studarr,qarr,tcounter2,sarr_sz,0,sarr_sz-1); 
        
   	  --tempcase2;
   }



}
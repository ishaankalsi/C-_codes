#include<iostream>


using namespace std;


class a{

private:

    int na;
 
 
public:

	a(int x){

 	   na=x;//why is destructoe necessary?
 	   cout<<na<<endl;
    }
    
    

protected:

};



a out_class(5);

class b{
private:


public:

protected:

};



int function_1(int c,int b){//check call by ref nd val
      int x=c+b;
      a in_class(x);  //class object not in main()?
      
      return c+b;
}



int main(){
    
    int function_1(int,int);
    a first(5);
    int c=10,b=7,x;
    a second(c+b);
    int sum=function_1(2,5);
    cout<<sum<<"\n";
	return 0;
}


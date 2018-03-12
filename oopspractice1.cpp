#include<iostream>

using namespace std;

class comp{
private:
	int data;
public:
	void setdata(int x){data=x;}
    void getdata(){cout<<data;}
};

int main(){
	comp first;
	first.setdata(50);
	comp second=first;
	second.getdata();


}
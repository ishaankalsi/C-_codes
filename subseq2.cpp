#include<iostream>

using namespace std;

int main(){


	char s[10];
	cin>>s;

	int len=strlen(s);

	subseq(s,0,len-1,0);

}


void subseq(char)
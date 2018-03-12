#include<iostream>

using namespace std;

int main(){
    void spiral(int [][20],int,int );
    int r,c;
    cin>>r>>c;
    r=r-1;
    c=c-1;
    int a[20][20];

    for(int i=0;i<=r;i++){

    	for(int j=0;j<=c;j++){
    		cin>>a[i][j];
    	}
    }

    spiral(a,r,c);


	return 0;
}


void spiral(int a[][20],int r,int c){
    int rex=r,cex=c,rst=0,cst=0;
    while((cst+1)<cex&&rex>rst){
	for(int j=cst;j<=cex;j++){

		cout<<a[rst][j];
    }
	rst++;
	for(int i=rst;i<=rex;i++){
		cout<<a[i][cex];
	}
	cex--;
	for(int j=cex;j>=cst&&cex>cst;j--){//invariant included;
		cout<<a[rex][j];
	}
	rex--;
	for(int i=rex;i>=rst&&rex>rst;i--){//invariant 
		cout<<a[i][cst];
	}
	cst++;
}
}
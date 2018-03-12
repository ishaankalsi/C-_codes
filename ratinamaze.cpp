#include<iostream>

using namespace std;

int main(){
void ratmaze(int [][20],int);
int n;
cin>>n;
int board[][20]={{1, 0, 0, 0},
                {1, 1, 0, 1},
                {0, 1, 0, 0},
                {1, 1, 1, 1}
            };
//n=n-1;
ratmaze(board,n);


return 0;

}


void ratmaze(int board[][20],int n){
bool path;
bool startrat(int [][20],int,int,int);
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		//canplace(board[i][j]);
		if(board[i][j]!=0){
			path=startrat(board,i,j,n);
			if(path==1){
				cout<<"path found";
				return;
			}
		}
	}
}
if(path==0){
	cout<<"no path found ";
	return;
}

}



startrat(int board[][20],int i,int j,int n)
{
    bool f1,f2;
	if(board[i][j]==0){
		return false;
	}
	if(i==n-1&&j==n-1){
		cout<<"("<<i<<","<<j<<")"<<"->";
		cout<<"path found";
		return true;
	}
	if(i>n-1||j>n-1){
		return false;
	}
	f1=startrat(board,i++,j,n);
	f2=startrat(board,i,j++,n);
	if(f1==1||f2==1){
        cout<<"("<<i<<","<<j<<")"<<"->";
		return true;
	}
	if(f1==0&&f2==0){
        return false;
	}

}


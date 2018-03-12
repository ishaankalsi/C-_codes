#include <iostream>
using namespace std;
 
int main() {
int n;
cin>>n;
int x=1,y=0;
for(int i=0;i<n;i++){
    if(i<2){
        if(i==0){
            cout<<x<<"\n";
        }else{
            cout<<x<<x<<"\n";
        }
    }else{
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                cout<<i;
            }else{
                cout<<y;
            }
        }
        cout<<"\n";
    }
}
return 0;
 
}
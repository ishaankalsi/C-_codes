//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    
    int a[10]={1,2,3};
    
    cout<<a<<endl;
    cout<<a+1<<endl;
    cout<<a+6<<endl;
    cout<<*a<<endl;
    cout<<*a+1<<endl;
    cout<<&a[0]<<endl;
    cout<<*(a+5)<<endl;
    cout<<&a<<endl;

    cout<<"end1"<<endl;

    int *b[10]={&a[0],&a[1],&a[2]};

    cout<<b[0]<<endl;//prins address of a[0]
    cout<<b<<endl;//prints address of b[0]
    cout<<*b<<endl;//prints address of a[0]
    cout<<b+1<<endl;
    cout<<*(&b[0])<<endl;//prints address of a[0]

    cout<<"end2"<<endl;

    //int (*ptr)[3][3] = &arr;
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9},{11,12,13}};

    cout << arr << endl;//address of row1
    cout<<*arr<<endl;//address of element one of row one will have same address of row1 of arr
    cout<<**arr<<endl;//prints value of first element of row 1
    cout << arr + 1 << endl;//address of row2
    cout << *(arr + 1) << endl;//address of element one of row 2 
    cout << *(arr + 1)+2 << endl;//address of element third of row2
    cout << arr[0] << endl;//address of element one of row one
    cout  << *(arr[0]) << endl;//value of element one in row one
    cout << &arr[0][0] << endl;//address of element one row one
    cout << arr[0] + 1 << endl;//address of element 2 of row 1
    cout << (&arr[0][0]) + 1 << endl;//address of element 2 of row1
    cout << arr + 1 << endl;//address of row 2
    cout << &arr[1][0] << endl;//address of row 2

    //make 2d array and assign size dynamically

    int n;
    cin>>n;

    int **d=new int*[n];

    for(int i=0;i<n;i++){
        d[i]=new int[n];
    }//nxn marix created.

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>d[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<"\n";
    }
}
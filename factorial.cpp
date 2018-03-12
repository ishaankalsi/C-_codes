#include <iostream>

using namespace std;
#define MAX 500

int main() {
    void  factorial(int );
    
    int x;
    cin>>x;
    
    if(x>=1 && x<=100){
    factorial(x);
    
    //cout<<factorial;
    }
    return 0;
    
}

// long long int factorialfinder(int x)
// {
//     if (x == 1)
//     {
//         return 1;
//     }else
//     {
//         return x*factorialfinder(x-1);
//     }
// }


void factorial(int n)
{   
    int multiply(int,int *,int);
    int res[MAX];
 
   
    res[0] = 1;
    int res_size = 1;
 
    
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}
 

int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry
 
    
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  
        carry  = prod/10;    
    }
 
    
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

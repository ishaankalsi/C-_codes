#include <bits/stdc++.h>
using namespace std;
 
bool ispalindrome(int W[], int low, int high)
{
    if (low == high)
        return 1;
    int mid = (high - low) / 2;
    for (int i = 0; i <= mid; i++)
    {
        if (W[low + i] != W[high - i])
        {
            return 0;
        }
    }
    return 1;
}
  
int main()
{
    int N, *A, *W, *B;
    cin >> N;
    W = new int[N];
    A = new int[N+1];
    for (int i = 0; i < N; i++)
    {
        cin >> W[i];
        A[i] = N + 1;
    }
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    A[N] = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = i; j < N; j++)
        {
            if (W[i] == W[j])
            {
                if (ispalindrome(W, i, j) == 1)
                {
                    A[i] = min(A[i], A[j + 1] + 1);
                }
            }
        
}    }
     cout<<"_______";
     for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
     }
     cout<<"__________";
    cout << A[0] << endl;
} 
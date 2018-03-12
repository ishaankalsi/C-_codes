#include<iostream>
#include "heap.h"

using namespace std;

int main(){

    Heap h;

    h.push(2);
    h.push(3);
    h.push(1);
    
    cout<<h.top();
    int a=2349435 & 15;
    cout<<" "<<a;

	return 0;
}
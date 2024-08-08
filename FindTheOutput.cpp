// Q.no - 3.
#include<iostream>
using namespace std;
int main(){
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr <<" "<< a <<" "<< b;
}

// output of the code is = (11 10 11).
// 3rd option is correct.
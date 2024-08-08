// Q.no - 1.

#include<iostream>
using namespace std;

int mul(int* p, int* q){
    int s = (*p) * (*q);
    return s;
}

int main(){
    int a;
    cout << "Enter 1st Number : ";
    cin >> a;
    
    int b;
    cout << "Enter 2nd Number : ";
    cin >> b;
    
    int* p = &a;
    int* q = &b;
    
    cout << "The multiplication of " << a << " and " << b << " is: " << mul(p, q) << endl;
}
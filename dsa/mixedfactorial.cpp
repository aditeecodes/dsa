#include <iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i =1 ; i<=n ; i++){
        fact = fact*i;
    }
    return fact;
}

int ncr(int n , int r){
    int nume = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    return nume/denom;
}

int main(){
    int n , r;
    cout << "enter value of n and r";
    cin >>n >>r;
    cout << factorial(n) << endl;
    cout << factorial(r) << endl ;
    cout << ncr(n ,r) << endl;
}
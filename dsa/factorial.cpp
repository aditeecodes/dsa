#include <iostream>
using namespace std;

int factorial(int n){
    if( n==0 ){
        return 1;
    }
    int smallprblm = factorial(n-1);
    int badiprblm = smallprblm * n;
    return badiprblm;
}

int main(){
    int n;
    cout << "enter value of n";
    cin >> n;
    cout << factorial(n);
}
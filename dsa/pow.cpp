#include <iostream>
using namespace std;
#include <math.h>

int power(int i , int n){
    if( n==0 ){
        return 1;
    }
    int smallprblm = pow(i,(n-1));
    int badiprblm = smallprblm *i ;
    return badiprblm;
}

int main(){
    int n;
    int i;
    cout << "enter value of n \n";
    cin >> n;
    cout << "enter value of i";
    cin >> i;
    cout << power(i , n);
}
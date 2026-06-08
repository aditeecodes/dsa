#include <iostream>
using namespace std;
#include <math.h>

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = fibo(n-1) +fibo(n-2);
    return ans;
}

int main(){
    int n , i;
    cout <<"enter vlaue of n";
    cin >>n;
    for (int i = 0 ; i< n ; i++){
    cout << fibo(i) << " ";
}
}
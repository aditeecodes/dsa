#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout << "enter value of a";
    cin >> a;
    cout << "enter value of b";
    cin >> b;
    char operation;
    cout <<"enter the operation";
    cin >> operation;
    switch (operation){
        case '+' : cout << a+b;
        break;
        case '-' : cout << a-b;
        break;
        case '*': cout << a*b;
        break;
        case '/' : cout << a/b;
        break;
        case '%' :cout << a%b;
    }
}
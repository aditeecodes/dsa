#include <iostream>
using namespace std;

int main() {
    int ch = '2';
    switch( ch ){
    //the expression here that is the num should match with the constant and that case will only get printed
    case 2 : cout <<"first " <<endl;
    break;
    case '2' : cout <<"second" << endl;
    break;
    default : cout << "nothing" << endl;
} 
}
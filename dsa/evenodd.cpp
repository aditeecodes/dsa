#include <iostream>
using namespace std;

bool isEven(int a){
  if(a&1){
    return 0;
  } else{
    return 1;
  }
}


int main(){
    int num;
    cout << "enter value of num";
    cin >> num;
    bool isevenodd;
    isevenodd = isEven(num);
    cout << isevenodd;

}
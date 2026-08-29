#include <iostream>
using namespace std;

int num(int a, int b){
   int sum = a+b;
   return sum;
}

int main() {
    int num1, num2;
    cout<<"Enter the value"<<endl;
    cin>>num1;
    cout<<"Enter the value"<<endl;
    cin>>num2;
    cout<<"The sum is " <<num(num1, num2);
    return 0;
}
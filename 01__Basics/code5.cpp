#include <iostream>
using namespace std;

int main () {

    int a =4, b=5;
    cout <<"Operators in C++" << endl;
    cout <<"Following are the types of C++ operators " << endl;

    cout <<" 1.Arithmetic operators" << endl;
    cout <<"Example - The value of a+b is " << a+b << endl;
    cout <<"The value of a-b is " << a-b << endl;

    cout <<" 2.Assignment operators" << endl; 
    cout <<" Example - int a = 3, b = 9" << endl;

    cout <<" 3.Comparison operators" << endl;
    cout <<" The value of a==b is " <<(a==b)<< endl;

    cout <<" 4.Logical operators" << endl;
    cout <<" Example - The value of this operator is "<<((a==b) && (a<b)) << endl;



    return 0;
}
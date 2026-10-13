#include <iostream> 
using namespace std;

int main() {
    int  a , b;
    cout << "Enter the value of a & b " << endl;
    cin >> a >> b ;
    char oprt;
    cout << "Enter the operator " << endl;
    cin >> oprt;
    if (oprt == '+') {
        cout << "Addition is " << a + b << endl;
     } else if   (oprt == '-') {
            cout << "Subtraction is " << a - b << endl;
        } else if (oprt == '*') {
            cout << "Multiplication is " << a * b << endl;
        } else if (oprt == '/') {
            if (b != 0) {
                cout << "Division is " << a / b << endl;
            }
            } else {
                cout << "Invalid operator! " << endl;
            }  
    return 0;
}
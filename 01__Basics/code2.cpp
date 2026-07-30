#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number:";
    cin >> number;

    // Modulo operator (%) check karta hai ki remainder 0 hai ya nahi
    if (number % 2 == 0) {
        cout << number << "is an even number." << endl;
    } else {
        cout << number <<"is an odd number." << endl;
    }
    return 0;
}
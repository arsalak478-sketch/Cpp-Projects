#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age ;
    
    if (age >= 18){
        cout << "You can give vote";
    }
    else {
        cout << "You cannot give vote"; 
    }
    return 0;
}
#include <iostream>
using namespace std;

int sum(int a, int b) {
    int s = a+b;
    return s;
}
void function() {
    cout<<"Hello"<<endl;
}
int main () {
    function();
    cout << sum(5,10) << endl;
    return 0;
}
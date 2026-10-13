#include <iostream>
using namespace std;
int main() {
    int i, n;
    cout << "Enter the value of n " <<endl;
    cin >> n;
    for(i=1; i<=10; ++i)
    {
        if(i==1) {
            continue;
        }
        cout << n*i << endl;  
    }
    return 0;
}
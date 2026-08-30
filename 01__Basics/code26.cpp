#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the value " << endl;
    cin >> num;
    for( int i=0; i<num; i++) {
        cout <<" ";
        for(int j=0; j<num; j++){
            cout<<" ";
            cout <<j;
        }
        cout << endl;
    }
    return 0;
}
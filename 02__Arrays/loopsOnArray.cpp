#include <iostream>
using namespace std;

int main() {
    int num[] = {5,4,8,9,2,3,0,7};
    int size = 8;

    int smallest = INT_MAX;

    for(int i=0; i<size; i++) {
    if(num[i] < smallest) {
        smallest = num[i];
    }
}
cout << "smallest = " << smallest << endl;
    return 0;
}
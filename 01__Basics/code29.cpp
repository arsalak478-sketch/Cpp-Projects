#include <iostream>
using namespace std;

int sum(int n) {
    int i;
    int sum = 0;
    for(i=1; i<=n; i++) {
        sum = sum+i;
    }
    return sum;
}
    int main() {
        cout<<sum(5)<<endl;
        cout<<sum(10)<<endl;
        return 0;
    }

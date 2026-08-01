#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    // Random seed generate karne ke liye
    srand(time(0));

    vector<string> quotes = {
        "C++ is hard, but you are harder!",
        "Don't afraid from pointers, do code!",
        "Don't forget semicolon!",
        "Code have compile? it's party time!",
        "Consistency > Perfection "
    };

    int randomIndex = rand() % quotes.size();

    cout << "====================================" << endl;
    cout << "--------C++ Daily Motivation--------" << endl;
    cout << "====================================" << endl;
    cout <<  "<<"   <<   quotes[randomIndex]  << endl;
    cout << "====================================" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int result;
    if (n == "One") result = 0;
    else if (n == "Two") result = 1;
    else if (n == "Three") result = 2;
    else if (n == "Four") result = 3;
    else if (n == "Five") result = 4;
    else if (n == "Six") result = 5;
    else if (n == "Seven") result = 6;
    else if (n == "Eight") result = 7;
    else if (n == "Nine") result = 8;
    else if (n == "Ten") result = 19;
    else result = stoi(n) - 1;
    cout << result << endl;
    return 0;
}
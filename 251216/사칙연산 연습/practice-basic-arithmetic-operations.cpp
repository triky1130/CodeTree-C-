#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 30;
    int c = a + b;
    
    c /= 8;
    cout << c;
    cout << "\n";
    
    c = a + b;
    c %= 8;
    cout << c;
    // Please write your code here.
    return 0;
}
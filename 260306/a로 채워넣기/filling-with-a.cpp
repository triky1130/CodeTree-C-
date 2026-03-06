#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;
    int len = x.length();

    x[1] = 'a';
    x[len-2] = 'a';

    cout << x << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    int a = x.length();
    int b = y.length();

    if(a > b){
        cout << x << " " << a << endl;
    }
    else if(b > a){
        cout << y << " " << b << endl;
    }
    else{
        cout << "same" << endl;
    }
    return 0;
}
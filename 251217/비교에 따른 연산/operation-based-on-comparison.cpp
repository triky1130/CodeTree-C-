#include <iostream>
using namespace std;

int main() {
    int a,b;
    1 <= a,b <= 100;
    cin >> a >> b;

    if(a > b){
        cout << a * b << "\n";
    }
    else{
        cout << b / a << "\n";
    }
    // Please write your code here.
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int i, A, B;
    1 <= A <= B <= 100;
    cin >> A >> B;
    
    for(i = 0; i <= B - A; i++){
        cout << B - i << " ";
    }// Please write your code here.
    return 0;
}
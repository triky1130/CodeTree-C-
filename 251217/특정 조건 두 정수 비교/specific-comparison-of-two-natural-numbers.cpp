#include <iostream>
using namespace std;

int main() {
    int A,B;
    1 <= A,B <= 100;
    
    cin >> A >> B;
    
    if(A < B){
        cout << 1 << " ";
    }
    else{
        cout << 0 << " ";
    }
    
    if(A == B){
        cout << 1;
    }
    else{
        cout << 0;
    }
    // Please write your code here.
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    0 <= n <= 10000;
    
    cin >> n;
    
    if(n >= 3000){
        cout << "book" << "\n";
    }
    else if(1000 <= n && n < 3000){
        cout << "mask" << "\n";
    }
    else{
        cout << "no" << "\n";
    }// Please write your code here.
    return 0;
}
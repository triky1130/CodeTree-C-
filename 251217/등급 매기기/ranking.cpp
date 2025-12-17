#include <iostream>
using namespace std;

int main() {
    int n;
    0 <= n <= 100;
    
    cin >> n;
    
    if(n >= 90){
        cout << "A" << "\n";
    }
    else if(n >= 80 && n < 90){
        cout << "B" << "\n";
    }
    else if(n >= 70 && n < 80){
        cout << "C" << "\n";
    }
    else if(n >= 60 && n < 70){
        cout << "D" << "\n";
    }
    else{
        cout << "F" << "\n";
    }// Please write your code here.
    return 0;
}
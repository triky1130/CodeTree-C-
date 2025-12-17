#include <iostream>
using namespace std;

int main() {
    int a;
    -200 <= a <= 200;
    cin >> a;
    
    if(a < 0){
        cout << "ice " << "\n";
    }
    else if(a >= 100){
        cout << "vapor" << "\n";
    }
    else{
        cout << "water" << "\n";
    }// Please write your code here.
    return 0;
}
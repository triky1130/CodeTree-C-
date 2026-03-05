#include <iostream>
using namespace std;

int main() {
    int Y;
    cin >> Y;

    if(Y % 4 == 0){
        if(Y % 100 == 0){
            if(Y % 400 == 0){
                cout << "true" << "\n";
            }
            else{
                cout << "false" << "\n";
            }
        }
        else{
            cout << "true" << "\n";
        }
    }
    else{
        cout << "false" << "\n";
    }
    return 0;
}
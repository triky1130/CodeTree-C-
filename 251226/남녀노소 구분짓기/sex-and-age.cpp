#include <iostream>
using namespace std;

int main() {
    int gender;
    int age;
    
    cin >> gender >> age;
    
    if(gender == 0){
        if(age >= 19){
            cout << "MAN" << "\n";
        } else{
            cout << "BOY" << "\n";
        }}
        else{
            if(age >= 19){
                cout << "WOMAN" << "\n";
            } else{
                cout << "GIRL" << "\n";
            }}// Please write your code here.
    return 0;
}
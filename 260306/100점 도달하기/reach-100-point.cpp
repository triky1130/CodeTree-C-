#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if(score >= 90){
        for(int i = 0; i < 100 - score + 1; i++){
            cout << "A" << " ";
        }
    }
    else if(score >= 80){
        for(int i = 0; i < 90 - score; i++){
            cout << "B" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "A" << " ";
        }
    }
    else if(score >= 70){
        for(int i = 0; i < 80 - score; i++){
            cout << "C" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "B" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "A" << " ";
        }
    }
    else if(score >= 60){
        for(int i = 0; i < 70 - score; i++){
            cout << "D" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "C" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "B" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "A" << " ";
        }
    }
    else if(score < 60){
        for(int i = 0; i < 60 - score; i++){
            cout << "F" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "D" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "C" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "B" << " ";
        }
        for(int i = 0; i < 11; i++){
            cout << "A" << " ";
        }
    }
    return 0;
}
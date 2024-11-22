#include <iostream>

using namespace std; 

int main(){

    string dude = "Ben"; 
    cout << "What is your name?" << endl; 
    cin >> dude; 
    cout << "How are you?" + dude << endl; 
    cout << "How are you?" << dude << endl; // does the same thing as line 10 

    return 0; 
}
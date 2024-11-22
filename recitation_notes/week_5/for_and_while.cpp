#include <iostream>

using namespace std; 

int main(){
    int numberArray [10] = {5, 4545, 434, 2312, 23, 43, 454, 23, 65, 87}; 

    cout << numberArray[3] << endl; 

    cout << "For loop:" << endl; 
    for (int i = 0; i < 10; i++){
        cout << "The value at index " << i << " is " << numberArray[i] << endl; 
    }

    cout << "while loop: " << endl; 
    int pos = 0; 
    while(pos < 10){
        cout << "The value at index " << pos << " is " << numberArray[pos] << endl; 
        pos++; 
    }
}
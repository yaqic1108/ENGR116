#include <iostream>
#include <string>

using namespace std; 

int main(){
    string sentence = "Hello World, this is a string"; 
    
    cout << sentence << endl; 
    cout << sentence.size() << endl; //prints the length of the string 
    cout << sentence.length() << endl; //same as sentence.size()

    sentence = sentence + ". I can continue this sentence";
    sentence += ". I can continue this sentence"; 
    cout << sentence << endl; 

    char character = 'c'; //can only handle one character; use single quotes 
    cout << character << endl; 

    char firstCharacter = sentence[0]; //will be fine as long as it within the length of string 
    cout << firstCharacter << endl; 

    int variable; 
    cin >> variable; //promt user to enter a number to be assigned to the variable  
    cout << "Your number is " << variable << endl; 

    return 0; 
}
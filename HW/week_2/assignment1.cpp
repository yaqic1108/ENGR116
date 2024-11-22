/*
Assignement 1: 5 Print Statements 
"I pledge my honors that I have abided by the Stevens Honors System."
*/
#include <iostream>
#include <stdlib.h>
using namespace std; 

void red(){
    printf("\033[0;31m"); //ANSI colors, [0;31m is the color code. 0 can be changed to 1 for text to be bold 
}

void redBold(){
    printf("\033[1;31m");
}

void reset(){
    //resets terminal text color back to white 
    printf("\033[0m"); 
}

int main(){
    redBold();
    cout << "Name: ";
    red();
    cout << "Ya Qi Chew" << endl; 
    redBold();
    cout << "Major: "; 
    red(); 
    cout << "Mechanical Engineering" << endl; 
    redBold(); 
    cout << "Resident Hall: "; 
    red(); 
    cout << "Humphreys" << endl; 
    redBold(); 
    cout << "Interest: "; 
    red(); 
    cout << "Robotics, Crocheting, Baking" << endl; 
    redBold();
    cout << "Hometown: "; 
    red(); 
    cout << "Perak, Malaysia (currently live in Brooklyn, NY)" << endl; 
    reset();

    return 0; 
}
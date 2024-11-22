#include <iostream>

using namespace std; 

const double SMOOT = 5.583; //creates a constant variable (make sure variable name is all CAPS)

int main(){

    int smoots = 0; 
    double feet = 0; 

    cout << "How many smoots long is your bridge?";
    cin >> smoots; 
    feet = smoots * SMOOT; 
    cout << "Your bridge is " << feet << "ft. long +/- ear.";

    return 0; 
}
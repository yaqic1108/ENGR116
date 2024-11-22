#include <iostream>

using namespace std;

int main()
{
    //Declaring and initializing the variables
    int number;
    string output = "";
    

    //Prompting the user for input
    cout << "Please enter an integer: ";
    cin >> number;

    //Using if/else statements
    if(number % 2 == 0) 
    {
        output = "The number is even";
    }
    else 
    {
        output = "The number is odd";
    }

    //Using a ternary operator
    

    //Output for the user
    cout << output;

    return 0;
}
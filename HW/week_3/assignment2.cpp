/*"I pledge that I have abided by the Stevens Honors System." signed: Ya Qi Chew 

Assignment:
1. Prompts the user to enter two integer values, and is able to perform basic math (+, -, *, /) on them,
2. Prompts the user to enter two floating point values, and is able to perform basic math on them, and
3. Prompts the user to enter two ‘string’ values (e.g., name and address) and is able to concatenate these 
   two strings and print back the result.

Check+: Write a program that is able to perform advanced math operations, such as powers, sine, cosine, etc., 
        To do this, you will have to include math libraries and use the built in functions.
*/
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string chosenOperation; 

int math(double num1, double num2){
    if (chosenOperation == "+"){
        cout << num1 + num2 << endl; 
    }else if (chosenOperation == "-"){
        cout << num1 - num2 << endl; 
    }else if (chosenOperation == "*"){
        cout << num1 * num2 << endl; 
    }else if (chosenOperation == "/"){
        cout << num1 / num2 << endl; 
    }

    return 0; 
}

int simple(){
    int num1; 
    int num2; 
    float num3; 
    float num4; 
    string sentence1; 
    string sentence2; 

    cout << "Chose a number (make sure its an interger):";
    cin >> num1; 
    cout << "Chose another interger: "; 
    cin >> num2; 
    cout << "Chose an operation: "; 
    cin >> chosenOperation; 
    cout << math(num1, num2);

    cout << "Chose a numeber (include decimals if you want): "; 
    cin >> num3; 
    cout << "Chose another number: "; 
    cin >> num4; 
    cout << "Chose an Operation: ";
    cin >> chosenOperation; 
    cout << math(num3, num4);

    cout << "Favorite Color: "; 
    cin >> sentence1; 
    cout << "Favorite Animal: "; 
    cin >> sentence2; 
    cout << sentence1 << " " << sentence2 << endl; 

    return 0; 
}

int trigFucntions(){
    //game plan: 
    //have the input like sin(2) 
    //create fuction that run through the entire string, storing sin in a fuction string and 2 in a number int
    //fuction would run throught each of the character. 
    string input; 
    string function; 
    string stringnumber; 
    double number; 
    int position;

    cout << "Please enter a trig fuction:"; 
    cin >> input; 
    // cout << input << endl; 

    for(int pos = 0; pos < input.size(); pos++){ //make sure to initalize the pos variable every time
        if (pos < input.find('(')){
            function = function + input[pos]; 
            cout << function << endl; 
        }
        else if(pos > input.find('(') && pos < input.find(')')){
            stringnumber = stringnumber + input[pos]; 
            number = stod(stringnumber);
            // cout << stringnumber << endl; 
            // cout << "number:" << number << endl; 
        }
    }

    cout << "Your function is: " << function << endl; 
    cout << number << endl;

    if(function == "sin"){
        cout << "Answer:" << sin(number) << endl; 
    }
    else if (function == "cos"){
        cout << "Answer:" << cos(number) << endl;
    }
    else if (function == "tan"){
        cout << "Answer:" << tan(number) << endl; 
    }
    else if (function == "arcsin"){
        cout << "Answer:" << asin(number) << endl; 
    }
    else if (function == "arccos"){
        cout << "Answer:" << acos(number) << endl; 
    }
    else if (function == "arctan"){
        cout << "Answer:" << atan(number) << endl; 
    }

    return 0; 
}

int main(){
    simple(); 
    trigFucntions(); 

    return 0; 
}
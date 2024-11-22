/*
Your next assignment is to write a series of functions outside main and utilize these functions by calling them from main().

The functions you must implement:

A function that prints a simple text message on screen, such as "Hope you're having a good day". The signature for this function is: 
    void printGreeting()
A function that accepts two floating point values as input (x and y), and prints the result of x/y. If the denominator (y) is zero, the 
    function prints "Cannot perform division". Signature for this function: void divideNumbers(float x, float y)
A function that returns the factorial of an input integer value (num). If the input number is negative, the function returns 0. If the 
    value is non-negative, the function computes the facorial and returns the value. Signature of this function: int factorial(int num)
A function that accepts a positive integer as input (N), and prints the first N terms of the Fibonacci series. For example, for an input of
     N = 10, the function prints "0, 1, 1, 2, 3, 5, 8, 13, 21, 34". Signature for this function: void fibonacci(int N)

[Final Step]: Once you have coded down these functions outside your main, go ahead and call these functions with meaningful parameters as 
    input from within main(). If the function returns a value, capture and print that response in main.


"I pledge that I have abided by the Stevens honor system." signed: Ya Qi Chew 
*/

#include <iostream>

using namespace std; 

void printGreeting(); 
void divideNumbers(float x, float y); 
int factorial(int num); 
void fibonacci(int N); 

int main(){
    float x; 
    float y; 
    int x2; 
    int x3;
    
    printGreeting(); 
    cout << "DIVIDING NUMBERS: " << endl; 
    cout << "Enter a number:"; 
    cin >> x;
    cout << "Enter another number:"; 
    cin >> y; 
    divideNumbers(x,y); 
    cout << "FACTORIALS:" << endl;
    cout << "Enter a number: "; 
    cin >> x2; 
    factorial(x2);
    cout << "FIBANOCCI: " << endl; 
    cout << "Enter a number: "; 
    cin >> x3; 
    fibonacci(x3);

}

void printGreeting(){
    cout << "Hope you're having a good day" << endl; 
}

void divideNumbers(float x, float y){
    if(y == 0){
        cout << "Cannot perform division" << endl; 
    }else{
        cout << x/y << endl; 
    }
}

int factorial(int num){
    int total = 1; 

    while (num > 0){
        total = total * num; 
        num--;
    }

    if (num == 0){
        cout << total << endl; 
    }

    if (num < 0){
        cout << "0" << endl; 
    }

    return 0;
}

void fibonacci(int N){ 
    int counter; 
    int num1 = 0; 
    int num2 = 1; 
    int num3; 
    cout << num3 << endl; 
    string numList = "("; 

    while (counter != N-1){
            if (counter == 0){
                numList += to_string(num1) + ","; 
                counter++;
            } else if (counter == 1){
                numList += to_string(num2) + ","; 
                counter++; 
            } else {
                num3 = num1 + num2; 
                numList += to_string(num3) + ","; 
                num1 = num2; 
                num2 = num3; 
                counter++; 
            }
    }
    num3 = num1 + num2; 
    numList += to_string(num3)+")";

    cout << numList << endl; 
}
#include <iostream> 
#include <math.h>

using namespace std; 

int main (){
    int x = 4;
    int y = 5; 
    int sum = x + y; 
    int product = x * y; 
    int quotient1 = x/y; 

    cout << sum << endl;
    cout << product << endl; 
    cout << quotient1 << endl; //prints 0 because int cant have decimal, it would just drop the decimals not round
    
    float quotient = float(y)/x; //float(y) --> casting converting it from one variable type to another 
    cout << quotient << endl; // now it would return 1.25 

    float bigDecimal = 0.1234567f; //f behind number just says it a float 
    //float has 7 decimal place accuracy 
    double biggerDecimal = 1.0/7.0; 
    //double accurate to 15 decimals 

    cout << biggerDecimal << endl; 

    long num1 = 20000000; //long intergers 
    long double num2 = 2000000000.12334; //long with decimals 

    cout << num1 << endl; 
    cout << num2 << endl; 

    //thing in math.h
    cout << abs(-10) << endl; 
    cout << pow(4,3) << endl; 

    return 0; 

}
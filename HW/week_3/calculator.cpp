/*
Plan: 
have variable total 
iterate through the input
function to seperate the symbols from the numbers 

running through the string, storing the first number in a variable, when it hits operation it stores that in 
seperate variable which stops when it hits operation number 2 
*/
#include <iostream> 
#include <math.h>
#include <string>

using namespace std; 

bool isOperation(int i); 
double combine(double x, double y, string op); 

string num1Str;  
string num2Str;
string input; 
string operation;
double total = 0.0;  
double num1; 
double num2; 
int pos = 0;

int main(){

    cout << "Enter simple calculation:" << endl; 
    cin >> input; 

    while(pos < input.length()){
        if (!isOperation(pos)){
                    num1Str = num1Str + input[pos]; 
                    num1 = stod(num1Str);
                    cout << "num1: " << num1 << endl; 
                    pos++; 
                    cout << "pos: " << pos << endl;
                // }else{
                //     num2Str = num2Str + input[pos]; 
                //     num2 = stod(num2Str);
                //     cout << "num2: " << num2 << endl; 
                //     pos++; 
                //     cout << "pos: " << pos << endl;
                // }
        }else if (isOperation(pos)){ 
            operation = input[pos];
            cout << "op" << operation << endl; 
            pos++; 
        }else if (!isOperation(pos) && !num1Str.empty()){
            num2Str = num2Str + input[pos]; 
            num2 = stod(num2Str);
            cout << "num2: " << num2 << endl; 
            pos++; 
            cout << "pos: " << pos << endl;
        }
    }

    cout << "Total: " << total << endl; 

}

bool isOperation(int i){
    if (input.substr(pos) == "+" ||
        input.substr(pos) == "-" ||
        input.substr(pos) == "*" ||
        input.substr(pos) == "/" ){
        return true; 
    }else{
        return false; 
    }
}

double combine(double x, double y, string op){
    if (op == "+"){
        total = x + y; 
    }
    else if (op == "-"){
        total = x - y; 
    }
    else if (op == "*"){
        total = x * y; 
    }
    else if (op == "/"){
        if (y == 0){
            cout << "Division my zero!" << endl; 
            return 0;
        }else{
        total = x / y;
        }
    }

    operation.clear(); 
    return 0; 
}
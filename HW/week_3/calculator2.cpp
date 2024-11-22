#include <iostream> 
#include <string> 
#include <math.h>

using namespace std; 

bool isOperation(int i); 
double combine(double x, double y, string op); 

string input; 
string oper; 
string num1Str;
string num2Str; 
int pos = 0; 
double num1; 
double num2; 
double total; 

int main(){
    cout << "Enter simple calculation"; 
    cin >> input; 

    while (pos < input.length()){
        if (num1Str.empty() && !isOperation(pos)){
            num1Str += input[pos]; 
            num1 = stod(num1Str);
            cout << "num1: " << num1 << endl; 
            pos++; 
        }else if(isOperation(pos)){
            oper = input[pos]; 
            cout << "op: " << oper << endl; 
            pos++; 
        }else if(!num1Str.empty() && !oper.empty()){
            num2Str += input[pos]; 
            num2 = stod(num2Str); 
            cout << "num2: " << num2 << endl; 
            pos++;
        }
    }

    combine(num1, num2, oper);
    cout << "Total: " << total << endl;
}

bool isOperation(int i){
    if (input[i] == "+" ||
        input[i] == "-" ||
        input[i] == "*" ||
        input[i] == "/" ){
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

    oper.clear(); 
    num2Str.clear(); 
    num1Str.clear(); 
    num1 = total; 
    return 0; 
}
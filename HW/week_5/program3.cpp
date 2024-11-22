/*
" I plegde that I have abided by the Stevens Honor System." Signed: Ya Qi Chew 

Write a program that accepts an indefinite set of numbers until the user enters “-1”. In other words, the program keeps accepting new values 
until the user provides a “-1” (your program accepts all values, and discards the “-1”). When done, the program prints back to the user: 
(i) the sum of all numbers entered (except -1), 
(ii) the minimum value seen across all numbers (except -1), and 
(iii) the maximum value across all numbers (except -1).
*/
#include <iostream> 

using namespace std; 

int main(){
    string strinput; 
    int input = 0;
    int sum; 
    int min; 
    int max; 

    while (strinput != "-1"){
        cout << "Input Number: "; 
        cin >> strinput; 
        input = stoi(strinput); 
        cout << "Input: " << input << endl; 
        if (input != -1){
            sum += input; 
            if (input < min){
                min = input; 
            }
            if (input > max){
                max = input; 
            }
        }
    }
    
    cout << "Sum: " << sum << endl; 
    cout << "Min: " << min << endl; 
    cout << "Max: " << max << endl; 
}
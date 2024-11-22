/*
"I pledge that I have abided by the Stevens Honors System." Signed: Ya Qi Chew 

 Write a program that accepts exactly ten (10) integer numbers from the user. When the user is done inputting these numbers, the program prints
 back: 
 (i) the sum of the 10 numbers, 
 (ii) the minimum value from the 10 numbers, and 
 (iii) the maximum value from the 10 numbers.
*/

#include <iostream> 

using namespace std; 

int sum(); 
int max(); 
int min(); 

string input; 
int numbers[10]; 

int main(){
    int counter; 
    string num; 

    cout << "Input 10 numbers: "; 
    cin >> input; 

    for (int i = 0; i < input.length(); i++){
        if(input.substr(i,1) != ","){
            num += input.substr(i,1); 
            numbers[counter] = stoi(num);
            if (i == input.length()){
                numbers[counter] = stoi(num); 
            }
        }else if (input.substr(i,1) == ","){
            numbers[counter] = stoi(num);
            num.clear(); 
            counter++; 
        }
    }

    cout << "Sum: " << sum() << endl; 
    cout << "Max: " << max() << endl; 
    cout << "Min: " << min() << endl; 
}

int sum(){
    int sum; 

    for (int pos = 0; pos < 10; pos++){
        sum += numbers[pos]; 
    }
    
    return sum; 
}

int max(){
    int max = 0; 

    for (int i = 0; i < 10; i++){
        if (numbers[i] > max){
            max = numbers[i]; 
        }
    }

    return max; 
}

int min(){
    int min; 

    for (int i = 0; i < 10; i++){
        if (numbers[i] < min){
            min = numbers[i]; 
        }
    }

    return min; 
}
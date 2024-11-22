/*
"I pledge that I have abided by the Stevens Honors Syetem." Signed: Ya Qi Chew 

 Write a program that creates two 2x2 matrices and adds them together. Specifically, create A[2][2] and B[2][2 of type integer]. The program 
 accepts four integer numbers (twice) from the user to populate A and B. It then proceeds to create a third matrix, C[2][2], which is the 
 addition of A and B. It finally prints the contents of C on screen, which should be the correct values for C = A + B.
*/
#include <iostream>

using namespace std; 

int inputArray(string input, int array[2][2]); 
int sum(int a[2][2], int a2[2][2]); 

string input1; 
string input2; 
int array1 [2][2]; 
int array2 [2][2]; 
int sumArray [2][2];

int main(){

    cout << "Input 4 integers: " << endl; 
    cin >> input1; 
    cout << "Input 4 integers: " << endl; 
    cin >> input2; 

    inputArray(input1, array1);
    inputArray(input2, array2); 

    sum(array1, array2); 

}

int inputArray(string input, int array[2][2]){
    int comma; 
    string num; 

    for (int j = 0; j < 2; j++){
        for (int k = 0; k < 2; k++){
            comma = input.find(','); 
            num = input.substr(0,comma); 
            array[j][k] = stoi(num); 
            input = input.erase(0,comma+1); //str.erase[start pos, end pos) allows u to erase a certain part of the string 
            comma = 0; 
        }
    }

    return 0; 
}

int sum(int a[2][2], int a2[2][2]){
    string output; 

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            sumArray[i][j] = a[i][j] + a2[i][j]; 
            output += to_string(sumArray[i][j]) + " ";
        }
    }

    cout << "Array sum: " << output << endl; 
    return 0; 
}
/*
[Program-1] Write a program that creates two 3x3 matrices, A and B, and then prints the result of subtracting these two matrices as a 
third matrix, C. The program creates two 3x3 integer arrays, and prompts the user to input values to populate them. It then prints back 
the difference on screen. Do print the matrix using a format similar to what we did during lecture.
*/

#include <iostream>

using namespace std; 

int inputArray(string input, int arrary[3][3]); 
int subtract(int array1 [3][3], int array2 [3][3]);

int matrix1[3][3]; 
int matrix2[3][3]; 
int matrix3[3][3]; 

int main(){
    string input1;
    string input2;  

    cout << "Enter 9 numbers for a 3x3 matrix: " << endl; 
    cin >> input1; 
    cout << "Enter another 9 numbers for another matrix: " << endl; 
    cin >> input2; 

    inputArray (input1, matrix1); 
    inputArray (input2, matrix2); 

    subtract(matrix1, matrix2); 

    for (int i = 0; i < 3; i++){
        cout << "|"; 
        for (int j = 0; j < 3; j++){
            cout << " " << matrix3 [i][j] << " "; 
        }
        cout << "|" << endl; 
    }
}

int inputArray(string input, int array[3][3]){
    int comma; 
    string num; 
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            comma = input.find(',');
            num = input.substr(0, comma); 
            array[i][j] = stoi(num); 
            input = input.erase(0, comma+1); 
            comma = 0; 
        }
    }

    return 0; 
}

int subtract(int array1 [3][3], int array2 [3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrix3[i][j] = array1[i][j] - array2[i][j];
        }
    }

    return 0; 
}
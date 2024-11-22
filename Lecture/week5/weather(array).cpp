#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std; 

const int WEEK = 7; 

int main(){
    int temperture[7]; 
    srand(time(0)); //must be done inside main or else it breaks 

    for (int i = 0; i < WEEK; i++){
        temperture[i] = rand(); 
    }

    return 0; 
}
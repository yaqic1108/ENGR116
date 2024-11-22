#include <iostream> 

using namespace std; 
int arr2d [2][5] = {//[row][column]
        {1,2,3,4,5},
        {6,7,8,9,0}
    };

int main(){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            cout << "The value at row " << i << " and column " << j << " is " << arr2d[i][j] << endl; 
        }
    }

    return 0; 
}
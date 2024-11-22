#include <iostream>

using namespace std; 

int main(){

    int hour = 0; 
    string ampm; 

    cout << "What hour is it: "; 
    cin >> hour; 
    cout << "AM or PM"; 
    cin >> ampm; 

    if (hour < 11 && ampm == "AM"){
        cout << "Salamat Pagi!" << endl; 
    }else if(hour < 2 && ampm == "PM"){
        cout << "Salamat Siang!" << endl; 
    }else if (hour < 5 && ampm == "PM"){
        cout << "Salamat Sore!" << endl; 
    }else if (hour > 20){
        cout << "Salamat Malam!" << endl; 
    }else{
        cout << "Salamat Tidur1" << endl; 
    }

    return 0; 
}

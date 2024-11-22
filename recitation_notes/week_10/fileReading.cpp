#include <iostream> 
#include <string>
#include <fstream>

using namespace std; 

string firstName, lastName; 
string line; 

void Write(){
    ofstream write; 
    write.open("contactbook.txt", ios::app);
    write << firstName << " " << lastName << " " << endl; // storing a new contact in the contact book file 
    write.close();
}

void Display(){
    ifstream reader; 
    reader.open("contactbook.txt");

    while(getline(reader, line)){
        cout << line << endl; 
    }
    reader.close(); 
}

void Find(){
    ifstream reader; 
    string substring, variable; 
    bool ifFound = false; 
    
    cout << "Search a Name: "; 
    cin >> variable; 

    reader.open("contactbook.txt");

    if (reader.is_open()){ // catching if the file actually exist 
        while (getline(reader, line)){
            substring = line.substr(0,line.find(" "));
            if (variable == substring){
                cout << "Found: " << line << endl; 
                ifFound = true; 
                break;
            }
        }
        if (!ifFound){
            cout << variable << "not found" << endl; // when the file exist but the variable doesn't

        }
    }else{
        cout << "File does not exist!" << endl; 
    }
}

int main(){
    cout << "Enter First Name: " << endl; 
    cin >> firstName; 
    cout << "Enter Last Name: " << endl; 
    cin >> lastName; 
    Write(); 

    Display(); 

    Find();

    return 0;
}
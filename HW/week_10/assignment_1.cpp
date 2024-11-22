/*
Create a ContactsBook application that allows the user to create, search and display their contacts on a screen. Your program must store all 
contact information on a file. Contact details can include attributes like First name, Last name, Phone, Email etc., Your program must allow 
the user to: (i) create and store new contact information, (ii) search for a contact using details such as name/phone-number, and 
(iii) display all your contacts on the terminal.

This assignment has two requirements: (1) use functions() to perform the required actions, and (2) store contact details on a physical 
file using ifstream/ofstream objects.

Check+ or more: Implement a function that allows a user to search-and-delete a contact.
*/
#include <iostream>
#include <string>
#include <fstream> 

using namespace std; 

string firstName, lastName, phoneNumber, email; 
string line; 

void Write(){
    cout << "Creating New Contact: " << endl;  
    cout << "Enter First Name: "; 
    cin >> firstName; 
    cout << "Enter Last Name: "; 
    cin >> lastName; 
    cout << "Enter Phone Number: "; 
    cin >> phoneNumber; 
    cout << "Enter Email: "; 
    cin >> email; 

    ofstream write; 
    write.open("contactBook.txt", ios::app);
    write << firstName << ", " << lastName << " P:" << phoneNumber << " E:" << email << endl; 
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
    string chosenType;
    string numLine; 
    bool ifFound = false; 
    int input; 
    int foundCounter; 
    
    cout << "Search by: Name(type 1), Number(type 2)" << endl; 
    cin >> input;

    switch (input){
        case 1: 
            chosenType = "Name"; 
            cout << "Search Name: "; 
            cin >> variable; 
            break; 
        case 2: 
            chosenType = "Number";
            cout << "Search Number: "; 
            cin >> variable; 
            break; 
    } 

    reader.open("contactbook.txt");

    if (reader.is_open()){ // catching if the file actually exist 
        while (getline(reader, line)){//while there is still lines within the txt (if getline(reader, line) reach end of text = false)
            if (chosenType == "Name"){
                substring = line.substr(0, line.find(","));
            }else{
                numLine = line.substr(line.find("(")); 
                substring = numLine.substr(0, numLine.find(" "));
            }
            if (variable == substring){
                if (!ifFound){ 
                    cout << "Found: " << endl;
                    cout << line << endl; 
                    foundCounter++;
                    ifFound = true; 
                }else if (ifFound){
                    cout << line << endl; 
                    foundCounter++;
                }else{
                    break;
                }
            } 
        }

        if (!ifFound){
            cout << variable << " not found" << endl; // when the file exist but the variable doesn't

        }
    }else{
        cout << "File does not exist!" << endl; 
    }
}

int main(){
    int chosen; 

    cout << "Your Contact Book:" << endl; 
    cout << "Create Contact(Type 1), Search Contacts(Type 2), Display Contacts(Type 3)" << endl; 
    cin >> chosen; 

    switch(chosen){
        case 1: 
            Write(); 
            cout << "Updates Contacts: " << endl; 
            Display(); 
            break; 
        case 2: 
            Find(); 
            break; 
        case 3: 
            Display(); 
            break; 
    }

    return 0;
}
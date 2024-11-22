#include <iostream>

using namespace std; 

double average(string input); 
string intoLetter(double numGrade); 
int weightInput(); 

double hwWeight; 
double midtermWeight; 
double finalWeight; 
double numGrade; 
string letterGrade; 

int main(){
    string hwInput; 
    string midtermInput; 
    string finalInput; 
    double hw; 
    double midterm; 
    double final;

    //Retrieve assignment weights 
    weightInput(); 
    
    //Retrieve scores 
    cout << "Enter hw scores: ";
    cin >> hwInput; 
    cout << "Enter midterms scores: "; 
    cin >> midtermInput; 
    cout << "Enter final score(s): "; 
    cin >> finalInput; 

    //Calculate average of each assignment  
    hw = average(hwInput); 
    cout << "HW Average: " << hw << endl; 
    midterm = average(midtermInput); 
    cout << "Midterm Average: " << midterm << endl; 
    final = average(finalInput); 
    cout << "Finals Average: " << final << endl; 

    //Calculate grade 
    numGrade = hw*hwWeight + midterm*midtermWeight + final*finalWeight; 

    cout << "Final Grade: " << numGrade << endl; 
    cout << "Letter Grade: " << intoLetter(numGrade) << endl; 
}

int weightInput(){
    cout << "Weight of homework in decimal: "; 
    cin >> hwWeight; 
    cout << "Weight of midterm in decimal: "; 
    cin >> midtermWeight; 
    cout << "Weight of Final in decimal: "; 
    cin >> finalWeight; 

    if(hwWeight + midtermWeight + finalWeight > 1){  
        cout << "Total weight distribution is greater than 1." << endl; 
        hwWeight = 0; 
        midtermWeight = 0; 
        finalWeight = 0; 
        weightInput(); 
    }

    return 0; 
}

double average(string input){
    int pos = 0; 
    double average; 
    double final; 
    double num; 
    int counter = 0; 
    string numS;

    while(pos < input.length()){
        if (input.substr(pos,1) != ","){
            numS += input[pos];
            pos++; 
            if (pos == input.length()){
                num = stod(numS); 
                average += num; 
                counter++; 
            }
        }else if (!numS.empty()){
            num = stod(numS); 
            average += num; 
            counter++; 
            numS.clear(); 
            pos++; 
        }
    }

    final = average/counter; 

    return final; 
}

string intoLetter(double numGrade){
    if (numGrade >= 91.0){
        return letterGrade = "A"; 
    }else if(numGrade >= 81.0 && numGrade <= 90.0){
        return letterGrade = "B"; 
    }else if(numGrade >= 71.0 && numGrade <= 80.0){
        return letterGrade = "C";
    }else{
        return letterGrade = "D"; 
    }
}
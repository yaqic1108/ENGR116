/*
Create a grade predictor program for a hypothetical course that comprises the following elements: (i) six 
homework scores, (ii) two midterm scores, and (iii) one final. The following weightage is used to arrive at the 
final cumulative score: 40% from homeworks, 40% from midterms and 20% from the final. A final letter grade is 
arrived at based on the following score range: (i) ‘A’ for scores 91--100, (ii) ‘B’ for 81--100, (ii) ‘C’ for 
71--80 and D otherwise.Want bonus points? 

Check+: Create a realistic grade predictor for any course. Your program assumes nothing about the number of 
homeworks/midterm/finals. Instead, it asks for these things up-front, including the weights for each component. 
In summary, this program should universally work for any course as it learns and adapts what it does based on 
what/how it learns about the course from the user.
*/
#include <iostream> 

using namespace std; 

double average(int type, string assginment); 

int main(){
    string hwInput; 
    string midtermInput; 
    string finalInput; 
    double hw; 
    double midterm; 
    double final;
    double Grade; 

    cout << "Enter 6 hw scores: ";
    cin >> hwInput; 
    cout << "Enter 2 midterms: "; 
    cin >> midtermInput; 
    cout << "Enter 1 final: "; 
    cin >> finalInput; 

    hw = average(1, hwInput); 
    cout << "hw: " << hw << endl; 
    midterm = average(2, midtermInput); 
    cout << "midterm: " << midterm << endl; 
    final = stod(finalInput); 

    Grade = hw*0.4 + midterm*0.4 + final*0.2; 

    cout << "Final Grade: " << Grade << endl; 
 }

double average(int type, string input){
    int pos = 0; 
    double average; 
    double final; 
    double num; 
    string numS;

    while(pos < input.length()){
        if (input.substr(pos,1) != ","){
            numS += input[pos];
            pos++;
            if (pos == input.length()){
                num = stod(numS); 
                average += num; 
            }
        }else if (!numS.empty()){
            num = stod(numS); 
            average += num; 
            numS.clear(); 
            pos++; 
        }
    }

    switch(type){
        case 1:
            final = average/6; 
            break; 
        case 2: 
            final = average/2; 
            break; 
    }

    return final; 
}
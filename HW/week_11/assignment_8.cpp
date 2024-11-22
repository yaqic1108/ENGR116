/*
Your next assignment is to simulate the “Vending Machine” You must create a new class called “VendingMachine”, and perform the following using 
a variable (object) of this type in your main() function.Your VendingMachine serves four or more items to customers (e.g., Sprite, Water, etc.,).
For each type, there is an initial stock of items (e.g., 30 cans of Sprite), as well as a price per item (e.g., Sprite is $1.25). 

Your program allows users to:
Select an item from a simple menu (e.g., “Press 1 for Sprite”, “Press 2 for water” etc.,)
Enter a dollar amount (e.g, “Insert cash $5, $10, or $20”)
Your vending machine prints a success message on screen, as well as the correct change amount (e.g, User inserts $5 for Sprite costing $1.25, 
the correct change amount is $3.75)
If the machine runs out of stock for any item, it refunds the full amount back to the user.

Please submit your .cpp file and a screenshot of your output.
*/

#include <iostream> 

using namespace std; 

class VendingMachine{
    private:
        int sprite, coke, water, gingerale;
        float cash; 

    public: 
        VendingMachine(int c){
            sprite = 10; 
            water = 10; 
            coke = 10; 
            gingerale = 10; 
            cash = c; 
        }

        void getMenu(){
            cout << "Press 1 for sprite" << endl; 
            cout << "Press 2 for water" << endl; 
            cout << "Press 3 for coke" << endl; 
            cout << "Press 4 for ginger ale" << endl; 
            cout << "Press i to see inventory" << endl; 
        }

        void getWater(){
            if (water != 0){
                float waterPrice = 2.00;

                if (cash >= waterPrice){
                    water--; 
                    cash -= waterPrice;
                    cout << "You bought a bottle of water" << endl; 
                    cout << "Cash left: " << cash << endl; 
                }else {
                    cout << "Not enough cash" << endl;
                }
            }else{
                cout << "Out of Stock" << endl; 
            }
        }

        void getItem(){
            
        }
}; 

int main(){
    float money; 
    int input; 

    cout << "Enter how much cah you have" << endl; 
    cin >> money;

    VendingMachine myMachine(money); 
    myMachine.getMenu();
    
    cout << "Enter menu option: "; 
    cin >> input;

    switch (input){
        case 1: 
    }

    return 0; 
}
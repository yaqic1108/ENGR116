#include <iostream> 

using namespace std; 

class Rectangle{
    private: 
        int lenght, width; 
    
    public: 
        Rectangle(int l, int w){
            lenght = l; 
            width = w; 
        }

        int caculateArea(){
            return lenght * width; 
        }

        void displayDimensions(){
            cout << "Length: " << lenght << " Width: " << width << endl; 
        }
}; 

int main(){
    Rectangle myRectangle(10,5);

    cout << myRectangle.caculateArea() << endl; 

    myRectangle.displayDimensions();

    return 0; 
}
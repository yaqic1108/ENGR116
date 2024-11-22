#include "Product.h"

string Product:: getName(){
    return name; 
}

void Product::setName(string name){
    this ->name = name; 
}

int Product::getNumUnits(){
    return numUnits; 
}

void Product::setNumUnits(){
    numUits = units; 
}

double Product::getPrice(){
    return price; 
}

void Product::setPrice(double price){
    this -> price = price; 
}

double Product::getTotal(){
    return total; 
}

void Product::setTotal(double total){
    this -> total = total; 
}

#include<iostream>

class Area{

    public: // access specifier
        Area(double  side){// with one parameter square area
            std::cout << "Area of Sqare: " << side * side << std::endl;
        }
    
        Area(double length , double breadth){ // with two parameter for rectangle
            std::cout << "Area of Rectangle: " << length * breadth << std::endl;
        }
};

int main(){

    Area sqare(10);

    Area rectangle(7, 8);

    return 0;
}

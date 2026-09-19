#include<iostream>

class myclass{
    int x, y;

    public:
        void getData();
        void display();
       void operator++();
};

void myclass::getData(){
    std::cout << "Enter value of x : ";
    std::cin >> x;
    std::cout << "Enter value of y : ";
    std::cin >> y;
}


void myclass::display(){
    std::cout << "\n";
    std::cout << "value of x = " << x << std::endl;
    std::cout << "value of y = " << y << std::endl;
}
void myclass::operator++(){
    x = ++x;
    y = ++y;
}

int main(){

    myclass obj;
    obj.getData();

    std::cout << "\nBefore operator overloading : ";
    obj.display();

    ++obj;

    std::cout << "\nAfter operator overloading : ";
    obj.display();

    return 0;
}

/*

Enter value of x : 10
Enter value of y : 20

Before operator overloading : 
value of x = 10
value of y = 20

After operator overloading : 
value of x = 11
value of y = 21



    */

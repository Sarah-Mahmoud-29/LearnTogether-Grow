#include<iostream>

class MyClass {     
    public:           // Access specifier
        MyClass() {     // Constructor
            cout << "Constructor Invoked!\n";
        }
};
  
int main() {
    MyClass myObj;    // Create an object of MyClass (this will call the constructor)
    return 0;
}

#include<iostream>
#include<string>

class myClass{

    public:  // public access specifier
    std::string name;// string data
    int rollNumber;// integer data

    // class method
    void displayInfo(){
        std::cout << "\n";
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

int main(){

    myClass obj;// object of myclass 
    
    //setting values to all data members
    obj.name = "Ashlok Kumar";
    obj.rollNumber = 35;

    //calling displayInfo() method
    obj.displayInfo();

    return 0;
}

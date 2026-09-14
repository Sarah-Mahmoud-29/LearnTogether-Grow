#include<iostream>
#include<string>

class Student{

    private: //access specifier
        std::string name;
        int rollNumber;
    public:
        // creating constructor with parameter
        Student(std::string _name, int _rollNumber){
            name = _name;
            rollNumber = _rollNumber;
        }

        // printing information
        void displayInfo(){
            std::cout << "Name: " << name << std::endl;
            std::cout << "Roll Number: " << rollNumber << std::endl;
        }
};

int main(){

    Student student1 = Student("Ashlok Kumar", 35);
    // it can also be write like
    // Student student1("Ashlok Kumar", 35); // Both worked same

    //calling displayInfo() function
    student1.displayInfo();

    return 0;
}

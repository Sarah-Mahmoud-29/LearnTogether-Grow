#include<iostream>
#include<string>


class Student{

    private: //access specifier
        std::string name;
        int rollNumber;
    public:
        // declaration of constructor
        Student(std::string _name, int _rollNumber);

        // method declaration
        void displayInfo();
};

// defining constructor
Student::Student(std::string _name, int _rollNumber){
    name = _name;
    rollNumber = _rollNumber;
}

// defining method 
void Student::displayInfo(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Roll Number: " << rollNumber << std::endl;
}


int main(){

    Student student = Student("Ashlok Kumar", 35);

    //calling displayInfo() function
    student.displayInfo();

    return 0;
}

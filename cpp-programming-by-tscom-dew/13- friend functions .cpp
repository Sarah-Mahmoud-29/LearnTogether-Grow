#include<iostream>
#include<string>

class Student{
    private:
        std::string name;
        int rollnumber;

        friend void displayInformation(Student s);

    public:
        // default constructor;
        Student() = default;
        //parameterized constructor
        Student(std::string name, int rollnumber){
            this->name = name;
            this->rollnumber = rollnumber;
        }

        //setter
        void setName(std::string _name){
            name = _name;
        }
        void setRollNumber(int _rollnmber){
            rollnumber = _rollnmber;
        }
};


// now we can acess private data outside using friend function
void displayInformation(Student s){
    std::cout << "\nStudent Information:\n";
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Roll Number: " << s.rollnumber << std::endl;
}

int main(){

    //creating object of Student class
    Student student("Ashlok Kumar", 35);

    //calling friend function
    displayInformation(student);

    // now modifing original data
    student.setName("Amit Kumar");
    student.setRollNumber(23);

    std::cout << "\nAfter Modifying date:";
    displayInformation(student);

    return 0;
}

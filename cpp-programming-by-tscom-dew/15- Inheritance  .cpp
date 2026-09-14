#include<iostream>  
#include<string>
class School{

    private:
        std::string schoolName;

    protected:
        School(std::string schoolName){
            this->schoolName = schoolName;
        }

        std::string getSchoolName(){
            return schoolName;
        }
};

class Student: protected School {
    // student private data;
    private:
        std::string name;
        int rollnumber;

    public: 
        Student( std::string _schoolName ,  std::string _name, int _rollnumber):School(_schoolName){
            name=_name;
            rollnumber = _rollnumber;
        }

        // print student information
        void displayInformation(){
            std::cout << "\nStudent Information: \n";
            std::cout << "School Name: " << getSchoolName() << std::endl;
            std::cout<<"Name: "<<name<<std::endl;
            std::cout << "Roll Number: " << rollnumber << std::endl;
        }
};

int main(){

    // creating object of student class
    Student student = Student("C++ Programming School", "Ashlok Kumar", 35);

    // calling displayInformation();
    student.displayInformation();
    return 0;
}

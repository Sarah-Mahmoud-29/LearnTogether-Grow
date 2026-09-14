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

class Student{
    // student private data;
    private:
        std::string name;
        int rollnumber;

    protected: 
        Student( std::string _name, int _rollnumber){
            name=_name;
            rollnumber = _rollnumber;
        }

        // getters
        std::string getStudentName(){
            return name;
        }
        int getRollNumber(){
            return rollnumber;
        }
};

class schoolProgrammigTeam:protected Student, protected School{

    std::string isSelected;// selected/not selected
    public:
        schoolProgrammigTeam(std::string _schollName , std::string _name , int _rollnumber , std::string _isSelected)
        :Student(_name, _rollnumber), School(_schollName){
            isSelected = _isSelected;
        }

        // displaying about student is selected or not
        void displayInformation(){
            std::cout << "\nNotice By Programming team:\n";
            std::cout<<"School Name: "<<getSchoolName()<<std::endl;
            std::cout << "Student Name: " << getStudentName() << std::endl;
            std::cout << "Roll Number: " << getRollNumber() << std::endl;
            std::cout << "Selection status: " << isSelected << std::endl;
        }
};

int main(){

    // creating object of class schoolProgrammigTeam
    schoolProgrammigTeam student1("C++ Programmig School", "Amit Kumar", 23, "Selected");

    schoolProgrammigTeam student2("C++ Programmig School", "Ashlok Kumar", 35, "Not Selected");

    student1.displayInformation();
    student2.displayInformation();
    return 0;
}

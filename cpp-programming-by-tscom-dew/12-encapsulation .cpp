#include <iostream>
#include<string>
#include<iomanip>

class Employee{
    private:
    // Private attributes
        std::string emp_name;
        std::string emp_id;
        double emp_salary;
    public:
        // setters
        void setName(std::string _name){
            emp_name = _name;
        }
        void setId(std::string _id){
            emp_id = _id;
        }
        void setSalary(double _salary){
            emp_salary = _salary;
        }

        // getters
        std::string getName(){
            return emp_name;
        }
        std::string getId(){
            return emp_id;
        }
        double getSalary(){
            return emp_salary;
        }
};

int main(){

    // creating object of Employee class
    Employee employee;

    // setting data;
    employee.setName("Ashlok Kumar");
    employee.setId("ASK1001");
    employee.setSalary(20000.00);

    // printing all data;
    std::cout << "Employee Information:\n";
    std::cout << "Name: " << employee.getName() << std::endl;
    std::cout << "ID : " << employee.getId() << std::endl;
    std::cout<<std::fixed << std::setprecision(2);
    std::cout << "Salary: " << employee.getSalary() << std::endl;

    return 0;
}

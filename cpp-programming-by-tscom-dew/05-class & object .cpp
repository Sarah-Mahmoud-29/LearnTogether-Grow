#include<iostream>
#include<string>

//creating class named myClass
class myClass{

    public: // Access specifier: public
    std::string title;// string data-member
    std::string author;// string data-member
    std::string edition;
};

int main(){

    myClass obj; // creating object of myClass;

    // Access attributes and set values;
    obj.title = "Object Oriented Programming with C++";
    obj.author = "E Balagurusamy";
    obj.edition = "Fifth Edition";

    // Print attribute values
    std::cout << "Title: " << obj.title << std::endl;
    std::cout << "Author: " << obj.author << std::endl;
    std::cout << "Edition: " << obj.edition << std::endl;

    return 0;
}

#include<iostream>

class myclass_two;
class myclass_one{

    double number1;

    friend void compareNumbers(myclass_one &objnum1, myclass_two &objnum2);

    public:
        myclass_one(double number1)
        {
            this->number1 = number1;
        }
};
class myclass_two{

    double number2;

    friend void compareNumbers(myclass_one &objnum1, myclass_two &objnum2);

    public:
        myclass_two(double number2)
        {
            this->number2 = number2;
        }
};

// lets compare
void compareNumbers(myclass_one &objnum1, myclass_two &objnum2){

    // frist display thier entred number
    std::cout << "Number1 = " << objnum1.number1 << std::endl;
    std::cout << "Number2 = " << objnum2.number2 << std::endl;

    std::cout << "\nCompared Result: ";

    if(objnum1.number1>objnum2.number2){
        std::cout << "number1 is greater than number2.\n";
    }else if(objnum1.number1<objnum2.number2){
        std::cout << "number1 is less than number2.\n";
    }else{
        std::cout << "number1 is equal to number2.\n";
    }
}

int main(){

    // creating object of class myclass_one;
    myclass_one obj1(12);

    // creating objects of class myclass_two
    myclass_two obj2(13);

    compareNumbers(obj1, obj2);

    return 0;
}

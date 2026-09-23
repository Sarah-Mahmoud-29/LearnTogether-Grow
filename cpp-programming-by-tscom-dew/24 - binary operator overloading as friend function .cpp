#include<iostream>

class myclass{

    int x, y;

    friend myclass operator+(myclass &, myclass &);

    public:
        void getData();
        void displayData();
};

void myclass::getData(){
    std::cout << "Enter value of x = ";
    std::cin >> x;
    std::cout << "Enter value of y = ";
    std::cin >> y;
}

void myclass::displayData(){
    std::cout << "\n";
    std::cout << "value of x = " << x << std::endl;
    std::cout << "value of y = " << y << std::endl;
}

myclass operator+(myclass& obj1, myclass&obj2){
    myclass result;
    result.x = obj1.x + obj2.x;
    result.y = obj1.y + obj2.y;
    return result;
}

int main(){

    myclass obj1, obj2, obj3;
    obj1.getData();
    obj2.getData();

    //addig obj1 and obj2
    obj3 = obj1 + obj2;

    obj3.displayData();
    return 0;
}

/*

Enter value of x = 5
Enter value of y = 2
Enter value of x = 3
Enter value of y = 4

value of x = 8
value of y = 6
                                                                                                                    */

#include<iostream>

class myclass {

    int x, y;
    public:
        void getData();
        void display();
        myclass operator-(myclass obj);
};

void myclass::getData(){
    std::cout << "Enter value of x : ";
    std::cin >> x;
    std::cout << "Enter value of y : ";
    std::cin >> y;
}

void myclass::display(){
    std::cout << "\n";
    std::cout << "value of x = " << x << std::endl;
    std::cout << "value of y = " << y << std::endl;
}

myclass  myclass::operator-(myclass obj){

    myclass temp;
    temp.x = x - obj.x;
    temp.y = y - obj.y;
    return temp;
}


int main(){

    myclass obj1, obj2, obj3;
    obj1.getData();
    obj2.getData();

    std::cout << "\nEntered values : ";
    std::cout << "\nobj1 : ";
    obj1.display();
    std::cout << "\nobj2 : ";
    obj2.display();

    std::cout << "\nResult of obj3 = obj1 - obj2 : ";
    obj3 = obj1 - obj2;
    obj3.display();

    return 0;
}

/*


Enter value of x : 10
Enter value of y : 20
Enter value of x : 1
Enter value of y : 2

Entered values : 
obj1 : 
value of x = 10
value of y = 20

obj2 : 
value of x = 1
value of y = 2

Result of obj3 = obj1 - obj2 : 
value of x = 9
value of y = 18
                                                                                                            */

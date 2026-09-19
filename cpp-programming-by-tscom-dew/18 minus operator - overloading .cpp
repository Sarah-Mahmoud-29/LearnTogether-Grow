#include<iostream>

class ABC{

    int x, y;
    public:
        void getData();
        void show();
        void operator-();
};

void ABC::getData(){
    std::cout << "enter value of x: ";
    std::cin >> x;
    std::cout << "enter value of y: ";
    std::cin >> y;
}

void ABC::show(){
    std::cout << "\n";
    std::cout << "value of x = " << x << std::endl;
    std::cout << "value of y = " << y << std::endl;
}

void ABC::operator-(){
    x = -x;
    y = -y;
}
int main(){

    ABC obj;
    obj.getData();

    std::cout << "Before operator overloading : \n";
    obj.show();

    -obj;
    std::cout << "\nBefore operator overloading : ";
    obj.show();
    return 0;
}

/*


enter value of x: 7
enter value of y: -5
Before operator overloading : 

value of x = 7
value of y = -5

Before operator overloading : 
value of x = -7
value of y = 5

*/

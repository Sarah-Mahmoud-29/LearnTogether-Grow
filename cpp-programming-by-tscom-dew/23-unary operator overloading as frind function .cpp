#include<iostream>

class myclass{

    int x, y;

    friend void operator-(myclass&);
    public:
        void  getData(){
            std::cout << "Enter value of x = ";
            std::cin >> x;
            std::cout << "Enter value of y = ";
            std::cin >> y;
        }

        void display(){
            std::cout << "\n";
            std::cout << "Value of x = " << x << std::endl;
            std::cout << "value of y = " << y << std::endl;
        }
};


void operator-(myclass&obj){
    obj.x = -obj.x;
    obj.y = -obj.y;
}
int main(){

    myclass obj;
    obj.getData();

    obj.display();

    -obj;
    obj.display();

    return 0;
}

/*

Enter value of x = 2
Enter value of y = 3

Value of x = 2
value of y = 3

Value of x = -2
value of y = -3

                                                                                                      */

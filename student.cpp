#include <iostream>

using namespace std;
class A {

    public:
        void printA()
        {
            cout << "Hello from class A \n";
        }

};

class B: public A {

    public:
        void printB()
        {
            cout << "Hello from class B \n";
        }

};

class C: public B {

    public:
        void printC()
        {
            cout << "Hello from class C \n";
        }

};

int main()
{
    C c;
    c.printA();
    c.printB();
    c.printC();

    return 0;
}

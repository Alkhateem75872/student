#include <iostream>

using namespace std;

// printA يحتوي على دالة إسمها A هنا قمنا بتعريف كلاس إسمه
class A {

    public:
        void printA()
        {
            cout << "Hello from class A \n";
        }

};

// printB و يحتوي على دالة إسمها A يرث من الكلاس B هنا قمنا بتعريف كلاس إسمه
class B: public A {

    public:
        void printB()
        {
            cout << "Hello from class B \n";
        }

};

// printC و يحتوي على دالة إسمها B يرث من الكلاس C هنا قمنا بتعريف كلاس إسمه
class C: public B {

    public:
        void printC()
        {
            cout << "Hello from class C \n";
        }

};

// main() هنا قمنا بتعريف الدالة
int main()
{
    // c إسمه C هنا قمنا بإنشاء كائن من الكلاس
    C c;

    // c هنا قمنا باستدعاء جميع الدوال الموجودة في الكائن
    c.printA();
    c.printB();
    c.printC();

    return 0;
}

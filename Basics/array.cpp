#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    void introduction()
    {
        cout << "Hello my name is " << name << "\n";
        cout << "and my age is " << age << "years \n";
    }
};

int main()
{
    student s;
    s.name = "Aditya";
    s.age = 20;

    s.introduction();

    return 0;
}
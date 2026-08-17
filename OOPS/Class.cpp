#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
    }
};
int main()
{
    student s;
    s.name = "Aditya";
    s.age = 20;

    s.display();

    return 0;
}
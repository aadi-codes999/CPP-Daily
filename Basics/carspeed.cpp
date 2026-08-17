#include <iostream>
using namespace std;

class automobile
{
public:
    string brand;
    int year;
    int speed;

    void display()
    {
        cout << brand << endl;
        cout << year << endl;
    }

    void acceleration(int amount)
    {
        speed += amount;
    }

    int getSpeed()
    {
        return speed;
    }
};

int main()
{
    automobile t;

    t.brand = "Ferrari";
    t.year = 2019;
    t.speed = 250;

    t.display();
    t.acceleration(50);
    cout << t.getSpeed();
    return 0;
}
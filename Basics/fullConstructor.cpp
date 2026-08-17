#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    int speed;

public:
    Car(string b, int s)
    {
        brand = b;
        speed = s;
    }

    void accleration(int amount)
    {
        speed += amount;
    }
    void brake(int amount)
    {
        speed -= amount;
        if (speed < 0)
        {
            speed = 0;
        }
    }

    bool isFast()
    {
        return speed > 100;
    }
    void display()
    {
        cout << brand << endl;
        cout << speed << endl;
    }
};
int main()
{
    Car c("Lambo", 200);
    c.accleration(50);
    c.brake(100);

    c.display();

    return 0;
}
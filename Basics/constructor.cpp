#include <iostream>
using namespace std;
class Car
{
public:
    string brand;
    int speed;

    Car(string b, int s)
    {
        brand = b;
        speed = s;
    }

    void display()
    {
        cout << brand << " " << speed << endl;
    }
};
int main()
{
    Car c("Toyota", 200);
    c.display();
    return 0;
}
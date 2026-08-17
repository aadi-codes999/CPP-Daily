#include <iostream>
using namespace std;
class car
{
private:
    string brand;
    int year;

public:
    string b;
    int y;

    void display(string b, int y)
    {
        brand = b;
        year = y;
        cout << brand << endl;
        cout << year << endl;
    }
};
int main()
{
    car t;
    t.display("Toyota", 2026);

    return 0;
}
#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    int modelNo;

    void display()
    {
        cout << brand << endl;
        cout << modelNo << endl;
    }
};
int main()
{
    car t;
    t.brand = "toyota";
    t.modelNo = 2020;

    t.display();
    return 0;
}
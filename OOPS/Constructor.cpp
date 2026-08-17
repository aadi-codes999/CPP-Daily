#include <iostream>
using namespace std;

class bike
{
private:
    string company;
    int year;

public:
    bike(string c, int y)
    {
        company = c;
        year = y;
    }
    void display()
    {
        cout << company << endl
             << year;
    }
};

int main()
{
    bike b("Honda", 2023);
    b.display();
    return 0;
}
#include <iostream>
using namespace std;
class square
{
    // default private when uninitialized
    int x;
    int y;

public:
    int area(int);
    int area(int, int);
};
int square ::area(int a)
{
    x = a;
    return x * x;
}
int square ::area(int a, int b)
{
    x = a;
    y = b;
    return x * y;
}
int main()
{
    square sqr;
    // cout << "Area of square is " << sqr.area(4) << "\n";
    cout << sqr.area(3, 4);

    return 0;
}
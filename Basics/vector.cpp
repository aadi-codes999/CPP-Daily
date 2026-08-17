#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec = {1, 2, 3};
    // cout << vec[0];

    vector<int> vec;

    cout << "size = " << vec.size() << endl;
    cout << "vector capacity before = " << vec.capacity() << endl;

    vec.push_back(25);
    vec.push_back(30);
    cout << "vector capacity after second push = " << vec.capacity() << endl;

    vec.push_back(35);
    cout << "size after 3rd push back = " << vec.size() << endl;
    cout << "vector capacity now = " << vec.capacity() << endl;

    return 0;
}
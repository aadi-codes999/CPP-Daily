#include <iostream>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the food #" << i + 1 << "You like: ";
        getline(cin, foods[i]);
    }
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Food #" << i + 11 << " is: " << foods[i] << "\n";
    }

    return 0;
}
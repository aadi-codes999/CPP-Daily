# include <iostream>
using namespace std;
class Addition{
    int a, b;
    public:
    Addition(int, int);

    ~Addition();
    
    int add(){
        return (a + b);
    }
};
Addition::Addition(int x, int y){
    a = x;
    b = y;
}
int main()
{
    


    return 0;
}
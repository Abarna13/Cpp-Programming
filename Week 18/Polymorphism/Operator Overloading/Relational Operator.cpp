#include<iostream>
using namespace std;
class Relational
{
    private:
    int number1;
    public:
    Relational(int num1=0)
    {
        number1=num1;
    }
    
    Relational operator < (Relational c)                  
    {
        cout<<"First value is less that second value"<<endl;
    }
};
int main()
{
    Relational c1(8);
    Relational c2(15);
    Relational c3= c1<c2;
    return 0;
}



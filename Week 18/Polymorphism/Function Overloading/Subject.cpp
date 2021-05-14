#include <iostream>
using namespace std;
class Faculty
{
    public:
    string subject1, subject2, subject3;
    void Handling(string subject1)
    {
        cout<<"Subject name is : "<<subject1<<endl;
    }
    void Handling(string subject1,string subject2, string subject3)
    {
        cout<<"Subject names are : "<<subject1<<" "<<subject2<<" "<<subject3<<endl;
    }
    void Handling(string subject1, string subject2)
    {
        cout<<"Subject names are : "<<subject1<<" "<<subject2<<endl;
    }
};
int main()
{
    Faculty obj;
    obj.Handling("C programming");
    obj.Handling("C programming", "C++ programming");
    obj.Handling("C programming","C++ programming","Java programming");
    return 0;
}



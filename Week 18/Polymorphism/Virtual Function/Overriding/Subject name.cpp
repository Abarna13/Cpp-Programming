#include <iostream>
using namespace std;
class Faculty
{
    public:
    string subject1;
    void Handling(string subject1)
    {
        cout<<"Subject name in base class is : "<<subject1<<endl;
    }
};
class SeniorFaculty: public Faculty
{
    public:
    string subject2;
    void Handling(string sub2)
    {
        subject2=sub2;
        Faculty::Handling(subject2);
        cout<<"Subject name in derived class is : "<<subject2<<endl;
    }
};
int main()
{
    SeniorFaculty obj;
    obj.Handling("C programming");
    return 0;
}


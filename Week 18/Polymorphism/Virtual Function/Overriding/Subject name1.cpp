//CREATING REFERENCE FOR BASE CLASS POINTING TO OBJECT OF CHILD CLASS 

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
        cout<<"Subject name in derived class is : "<<subject2<<endl;
    }
};
int main()
{
    Faculty *obj= new SeniorFaculty;
    obj->Handling("C programming");
    return 0;
}


     

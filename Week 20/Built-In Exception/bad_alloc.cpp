#include <iostream>
using namespace std;
int main()
{
   try
   {
       int* arr=new int[1000000000];
   }
   catch(bad_alloc ba)
   {
       cout<<"Bad allocation: "<<ba.what()<<endl;
   }
    return 0;
}


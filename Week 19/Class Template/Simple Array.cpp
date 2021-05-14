#include<iostream>
using namespace std;
template <class T>
class ArrayEg
{
  public:
  ArrayEg()
  {
  int i;
  T arr[5];
  for(i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  for(i=0;i<5;i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  }
};
int main()
{
    cout<<"Enter characters"<<endl;
    ArrayEg<char> obj1;
    cout<<"Enter integer numbers"<<endl;
    ArrayEg<int> obj2;
    cout<<"Enter float numbers"<<endl;
    ArrayEg<float> obj3;
    return 0;
}





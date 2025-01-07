#include <iostream>
using namespace std;
class A
{
  public:
  A()
  {
      cout<<"constructor of A"<<endl;
  }
  int roll=123;
};
class B:virtual public A
{
   public:
   B()
   {
       cout<<"constructor of B"<<endl;
   }
};
class C:virtual public A
{
    public:
    C()
    {
        cout<<"constructor of C"<<endl;
    }
};
class D:public B,public C
{
    public:
    D()
    {
        cout<<"constructor of D"<<endl;
    }
};
int main()
{
    D obj;
    cout<<obj.roll;
}
#include<iostream>
using namespace std;
class base
{
    public:
      void display()
      {
          cout<<"This is display of base"<<endl;
      }
};
class derived : public base
{
public:
     void display()
     {
         cout<<"This is display of derived"<<endl;
     }
};

int main()
{
    base *r;
    r = new derived();
    r->base::display(); 
  //  r->derived::display();
}
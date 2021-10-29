 #include<iostream>
 using namespace std;
class complex
{
    private: 
       int real;
       int img;
    public:
       complex(int r=0, int i=0)
       {
           real = r;
           img = i;
       }
       void display()
       {
           cout<<real<<"+i"<<img<<endl;
       } 

       complex operator+(complex z)
       {
           complex temp;
           temp.real = real + z.real;
           temp.img = img + z.img;
           return temp;
       }
};

int main()
{
    complex c1(7,10),c2(8,12),c3;
    c3 = c1 + c2;
    c3.display();
}
/////////////////////////////////////
// class Complex
// {
// private:
//  int real;
//  int img;
// public:
//  Complex(int r=0,int i=0)
//  {
//  real=r;
//  img=i;
//  }
//  void display()
//  {
//  cout<<real<<"+i"<<img<<endl;
//  }
//  Complex operator+(Complex c)
//  {
//  Complex temp;
//  temp.real=real+c.real;
//  temp.img=img+c.img;
//  return temp;
//  }
//  };
// int main()
// {
//  Complex c1(5,3),c2(10,5),c3;

//  c3=c1+c2;

//  c3.display();
// }
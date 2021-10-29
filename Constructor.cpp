#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle()
        {
            length = 0;
            breadth = 0;
        }
        Rectangle(int l=0, int b=0)
        {
            setlengthbreadth(l,b);
        }
        Rectangle(Rectangle &R1)
        {
            setlengthbreadth(R1.length, R1.breadth);
        }
        void setlengthbreadth(int l, int b)
        {
            length = l;
            breadth = b; 
        }
        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return 2*length + 2*breadth;
        }

};

int main()
{
    Rectangle R1(6,5);
    Rectangle R2(R1);
    cout<<R2.area();
    return 0;
}
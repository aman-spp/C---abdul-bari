#include<iostream>
using namespace std;
class Rectangle
{
    private: 
    int length;
    int breadth;
    public:
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
    Rectangle R1;
    Rectangle *R2 = new Rectangle;
    R1.setlengthbreadth(10,8);
    R2->setlengthbreadth(12,10);
    cout <<"R2 : "<<R2->area()<<" "<<R2->perimeter()<<" "<<R1.area()<<endl;
    return 0;
}
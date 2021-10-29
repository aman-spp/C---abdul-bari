#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        int Roll_Number;
        string Name;
        int PhysicsMarks;
        int MathematicsMarks;
        int ChemistryMarks;
    public:
        student(int r, string n, int m, int p, int c)
        {
            Roll_Number = r;
            Name = n;
            PhysicsMarks = m;
            MathematicsMarks = p;
            ChemistryMarks = c;
        }
        int total()
        {
            return PhysicsMarks + MathematicsMarks + ChemistryMarks;
        }
        char Grade()
        {
            float average = total()/3;
            if(average >= 60)
              return 'A';
            else if(average>=40 && average<60)
              return 'B';
            else
              return 'C';

        }
};

int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll Number of a Student: ";
    cin>>roll;
    cout<<"Enter Name of a Student: ";
    cin>>name;
    cout<<"Enter marks of three subjects respectively";
    cin>>p>>m>>c;
    student s(roll, name, p, m, c);
    cout<<"Total marks : "<<s.total()<<endl;
    cout<<"Grade : "<<s.Grade()<<endl;
}
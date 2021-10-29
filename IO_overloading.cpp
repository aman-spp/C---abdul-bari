#include<iostream>
using namespace std;
class Rational
{
    private:
      int P;
      int Q;
    public:
      Rational()
      {
          P = 1;
          Q = 1;
      }
      Rational(int P, int Q)
      {
          this->P = P;
          this->Q = Q;
      }
      Rational(Rational &r)
      {
          this->P = r.P;
          this->Q = r.Q;
      }
      int getP()
      {
          return P;
      }
      int getQ()
      {
          return Q;
      }
      void setP(int P)
      {
          this->P = P;
      }
      void setQ(int Q)
      {
          this->Q = Q;
      }
      Rational operator+(Rational r)
      {
          Rational t;
          t.P = this->P*r.Q + this->Q*r.P;
          t.Q = this->Q*r.Q;
          return t;
      }
      friend ostream & operator<<(ostream &os, Rational &r);

};

ostream & operator<<(ostream &os, Rational &r)
{
    os<<r.P<<"/"<<r.Q;
    return os;
}
int main()
{
    Rational r1(3,4), r2(4,5), r3;
    r3 = r1 + r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
}
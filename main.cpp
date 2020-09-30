#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
public:
 // pure virtual function providing interface framework.
 virtual float getArea() = 0;
 void setPIE(float PI)
 {
 pi = PI;
 }
 void setRADIUS(float rad)
 {
 radius = rad;
 }
protected:
 float pi;
 float radius;
};
class Circle: public Shape
{
public:
 float getArea()
 {
 return pow(pi*radius,2);
 }
};
int main(void)
{
 Circle Cir;

 Cir.setPIE(3.1415926);
 Cir.setRADIUS(10);
 // Print the area of the object.
 cout << "Total Circle area: " << Cir.getArea() << endl;
 return 0;
}

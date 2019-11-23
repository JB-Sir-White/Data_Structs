// Javier Blanco																							Date: 07/22/2019

// Example 1

#include <iostream>

using namespace std;

class circle
{
private:    double r;

public:       void setRadius(double); // made into a void function that works as a setter :: setting r as radius
			   double area();
			   double circumference();
};
//==================== Set values for dimentions ==============
void circle::setRadius(double rad)
{
	r = rad;
}
//====================  Find Area ==============
double circle::area()
{
	return (r * r * 3.14159);
}
//========================= Circumferance ==========================
double circle::circumference()
{
	return (2 * r * 3.14159);
}

//========================= Main Programs ==========================//

int main()
{
	double radius;
	circle circle1, circle2;

	cout << "Input radius of 1st circle: " << endl;
	cin >> radius;
	circle1.setRadius(radius);

	cout << "Input radius of 2nd circle: " << endl;
	cin >> radius;
	circle2.setRadius(radius);

	cout << " 1ST Circle info: " << endl;
	cout << "radius" << endl;
	cout << "Area          :   ====> " << circle1.area() <<endl;
	cout << "Circumference :   ====> " << circle1.circumference() << endl;
	cout << " 2nd Circle info: " << endl;
	cout << "radius" << endl;
	cout << "Area          :   ====> " << circle2.area() << endl;
	cout << "Circumference :   ====> " << circle2.circumference() << endl;

	system("pause");
	return 0;
}

/*  Debug::
 created a void function in class public to set radius of circle.
 renamed function to setRadius so that its function will be easier to understand.
 declaired circle objects circle1 and circle2 with no (), to fix syntax error with class Encapsulation
 fixed all cout statment so that it would display to consol correctly.
 */
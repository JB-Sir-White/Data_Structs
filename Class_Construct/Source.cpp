// Example 1

#include <iostream>

using namespace std;

class Rectangle
{
private:	int l, w;

public:		
	Rectangle()
	{
		l = 0;
		w = 0;
	}
	Rectangle(int, int);
			int area();
			

};


//==================== Set values for dimentions ==============
Rectangle::Rectangle(int a, int b)
{
	l = a;
	w = b;
}
//====================  Find Area ==============
int Rectangle::area()
{
	return l * w;
}

//========================= Main Programs =======

int main()
{
	int length, width;

	cout << "Input lenght of this box: " << endl;
	cin >> length;

	cout << "Input width of this box: " << endl;
	cin >> width;

	Rectangle Rectbox1(length, width);


	cout << "Input lenght of this box: " << endl;
	cin >> length;

	cout << "Input width of this box: " << endl;
	cin >> width;

	Rectangle Rectbox2(length, width);

	cout << "Area of this box is ====> " << Rectbox1.area() << endl;
	cout << "Area of this box is ====> " << Rectbox2.area() << endl;
	
	Rectangle Rectbox3();

	cout << "Area of this box is ====> " << Rectbox1.area() << endl;
	cout << "Area of this box is ====> " << Rectbox2.area() << endl;


	system("pause");
	return 0;
}

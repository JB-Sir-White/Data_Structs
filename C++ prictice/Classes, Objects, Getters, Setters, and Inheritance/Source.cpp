// Javier Blanco

#include <iostream>
using namespace std;

class Book {
private:
	string title;
	string author;
	int pages;
public: 
	Book() {
		title = "unknow title";
		author = "unkonw author";
		pages = 0;
	}
	
	Book(string aTitle, string aAuthor) {
		title = aTitle;
		author = aAuthor;
		pages = 0;
	}
	
	Book(string aTitle, string aAuthor, int aPages) {
		title = aTitle;
		author = aAuthor;
		pages = aPages;
		
	}
};

class Student {
private:
	string name;
	string major;
	string greadeLevel;
	int gpa;
	int numberOfCreditHours;
public:
	Student(string nameOfStudent, string studentGradeLevel, int studentGPA);
	
	Student(string nameOfStudent, string nameOfMajor, string studentGreadeLevel,int studentGPA){
		name = nameOfStudent;
		major = nameOfMajor;
		greadeLevel = studentGreadeLevel;
		gpa = studentGPA;
	}
};

Student::Student(string nameOfStudent, string studentGradeLevel, int studentGPA)
{
	name = nameOfStudent;
	major = "undeclare";
	greadeLevel = studentGradeLevel;
	gpa = studentGPA;
}

int main()
{
	Book book1("Lord of The Rings", "Tolkein", 700 );
	Book boo2();
	return 0;
}
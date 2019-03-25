#include<string>
#include <iostream>
using namespace std;
class Date{
int day;
int month;
int year;
bool check(int ,int ,int);

public:
static string monthNames[13];
	Date();//default constructor
	Date(int,int,int);//parametrized constructor

	friend ostream& operator<<( ostream &,const Date &);//cout operator for class
	bool operator==(const Date &);//retrun true for equal dates
	friend istream & operator>>(istream &,Date &);//input for class operator
	friend Date  operator +(Date &,int );
	Date operator =(Date &);
	Date operator --(int u);
	Date &operator--();
	int &operator[](int u);

};

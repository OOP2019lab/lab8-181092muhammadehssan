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
	Date();
	Date(int,int,int);

	friend ostream& operator<<( ostream &,const Date &);
	bool operator==(const Date &);
	friend istream & operator>>(istream &,Date &);
	friend Date  operator +(Date &,int );
	Date operator =(Date &);
	Date operator --(int u);
	Date &operator--();
	int &operator[](int u);

};

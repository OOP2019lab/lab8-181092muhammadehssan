#include<iostream>
#include"Date.h"
#include<string>
using namespace std;
static string  monthNames[] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"} ;
bool Date::check(int a,int b,int c)
{
	if(a<=12&&b<=31&&c<=9999 && c>=1000)
	{
		return true;
	}
	else
	return false;
}
Date::Date()
{
	day=1;
	month=1;
	year=2000;
}
Date::Date(int a, int b,int c)
{
	bool flag=0;
	flag=check(a,b,c);
	if(flag==1)
	{	day=b;
		month=a;
		year=c;
	}
	else
	{
		day=1;
		month=1;
		year=2000;
		cout<<"NOt Possible "<<endl;
	}
}

ostream &operator<<(ostream &out,const  Date& b)
{
	out<<endl;
	out<<monthNames[b.month];
		out<<b.day<<",";
	    out<<b.year;
		out<<endl;
		return out;
	

}
bool Date::operator ==(const Date &a)
{
	if(this->day==a.day &&this->month==a.month&&this->year==a.year)
		return true;
	else
		return false;
}
istream &operator>>(istream &in,  Date& b)
{
	bool flag=0;
	int a,ba,c;
	cout<<endl;
	cout<<"Enter day : "; 
	in>>a;
	cout<<"Enter month : ";
	in>>ba;
	cout<<"Enter year : ";
	in>>c;
	flag=b.check(a,ba,c);
	if(flag==1)
	{
		b.day=a;
		b.month=ba;
		b.year=c;
		
	}
	
	return in;

}
Date operator+(Date &a,int b)
{
	int x,y,z;
	cout<<endl;
	Date dummy;
	x=a.day+b;
	y=a.month;
	z=a.year;
	if(x%30==1)
	{
		dummy.day=x%30;
		y=y+1;
		if(13/13==1)
		dummy.month=1;
		else
			dummy.month=y;
		if(y>12)
		{
			dummy.year=z+1;
		}
	}
	else
{
	dummy.day=a.day+b;
	dummy.month=a.month;
	dummy.year=a.year;
}

	return dummy;
}
Date Date:: operator =(Date & a)
{
	this->day=a.day;
	this->month=a.month;
	this->year=a.year;
	return *this;
}
Date Date::operator--(int u)
{
	Date dummy=*this;
	int x=0;
	this->day=this->day-1;
	if(this->day==0)
	{
		this->day=30-day;
		x=this->month;
		this->month=this->month-1;
		if(this->month==0)
		{
			this->month=12;
			this->year=this->year-1;
		}
		
	}
	else
		this->day=this->day-1;
	return dummy;
}
Date &Date:: operator --()
{
	
	int x=0;
	this->day=this->day-1;
	if(this->day==0)
	{
		this->day=30-day;
		x=this->month;
		this->month=this->month-1;
		if(this->month==0)
		{
			this->month=12;
			this->year=this->year-1;
		}
		
	}
	else
		this->day=this->day-1;
	return *this;
	
}
int &Date:: operator [](int u)
{
	if(int u=0)
		return this->day;
		if(int u=1)
		return this->month;
			if(int u=2)
		return this->year;

}



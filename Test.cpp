#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class date2019
{
private:
	int d, m;
public:
	date2019();
	date2019(int dd);
	date2019(int dd, int mm);
	void setdate(int dd, int mm);
	void print();
	void plusday(int days);
};
//Default constructor
date2019::date2019()
{
	d = 1;
	m = 1;
}
//constructor to convert given numer of days to date and month of the year
date2019::date2019(int dd)
{
	if (dd >= 0 && dd < 32)
	{
		m = 1;
		d = dd;
	}
	else if (dd >= 32 && dd < 60)
	{
		m = 2;
		d = dd - 31;
	}
	else if (dd >= 60 && dd < 91)
	{
		m = 3;
		d = dd - 59;
	}
	else if (dd >= 91 && dd < 121)
	{
		m = 4;
		d = dd - 90;
	}
	else if (dd >= 121 && dd < 152)
	{
		m = 5;
		d = dd - 120;
	}
	else if (dd >= 152 && dd < 182)
	{
		m = 6;
		d = dd - 151;
	}
	else if (dd >= 182 && dd < 213)
	{
		m = 7;
		d = dd - 181;
	}
	else if (dd >= 213 && dd < 244)
	{
		m = 8;
		d = dd - 212;
	}
	else if (dd >= 244 && dd < 275)
	{
		m = 9;
		d = dd - 243;
	}
	else if (dd >= 275 && dd < 305)
	{
		m = 10;
		d = dd - 274;
	}
	else if (dd >= 305 && dd < 335)
	{
		m = 11;
		d = dd - 304;
	}
	else if (dd >= 335 && dd < 366)
	{
		m = 12;
		d = dd - 334;
	}
	else
	{
		cout << "The day is not in the year 2019" ;
	}
}
date2019::date2019(int dd, int mm)
{
	if (mm > 0 && mm <= 12)
	{
		m = mm;
	}
	else
	{
		cout << "error! invalid month"<<endl ;
	}
	if (mm == 1 || mm == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		if (dd > 0 && dd < 32)
			d = dd;
		else
		{
			cout << " error! invalid date "<<endl ;
		}
	}
	else if (mm == 2)
	{
		if (dd < 29)
			d = dd;
		else
		{
			cout << " error! invalid date "<<endl ;
		}
	}
	else if (mm == 4 || m == 6 || m == 9 || m == 11)
	{
		if (dd < 31)
			d = dd;
		else
		{
			cout << " error! invalid date "<<endl ;
		}
	}
}
void date2019::setdate(int dd, int mm)
{
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
	{
		if (dd > 0 && dd < 31)
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << " error! invalid date "<<endl ;
		}
	}
	else if (mm == 2)
	{
		if (dd < 29)
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << " error! invalid date "<<endl ;
		}
	}
	else if (mm == 4 || m == 6 || m == 9 || m == 11)
	{
		if (dd < 31)
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << " error! invalid date "<<endl;
		}
	}
}
void date2019::print()
{
	int x, week_day;
	string month, day;
	if (m == 1)
	{
		x = d;
		month = "January";
	}
	else if (m == 2)
	{
		x = 31 + d;
		month = "February";
	}
	else if (m == 3)
	{
		x = 59 + d;
		month = "March";
	}
	else if (m == 4)
	{
		x = 90 + d;
		month = "April";
	}
	else if (m == 5)
	{
		x = 120 + d;
		month = "May";
	}
	else if (m == 6)
	{
		x = 151 + d;
		month = "June";
	}
	else if (m == 7)
	{
		x = 181 + d;
		month = "July";
	}
	else if (m == 8)
	{
		x = 212 + d;
		month = "August";
	}
	else if (m == 9)
	{
		x = 243 + d;
		month = "September";
	}
	else if (m == 10)
	{
		x = 274 + d;
		month = "October";
	}
	else if (m == 11)
	{
		x = 304 + d;
		month = "November";
	}
	else if (m == 12)
	{
		x = 334 + d;
		month = "December";
	}
	week_day = (2 + x - 1) % 7;
	if (week_day == 0)
	{
		day = "Sunday";
	}
	else if (week_day == 1)
	{
		day = "Monday";
	}
	else if (week_day == 2)
	{
		day = "Tuesday";
	}
	else if (week_day == 3)
	{
		day = "Wednesday";
	}
	else if (week_day == 4)
	{
		day = "Thursday";
	}
	else if (week_day ==5)
	{
		day = "Friday";
	}
	else if (week_day == 6)
	{
		day = "Saturday";
	}
 cout << day << " , " << month << " " << d << " , " << "2019" ;
}
void date2019::plusday(int days)
{ int dd;
	d = d + days;
	switch(m)


	{case 1:
	    {
         dd=d;
	     break;}
     case 2:
	     {
		 dd=31+d;
	     break;}
	case 3:
		 {
		 dd=59+d;
		 break;}
	case 4: 
	     {
		 dd=90+d; 
       	 break;}
    case 5:
        {
		 dd=120+d;
         break;}
	case 6: 
         {
		 dd=151+d;
         break;}
    case 7:
    	{
		 dd=181+d; 
    	 break;}
   	case 8:
   		{
		 dd=212+d;
   		 break;}
   	case 9:
   		{
		 dd=243+d;
   		 break;}
   	case 10:
   		{
		 dd=274+d;
   		 break;}
   	case 11:
   		{
	 	 dd=304+d;
   		 break;}
    case 12:
       {
	     dd=334+d;
         break;}
    }
    	if (dd >= 0 && dd < 32)
	{
		m = 1;
		d = dd;
	}
	else if (dd >= 32 && dd < 60)
	{
		m = 2;
		d = dd - 31;
	}
	else if (dd >= 60 && dd < 91)
	{
		m = 3;
		d = dd - 59;
	}
	else if (dd >= 91 && dd < 121)
	{
		m = 4;
		d = dd - 90;
	}
	else if (dd >= 121 && dd < 152)
	{
		m = 5;
		d = dd - 120;
	}
	else if (dd >= 152 && dd < 182)
	{
		m = 6;
		d = dd - 151;
	}
	else if (dd >= 182 && dd < 213)
	{
		m = 7;
		d = dd - 181;
	}
	else if (dd >= 213 && dd < 244)
	{
		m = 8;
		d = dd - 212;
	}
	else if (dd >= 244 && dd < 275)
	{
		m = 9;
		d = dd - 243;
	}
	else if (dd >= 275 && dd < 305)
	{
		m = 10;
		d = dd - 274;
	}
	else if (dd >= 305 && dd < 335)
	{
		m = 11;
		d = dd - 304;
	}
	else if (dd >= 335 && dd < 366)
	{
		m = 12;
		d = dd - 334;
	}
	else
	{
		cout << "The day is not in the year 2019" ;
	}
}
int main() {
	ifstream input;

	int day, month, plusday;
	date2019  d2;
	input.open("date");
	if (input.is_open()) {
		while (!input.eof()) {
			input >> month >> day >> plusday;
			d2.setdate(day, month);
			d2.plusday(plusday);
			d2.print();
			cout<<endl;
		}
	}
	cout << endl;
	return 0;
}


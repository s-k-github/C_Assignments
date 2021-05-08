/*creat a class Date with data members as dd,mm,yy. Write getters and setters for all the data members.
 Also add the display function. Create default and parameterized constructor. 
 create the object of this class in main method and invoke all the methods all the methods in that class. */
#include<iostream>
#include<stdio.h>
using namespace std;
class date
{
	int d,m,y;
	public:
		date()
		{
			this-> d=0;
			this-> m=0;
			this-> y=0;

		}
	 	date(int d,int m,int y)
	 	{
	 		this->d=d;
	 		this->m=m;
	 		this->y=y;
		}
	
	void setd(int d)
	{
		this-> d=d;
	}
		
	void setm(int m)
	{
		this-> m=m;
	}
	
	void sety(int y)
	{
		this-> y=y;
	}
	
	int getd()
	{
		return d;
	}
	
	int getm()
	{
		return m;
	}
	
	int gety()
	{
		return y;
	}
	void display()
	{
		cout<<d<<"/"<< m<<"/"<< y<<endl;

	}
		
};
int main()
{
	date d1;
	d1.display();
	
	d1.setd(07);
	d1.getd();
	d1.setm(05);
	d1.getm();
	d1.sety(2021);
	d1.gety();
	d1.display();
	
	date d2(23,07,1997);
	d2.display();

	return 0;
}

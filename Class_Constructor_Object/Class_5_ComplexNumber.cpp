/*creat a class Compexnmber with data members as real,imaginary. Write getters and setters for all the data members.
 Also add the display function. Create default and parameterized constructor. 
 create the object of this class in main method and invoke all the methods all the methods in that class.*/
#include<iostream>
using namespace std;
class complex
{
	int real,imaginary;
	public:
		complex()
		{
			real,imaginary=0;
		}
		complex(int real,int imaginary)
		{
			this->real=real;
			this->imaginary=imaginary;
		}
		void setreal(int r)
		{
			this->real=r;
		}
			
		void setimaginary(int i)
		{
			this->imaginary=i;
		}
		
		int getreal()
		{
			return this->real;
		}
		
		int getimaginary()
		{
			return this->imaginary;
		}
		void display()
		{
			cout<<"REAL: "<<real<<"\nIMAGINARY: "<<imaginary<<endl;	
		}
};
int main()
{
	complex c1;
	cout<<"\nBefore assigning values externally(default):\n";
	c1.display();
	
	cout<<"\nAfter setting values externally(default):\n";
	c1.setreal(23);
	c1.setimaginary(7);
	c1.display();
	
	cout<<"\nAfter setting values externally(parameterized):\n";
	complex c2(7,23);
	c2.display();
	
	return 0;
}

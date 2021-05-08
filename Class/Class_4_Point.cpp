/*create class point with data members as x,y.Write getters and setters for all the data members.
 Also add the display function. Create default and parameterized constructor. 
 create the object of this class in main method and invoke all the methods all the methods in that class.*/
 #include<iostream>
 using namespace std;
 class point
 {
 	int x,y;
	public:
		point()
		{
			this->x=0;
			this->y=0;
		}
		point(int a,int b)
		{
			this-> x=a;
			this-> y=b;
		}
		void setx(int a)
		{
			this->x=a;
		}
		void sety(int b)
		{
			this->y=b;
		}
		int getx()
		{
			return this-> x;
		}
		int gety()
		{
			return this-> y;
		}
		void display()
		{
			cout<<x<<"."<<y<<endl;	
		}
 };
 
 int main()
 {
 	point p;
 	p.display();
 	
	p.setx(23);
	p.getx();
	p.sety(7);
	p.gety();
	p.display();
	
	point p2(7,23);
	p2.display();
	
 	return 0;
 }

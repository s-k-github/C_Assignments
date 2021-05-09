/*Creat a class person with data members as name,age,city.Write getters and setters for all the data members.
 Also add the display function. Create default and parameterized constructor. 
 creat the object of this class in main method and invoke all the methods all the methods in that class.*/
 #include<string.h>
 #include<iostream>
using namespace std;
 class person
 {
 	int age;
	string name, city;

	public: 
	person()
 	{
 		age=20;
 		name="Supriya default";
 		city="Mumbai default";		

	}
	person(int age,string name,string city)
 	{
 		this->age=age;
 		this->name=name;
 		this->city=city;
	}
	void setAge(int age)
 	{
 		this->age=age;
 	}
 	void setName(string name)
 	{
 	 this->name=name;
 	}
 	
 	void setCity(string city)
 	{
 	 this->city=city;
 	 cout<<city;
 	}

 	int getAge()
 	{
 		return age;
	}
	string getName()
	{
		return name;
	}	 
	string getCity()
	{
		return city;
	}
	//method to display values belonging to certain object
 	void display()
 	{
		cout<<"DISPLAY:- \nNAME: "<<name<<"\nAGE:  "<<age<<"\nCITY: "<<city<<endl;
	}
	
 };

 int main()
 {
 	person p1;
 	cout<<"\nBefore assigning values externally(default):\n";
 	p1.display();
	cout<<"\nDEFAULT:-\nNAME: "<<p1.getName()<<"\nAGE:  "<<p1.getAge()<<"\nCITY: "<<p1.getCity()<<endl;	
	
	cout<<"\nAfter setting values externally(default):\n";
 	p1.setName("Sejal set");
 	p1.getName();
 	p1.setCity("Mumbai Set");
 	p1.getCity();
 	p1.setAge(23);
 	p1.getAge();
 	p1.display();

	cout<<"\nAfter setting values externally(parameterized):\n";
	person p2(23,"Supriya","Mumbai");
	p2.display();
 	//print values from parameterized constrctor
	cout<<"\nPARAMETERIZED:-\nNAME: "<<p2.getName()<<"\nAGE:  "<<p2.getAge()<<"\nCITY: "<<p2.getCity()<<endl;	
	//print values of parameterized constrctor's object
	
	
	
	
	return 0;
 }


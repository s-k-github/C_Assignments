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
		cout<<"name: "<<name<<"\nage:  "<<age<<"\nlocation: "<<city<<endl;
	}
	
 };

 int main()
 {
 	person p1;
 	p1.display();
	
 	p1.setName("Sejal set");
 	p1.getName();
 	p1.setCity("Mumbai Set");
 	p1.getCity();
 	p1.setAge(23);
 	p1.getAge();
 	p1.display();

	person p2(23,"Supriya","Mumbai");
	p2.display();
 	
	
	
	
	return 0;
 }


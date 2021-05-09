/*create a class book with data members as bname,id,author,price.Write getters and setters for all the data members.
 Also add the display function. Create default and parameterized constructor. 
 create the object of this class in main method and invoke all the methods all the methods in that class. */
 #include<stdio.h>
 #include<iostream>
 #include<string.h>
 using namespace std;
 class book
 {
 	string bname,author;
 	int id,price;
 	
 	public:
 		book()	
 		{
 			this->id=0;
			this->price=0;
			this->bname="NONE";
			this->author="NONE";
		}
		
		book(string name,string author,int idnumber,int cost)
		{

			this->id=idnumber;
			this->price=cost;
			this->bname=name;
			this->author=author;
		}
	 	void setname(string name)
	 	{
	 		this->bname=name;
		}
		void setauthor(string author)
		{
			this->author=author;
		}
		void setid(int idnumber)
		{
			this->id=idnumber;
		}
		void setprice(int cost)
		{
			this->price=cost;
		}
		int getid()
		{
			return this->id;
		}
		int getprice()
		{
			return this->price;
		}
		string getname()
		{
			return this->bname;
		}
		string getauthor()
		{
			return this->author;
		}
		void display()
		{
			cout<<"BOOK NAME: "<<bname<<"\nAUTHOR: "<<author<<"\nID: "<<id<<"\nPRICE: "<<price<<endl;	
		}
 };
 
 int main()
 {
 	book b;
 	cout<<"\nBefore assigning values externally(default):\n";
 	b.display();
 	
 	cout<<"\nAfter setting values externally(default):\n";
 	b.setname("Let us C");
 	b.getname();
 	b.setauthor("Yashvant Kanetkar");
 	b.getauthor();
 	b.setid(101);
 	b.getid();
 	b.setprice(500);
 	b.getprice();
 	b.display();
 	
 	cout<<"\nAfter setting values externally(parameterized):\n";
 	book b2("C","Supriya",230797,500);
 	b2.display();
 	return 0;
 }

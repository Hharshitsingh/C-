#include <iostream>
using namespace std;
struct book
{
	private: 
	int id;
	char title[30];
	float price;
	public:
	void input()
	{
		cout<<"Enter book id title and price of price: ";
		cin>>id>>title>>price;
	}	
	void display()
	{
		cout<<"Book ID: "<<id<<endl<<"BOOK TITLE: "<<title<<endl<<"Price: "<<price<<endl;
	}
};
int main()
{
	book b1;
	b1.input();
	b1.display();
}

#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	
	public:
		void getdata(void);
		void displaydata(void);
};
void person::getdata(void)
{
	cout<<"Enter your name ";
	cin>>name;
	cout<<"Enter your age ";
	cin>>age;
}
void person::displaydata(void)
{
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
}
int main()
{
	person Zoya;
	Zoya.getdata();
	Zoya.displaydata();
	return 0;
	
}

#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		void fun()
		{
			cout<<"\nInside Base fun";
		}
		
		void gun()
		{
			cout<<"\nInside Base gun";
		}
};

class Derived : public Base
{
	public:
		int i,j;
		
		void fun()
		{
			cout<<"\nInside Derived fun";
		}
		
		void sun()
		{
			cout<<"\nInside Derived gun";
		}
};

int main()
{
	Base *bp=new Derived();                                //Upcasting
	//Derived *dp=new Base();                                //Downcasting
	bp->fun();
	bp->gun();
	
	cout<<"\nSize of Base:"<<sizeof(Base);
	cout<<"\nSize of Derived:"<<sizeof(Derived);
	
	return 0;
}
#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		virtual void fun()
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
			cout<<"\nInside Derived sun";
		}
};
int main()
{
	Base *bp=new Derived();                     //upcasting
	bp->fun();
	bp->gun();
	//bp->sun();                                Not Allowed
	return 0;
}
#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
};

class Derived : public Base
{
	public:
		int i,j;
};
int main()
{	
	Base *bp=new Base();                  //dynamic memory
	Derived *dp=new Derived();
	
	Base *bp1=new Derived();              //Upcasting
	//Derived dp1=new Base();              //Downcasting        not allowed
	
	return 0;
}
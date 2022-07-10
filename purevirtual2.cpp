#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		void fun()   //1000                           //concrete non vitual
		{
			cout<<"\nInside Base fun";
		}
		
		virtual void gun()    //2000                  //concrete virtual
		{
			cout<<"\nInside Base gun";
		}
		virtual void sun()     //3000                   //concrete virtual
		{
			cout<<"\nInside Base sun";
		}
		
		virtual void run()=0;                           //abstract function
};

class Derived : public Base
{
	public:
		int i,j;
		
		void fun()         //4000                            redefination  (concrete) function
		{
			cout<<"\nInside Derived fun";
		}
		
		virtual void gun()   //5000                           overriding
		{
			cout<<"\nInside Derived gun";
		}
		void run()              //6000                        concrete function
		{
			cout<<"\nInside Derived run";
		}
};
int main()
{
	//Base bobj;          Not Allowed
	Derived dobj;         //Allowed
	
	Base *bp=NULL;
	bp=&dobj;              //upcasting
	
	bp->fun();             //Base fun
	bp->gun();             //Derived gun
	bp->sun();             //Base sun
	bp->run();             //Derived run
	
	return 0;
}
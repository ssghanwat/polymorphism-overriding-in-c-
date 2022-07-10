#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		virtual void fun()      //1000
		{
			cout<<"\nInside Base fun";
		}
		
		virtual void gun()    //2000
		{
			cout<<"\nInside Base gun";
		}
				
	    void sun()           //3000
		{
			cout<<"\nInside Base sun";
		}
		
		virtual void run()   //4000
		{
			cout<<"\nInside Base run";
		}
		
};	

class Derived : public Base
{
	public:
		int i,j;
		
		void fun()     //5000
		{
			cout<<"\nInside Derived fun";
		}
		
		virtual void gun() //6000
		{
			cout<<"\nInside Derived gun";
		}
		
		void sun()             //7000
		{
		    cout<<"\nInside Derived sun";
		}
		virtual void mun()            //8000
		{
			cout<<"\nInside Derived mun";
		}
};
int main()
{
	Base *bp=new Derived();                     //upcasting
	bp->fun();            //Derived fun
	bp->gun();             //Derived gun
	bp->sun();             //Base sun
	bp->run();             //Base run
	//bp->mun();            Not Allowed
	return 0;
}
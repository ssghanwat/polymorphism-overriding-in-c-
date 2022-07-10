#include<stdio.h>
using namespace std;

class Demo
{
	public:
		int i,j;
		
		void fun()                      //Defination
		{
			cout<<"\nInside fun";
		}
		
		void fun(int no)                        //Defination
		{
			cout<<"\nInside gun";
		}
};

class Hello : public Demo
{
	public:
		int x,y;
		
		void sun()                            //Defination
		{
			cout<<"\nInside sun";
		}
		
		void gun()                               //redefination
		{
			cout<<"\nInside gun of child";
		}
};

int main()
{

	return 0;
}
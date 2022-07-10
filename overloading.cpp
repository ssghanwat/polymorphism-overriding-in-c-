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

int main()
{

	return 0;
}
#include<iostream>
using namespace std;
int count=0;
class alpha{
	public:
		alpha()
		{
			count++;
			cout<<"\nno of object"<<count;
			
		}
		~alpha(){
			cout<<"\nno of obj destroyed"<<count;
			count--;
		}
};
main()
{
	alpha A1,A2,A3,A4;
	{
		cout<<"\n\n enter block";
		alpha A5;
		
	}
	{
		cout<<"\n\n enter block2";
		alpha A6;
	}
	cout<<"\n\nend of constructor";
}

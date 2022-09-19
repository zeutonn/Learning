#include<iostream>
using namespace std;
class student
{
int roll;
int marks;

public:
	static int count;
	void change(int,int);
	static void getcount();
static void display();
};
int student::count=100;

void student:: change(int a,int b)
{
roll=a;
marks=b;
count=count+20;
cout<<count;
}
void student::getcount()
{
cout<<" My present value is:"<<count<<endl;
// display(); // invalid if display is defined as non static function
}
void student::display()
{
// cout<< " Present Roll is:"<<roll<< " and 
}
int main()
{

int val1,val2;
student s1,s2;
cin>>val1>>val2;
s1.change(val1,val2);
cin>>val1>>val2;
s2.change(val1,val2);
s2.getcount();
s2.display();
//student::display();
}

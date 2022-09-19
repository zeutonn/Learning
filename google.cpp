#include<iostream>
using namespace std;
class classroom{
	private:
		int c;//code
		string a;
		
		public:
			void display(void){
				cout<<"sub code""\t"<<c;
				cout<<"teacher""\t";
				cout<<a;
				
			}
			void name(void){
				cout<<"enter sub code""\t";
				cin>>c;
				cout<<"enter the name""\t";
				getline(cin,a);
			}
};
main()
{
	classroom e,f,g,h;
	e.name();
	f.name();
	e.display();
	
	f.display();
	
}

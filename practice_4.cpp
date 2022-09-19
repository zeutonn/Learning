  #include<iostream> 
using namespace std;
    class Student{
    	int roll;
    	int age;
    public:
		Student();//Default 
	/*	~Student()//Destructor 
		{
		cout<<"Destroyed";	
		}*/
		
	void display(){
		cout<<roll<<endl<<age<<endl;
	}	
		Student(int a,int b);// parameterized
		
	//	Student(int a=1,int b=2);//constructor with default argument
		Student(Student &x){
			roll=x.roll;
			age=x.age;
		}	
    };
  Student::Student() //default constructor
		{
		roll=1;
		age=20;	
		}
    //int a=4; 
Student::Student(int a,int b){
    	roll=a;
    	age=b;
    }
    //tilde  ~
    main(){
    	
    	Student s;//default
		 //memory allocation and function call // value initialization
    	s.display();
    Student s1(7,5);//implicit call
    	s1.display();
    	Student s2(78,50);//explicit call
    	s2.display();
    	Student s3(s2);
    	s3.display();
    }

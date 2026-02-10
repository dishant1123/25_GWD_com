/*
protected :  accessible from inside class and derived class
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    protected :
        string name="om"; 
        int age=19; 
};
class teacher : public student 
{
    public : 
        void  show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};

int main()
{
    teacher t1; 
    t1.show(); 
    return 0; 
}
*/ 

/*
constructor  : automatically called when object is created. 
1. no return type  
2. class name == constructor name 

type  : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading
*/

// ex :1 default constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"student default  constructor called"<<endl;
            cout<<"my name is  diya"<<endl;
        }
};
int main()
{
    student s1; 
    return 0; 
}
*/ 

// ex :2 non parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{
    //public :
    private : 
        string name; 
        int age; 
    public :
    student()
    {
        name = "nishitpatel";
        age =19;
        cout<<"student  non  parameterized  constructor called"<<endl;
    }
    void  show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
int main()
{
    student s1;  // cout << s1.name <<endl ; 
    s1.show();
    
    // cout<<"my name is : "<<s1.name<<endl;

    return 0; 
}
*/

// ex :3  parameterized constructor

#include <iostream>
using namespace std;
class student 
{
    //public :
    private :  
        string name ;  
        int age; 
    public : 
    student(string  n , int a )
    {
        name =n; 
        age=a; 
    }
    void  show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
int main()
{
    student s1("sahil",21);
    s1.show();
    
    return 0; 

}
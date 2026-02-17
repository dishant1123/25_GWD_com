/*
3. copy constructor  :  a copy constructor is a special type of constructor that creates a new object by copying the values of an existing object.

class name (const classname &obj)
*/
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        string name ;
        int age; 

    public : 
        student(string n, int  a)
        {
            name =n; 
            age =a; 
        }
        student(const student &obj) 
        {
            name=obj.name; 
            age = obj.age;
        }
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};

int main()
{
    student s1("diya",19); 

    student s2 =s1; 

    s2.show(); 
    return 0; 
}
*/

// 4 .constructor   overloading  : 
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        string name ;
        int  age; 
    public: 
        student()
        {
            name ="unknown";
            age =0 ;
        }
        student(string n, int  a)
        {
            name =n; 
            age =a; 
        }
        student(string n)
        {
            name =n; 
            age =19; 
        }
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};

int main()
{
    student s1; 
    student s2("diya"); 
    student s3("diya",20);

    s1.show();
    s2.show();
    s3.show();

    return 0; 
}
*/

//  inheritance  : to inherit a derived class from a base class  ==> function ,  properties.

/*

1. single inheritance 
2. multiple inheritance
3. multi level inheritance
4. hirearchy
5. hybrid  ==> solve  diamond problem using  virtual function  . 
*/

// single inheritance  :
/*
#include <iostream>
using namespace std;
class student   // base class 
{
    public :    
        string name ="diya"; 
        int  age=19; 
};
class teacher : public student   // derived class
{
    public :    
        string course ="c++";
    void show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"course is : "<<course<<endl;
    }
};
int  main() 
{   
        teacher t1; 
        // t1.show(); 
        cout<<"student name is : "<<t1.name<<endl;
        cout<<"student age is : "<<t1.age<<endl;
        cout<<"student course is : "<<t1.course<<endl;

        t1.name ="nishit"; 
        t1.age =20;
        t1.course ="java";
        t1.show();
        return 0; 

}
    */

// private  : 
/*
#include <iostream>
using namespace std;
class student   // base class 
{
    private :    
        string name ="diya"; 
        int  age=19; 
    public : 
        void display()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};
class teacher : public student   // derived class
{
    public :    
        string course ="c++";
    void show()
    {
    //    display(); 
        cout<<"course is : "<<course<<endl;
    }
};
int  main() 
{   
        teacher t1; 
        t1.display(); 
        t1.show(); 
        return 0; 

}
*/ 

// ex :3 
/*
#include <iostream>
using namespace std;
class student   // base class 
{
    protected :    
        string name ="diya"; 
        int  age=19; 
    
};
class teacher : public student   // derived class
{
    public :    
        string course ="c++";
    void show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"course is : "<<course<<endl;
    }
};
int  main() 
{   
        teacher t1; 
        t1.show(); 

        return 0; 

}
*/

// ex : 4 

#include <iostream>
using namespace std;
class student   // base class
{
    public : 
        string name ; 
        int  age;
    student(string n, int a)
    {
            name =n; 
            age =a; 
    }
};
class teacher : public student   // derived class
{
    public : 
        string course ;
    teacher(string n, int  a , string c):student(n,a) // base class constructor
    {
        course =c;
    }
    void  show()
    {

        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"course is : "<<course<<endl;
    }   
};
int main()
{
    teacher t1("diya",19,"c++");
    t1.show();
    return 0; 
}
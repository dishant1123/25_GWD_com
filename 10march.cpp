/*
polymorphism  : means  many forms . 

its  allows the same funcations   name or  operator to behave diffrently in different situations.

1.complie time  polymorphism :function  overloading , operator overloading 
2. run time  polymorphism : function  overriding using  virtual function  

*/

// ex :1 
/*
compile time polymorphism :  when multiple  functions have the same name  but different parameters. 
*/
/*
#include <iostream>
using namespace std;
class math 
{
    public : 
        int add(int a,int b) 
        {
            return a+b;
        }
        int add(int a,int b,int c)
        {
            return a+b+c;
        }
        int add(int a)
        {
            return a; 
        }
        
};
int main()
{
    math m; 

    cout<<m.add(12,13)<<endl; 
    cout<<m.add(12,13,14)<<endl;
    cout<<m.add(12)<<endl;
    return 0 ;

}
*/ 

// ex :2  constructor overloading  : 

#include <iostream>
using namespace std;
class student 
{
    public :
        string  name ; 
        int  rollno;  
        
        student()
        {
            cout<<"default student constructor  called"<<endl;
        }
        student(string n)
        {
            rollno =12; 
            name = n;
            cout<<"student constructor with string called "<<endl;
        }
        student(string n, int r) 
        {
            rollno = r;
            name =n; 
            cout<<"parameterized constructor called"<<endl;
        }
        student(const student &s)
        {
            rollno =s.rollno; 
            name =s.name;
            cout<<"copy constructor called"<<endl;
        }
        
        void  show()
        {
            cout<<"name : "<<name<<" rollno : "<<rollno<<endl;
        }
};
int main()
{
    student s;   // default constructor called

    student s1("nishit");// student constructor with string called
    s1.show(); 

    student s2("nishit",17);  // parameterized constructor called
    s2.show();

    student s3(s1); // copy constructor called
    s3.show(); 

    return 0; 
}

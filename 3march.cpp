/*
virtual function  : polymorphism  ==> run time  polymorphsim 
virtual inheritance : diamomnd of inheritance

==> virtual  keyword : 

*/
/*
#include <iostream>
using namespace std;
class person 
{
    protected : 
        string name ; 
    private : 
        int age; 
    public : 
        person(string n="",int  a=0)
        {
            name =n; 
            age =a; 
            cout<<"person constructor called"<<endl;
        }
    void showperson()
    {
        cout<<"name is  : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
class student :virtual public person 
{
    protected : 
        int rollno; 
    public :
        student(int  r=0 )
        {
            rollno =r ;
            cout<<"student constructor called"<<endl;
        }
};
class teacher : virtual public person
{
    protected : 
        string  subject; 
    public : 
        teacher(string s="")
        {
            subject =s;
            cout<<"teacher constructor called"<<endl;
        }

};

class result : public student ,public teacher 
{
    private :
        float marks; 
    public : 
        result(string n ,int  a,int r , string s, float m):student(r),teacher(s),person(n,a)
        {
            marks =m; 
        }
    void display()
    {
        cout<<"\n---------RESULT INFORMATION------------\n"; 
        student ::showperson(); 
        cout<<"rollno  is  : "<<rollno<<endl;
        cout<<"subject is : "<<subject<<endl;
        cout<<"marks is : "<<marks<<endl;
    }
};
int main()
{
    result r1("krishna",19,23,"python",89);
    r1.display();
    return 0; 
}

*/ 
/*
person  class  2 name  2 age  

person  should be shared among all derived classes
its crerate only one  copy of person . 


if multiple classes inherit person make sure only one shared copy exists. 
only one name  
only one age 
person  ==> constructor  called one time 
no ambiguity

*/


// encapsulation  : 

/*
meaning : its means where data(variable) and  methods(function) are wrapped together inside a single unit called a class and direct access to data is resticted using access specifier like  
public , private , protected. 

why we use ?? 
1.data security  
2.controlled access : data can be accessed only though public methods . 
3.improved maintainability
4.better control and validation

2 method  : 

1. get  method  :==>  a get method  use for recieving the value of a private variable
                 ==> its a return the value 
                 ==> its does not  modify .            

2. set method  : is used for to assign (update)the value  of private variable

            ==> it can be include validation  logic. 
            ==>it modify the data. 


*/

#include <iostream>
using namespace std;
class person 
{
    private : 
        int age=23; 
        string name ="krishna";
    public : 
        void set_age(int a)
        {
            if(a > 0)
            {
                age =a; 
            }
            else 
            {
                cout<<"age should be greater than 0"<<endl;
            }    
        }
        int get_age()
        {
            return age; 
        }
        string get_name()
        {
            return name; 
        }
};

int main()
{
    person p1;
    cout<<"before using  set method  your age is  : "<<endl;
    cout<<"age is  : "<<p1.get_age()<<endl;  // 23 
    cout<<"name is  : "<<p1.get_name()<<endl;  // krishna

    p1.set_age(12);
    cout<<"after using  set method  your age is  : "<<endl;
    cout<<"age is  : "<<p1.get_age()<<endl;  // 12
    cout<<"name is  : "<<p1.get_name()<<endl;  // krishna


    return 0; 

}
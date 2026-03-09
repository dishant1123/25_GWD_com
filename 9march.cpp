/*
friend function  : its a function  not  member of class. but  it can access private member or protected member of class.

normally : 
    private : it is  accessible  within class only.
    protected : it is accessible within class and derived class.

but  if we declare a function as friend  then it  can access private member of class and protected member of class.

syntax :  

class student 
{
    private : 
        string name ;
    public : 
        friend void show(class_name obj); 
};

*/

// ex :1 
/*
#include <iostream>
using namespace std;
class demo 
{
    private : 
        int num;
    public : 
        demo()
        {
            num =10; 
        }
    friend void show(demo d);
};
void show(demo d)
{
    cout<<"num is : "<<d.num<<endl;
}
int main()
{
    demo d1; 
    show(d1);
    return 0 ;
}
*/ 

// ex :2  friend  function to add two  objects . 
/*
#include <iostream>
using namespace std;
class number 
{
    private : 
        int a; 
    public : 
        number(int x)
        {
            a=x; 
        }
    friend void add(number n1, number n2);
};

void add(number n1, number n2)
{
    cout<<"sum is  : "<<n1.a + n2.a<<endl;
}
int main()
{
    number n1(10); 
    number n2(20); 

    add(n1,n2);
    return 0; 
}
*/ 

// ex : 3  inheritance  + encapsulation  + friend function : 

#include <iostream>
using namespace std;
class person 
{
    private : 
        int  salary; 
    protected : 
        string name;
    public : 
        person(string n ,int s)
        {
            name =n; 
            salary =s; 
        }
    int get_salary()
    {
        return salary; 
    }
    friend void show_salary(person p); 
};
class employee : public person
{
    private : 
        int emp_id; 
    public : 
        employee(string n, int s, int id) :person(n,s)
        {
            emp_id =id; 
        }
    void show_employee()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"emp id is : "<<emp_id<<endl;
    }
};
void show_salary(person p)
{
    cout<<"salary is : "<<p.salary<<endl;
}

int main()
{
       employee e1("jasu",90000,101); 
       e1.show_employee();   // name ,emp_id 
       show_salary(e1); 
       
       return 0; 
}
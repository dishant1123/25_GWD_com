/*
hybrid inheritance  :it is combination  one  or  more inheritance , 

combination  ==> multiple  and  multi level  

multiple  :                          multi level 

class a                              class a 
class b                              class b : public a 
class c : public a , public b        class c : public b 

ex : 
              person
               /  \
       student      teacher 
             \      /
              result  
*/

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
class student : public person 
{
    protected : 
        int rollno; 
    public :
        student(string n="", int a=0 ,int  r=0 ):person(n,a)
        {
            rollno =r ;
            cout<<"student constructor called"<<endl;
        }
};
class teacher : public person
{
    protected : 
        string  subject; 
    public : 
        teacher(string n="", int a=0 ,string s=""):person(n,a)
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
        result(string n ,int  a,int r , string s, float m):student(n,a,r),teacher(n,a,s)
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
    result r1("diya",19,23,"python",89); 
    r1.display();
    return 0; 
}
/*

void add(int a=0, int b )
{
    return a+b; 
}
int main()
{
    cout<<add(12); 
    cout<<add(12,56);
    return 0; 
}
*/
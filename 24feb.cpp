/*
multi level  inheritance  : 

class a 
class b : public a 
class c : public b 

  c ==> a,b     b ==>a 
*/
// ex :1 
#include <iostream>
using namespace std;

class person 
{
    private : 
        int age; 
    protected : 
        string name;
    public : 
        person(int age, string name) // this  ==> shows current boject  -> arrow 
        {
            this->name=name; 
            this->age =age; 
            cout<<"person constructor  called"<<endl;
        }
        void showperson()
        {
            cout<<"person name is : "<<this->name<<endl;
            cout<<"person age is : "<<this->age<<endl;
        }
};
class employee : public person  
{
    private : 
        int salary ; 
    protected : 
        int emp_id; 
    public : 
        employee(int age,string name ,int salary,int emp_id):person(age,name)
        {
            this->salary =salary;
            this->emp_id =emp_id;
            cout<<"employee constructor  called"<<endl;
        }
        void showemployee()
        {
            showperson(); 
            cout<<"employee salary is : "<<this->salary<<endl;
            cout<<"employee emp_id is : "<<this->emp_id<<endl;
        }
};
class manager : public employee 
{
    private : 
        string dept; 
    public : 
        manager(string name,int age,int salary,int emp_id,string dept):employee(age,name,salary,emp_id)
        {   
            this->dept =dept;
            cout<<"manager constructor  called"<<endl;
        }
        void showmanager()
        {
            showemployee(); 
            cout<<"manager dept is : "<<this->dept<<endl;
        }
};
int main()
{
    manager m1("diya",19,90000,101,"reasearch"); 
    m1.showmanager();

    employee e1(21,"nishit",100000,102);
    e1.showemployee(); 

    return 0; 
}
/*
multiple  : 

class a 
class b  
class c : public a, public b
*/

/*
hierarchy :

class a 
class b : public a 
class c : public a 

*/


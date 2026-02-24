// ex :1 
/*
#include <iostream>
using namespace std;
class student   // base class
{
    public :  // 
        string name ; 
      
};
class teacher : private student   // derived class
{
    public : 
    teacher()
    {
        name ="diya"; 
    }
    void  show()
    {
        cout<<"name is : "<<name<<endl;
    }   
};
int main()
{
   teacher t1; 
   t1.show();
//    cout<<"student name is : "<<t1.name<<endl;   it private  so  not accessible outside the  class
     return 0; 
}
*/

// multiple inheritance : when one class inherit from more then one base class  
/*
class a 
class b 
class c : public a, public b 

*/

#include <iostream>
using namespace std;
class teacher 
{
    public : 
        string subject; 
    teacher(string s)
    {
        subject =s; 
    }
};
class researcher 
{
    public :
        string field; 
    researcher(string f)
    {
        field =f;
    }

};
class professor :public teacher, public researcher 
{
    public : 
        string name; 
    professor(string s, string f,string n ):teacher(s),researcher(f)
    {
        name =n; 
    }
    void show()
    {
        cout<<"professor name is : "<<name<<endl;
        cout<<"subject is : "<<subject<<endl;
        cout<<"field is : "<<field<<endl;
    }
};
int main()
{
    professor p1("python","AI-ML","diya");
    p1.show(); 
    return 0; 
}

/*
multiple  :                    vs  multi level  : 

class a                            class a 
class b                            class b: public a 
class c: public a, public b        class c : public b 

*/